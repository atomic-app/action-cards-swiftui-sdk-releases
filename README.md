# iOS SwiftUI SDK
## Introduction

:::info
This guide only includes features related to the SwiftUI SDK. For a full SDK guide of the latest stable version, see [iOS SDK guide](https://documentation.atomic.io/sdks/ios).
:::

The Atomic iOS SwiftUI SDK is a dynamic framework for integrating an Atomic stream container into your SwiftUI app, presenting cards from a stream to your end users.

The SwiftUI SDK is written in Swift and supports iOS 16.0 and above.

## Installation

The SDK can be installed using CocoaPods, Swift Package Manager, or manually.

### CocoaPods

1. Add the path to the SDK spec repo to your Podfile, along with the default specs repo:

```ruby
source 'https://github.com/atomic-app/action-cards-ios-sdk-specs.git'
source 'https://github.com/CocoaPods/Specs.git'
```

2. Add the SDK as a dependency. 

```ruby
pod 'AtomicCards', '24.1.0'
```

3. Run `pod update`.

#### Alternative way to install Atomic SwiftUI SDK

Alternatively, you can install Atomic SDK directly through a git path. This will install the latest Atomic SwiftUI SDK.

```ruby
pod 'AtomicCards', :git => 'https://github.com/atomic-app/action-cards-swiftui-sdk-releases.git'
```
**Note**: Currently you may face a known issue of a "Sandbox: rsync" failing message after integration. You can update your Xcode project build option `ENABLE_USER_SCRIPT_SANDBOXING` to 'No' to resolve this issue.

### Swift Package Manager

1. Open your Xcode project, and choose File > Add Packages.
2. Enter `https://github.com/atomic-app/action-cards-swiftui-sdk-releases` in the upper right text field 'Search or Enter Package URL'.
3. Set the dependency rule and click 'Add Package'.
4. Add both `AtomicSDK` and `AtomicSwiftUISDK` to your target.

### Manual Installation

1. You can download releases of the SDK from the [Releases page](https://github.com/atomic-app/action-cards-swiftui-sdk-releases/releases) on Github.
2. Once you've downloaded the version you need, navigate to your project in Xcode and select the "General" settings tab.
3. Drag both `AtomicSDK.xcframework` and `AtomicSwiftUISDK.xcframework` from the directory where you unzipped the release, to the `Embedded Binaries` section.
4. When prompted, ensure that "Copy items if needed" is selected, and then click "Finish".

## Initializing the SDK

As per the [standard iOS SDK](https://documentation.atomic.io/sdks/ios#setup) you need to initialise the SDK before you can do anything else. With SwiftUI you can place it in the `init` function of your `App` subclass. For example:

```swift
import AtomicSDK

@main
struct SwiftUIBoilerplateApp: App {
    
    init() {
        AACSession.login(withEnvironmentId: "<your envid>", apiKey: "<your api key>", sessionDelegate: <your session delegate>, apiBaseUrl: <your api base URL>)
    }
    
    var body: some Scene {
        WindowGroup {
            ContentView()
        }
    }
}
```

## Displaying containers

To display a vertical Stream Container in your view, call `StreamContainer` within your views `body` by specifying the flag indicating its presence in a navigation stack, and providing the container Id. `StreamContainer` also accepts a `configuration` object that can be ignored by default.

For example:

```swift
    var body: some View {
        NavigationStack {
            VStack {
                NavigationLink {
                    ZStack {
                        StreamContainer(isInNavigationStack: true, containerId: "<stream container id>")
                            .navigationTitle("Atomic Stream")
                    }
                } label: {
                    Text("Messages")
                }
            }
            .padding()
            .navigationTitle("Atomic Boilerplate")
            .navigationBarTitleDisplayMode(.large)
        }
    }
```

:::info NavigationStack Presence

Properly setting the `isInNavigationStack` flag is crucial. In SwiftUI, nested navigation stacks can lead to unexpected behaviours. As such, the container will not attempt to generate its own navigation stack if indicated that it is already within an existing navigation stack.

:::

The `configuration` object is of type `ContainerConfiguration` and inherits the majority of its properties from [AACConfiguration](https://documentation.atomic.io/sdks/ios#configurations-options). It has been adapted to align with SwiftUI conventions.

For example to set your configuration object in your view model you could do something like:

```swift
    var config = ContainerConfiguration()
    
    init() {
        config.setCustomValue("test", for: .cardListTitle)
    }
```

This example sets the stream header title to "test".

To use the configuration you could pass it into the `StreamContainer` instance:

```swift
StreamContainer(isInNavigationStack: true, containerId: "1234", configuration: viewModel.config)
```
