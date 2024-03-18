# iOS SwiftUI SDK

## Introduction

The Atomic iOS SwiftUI SDK is a dynamic framework for integrating an Atomic stream container into your iOS SwiftUI app, presenting cards from a stream to your end users.

The SDK is written in Swift and supports iOS 16.0 and above.

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
pod 'AtomicCards', '0.1.0'
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
