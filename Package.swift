// swift-tools-version:5.7

import PackageDescription

let package = Package(
    name: "AtomicCards",
    platforms: [
        .iOS(.v16)
    ],
    products: [
        .library(
            name: "AtomicSDK",
            targets: ["AtomicSDK"]),
        .library(
            name: "AtomicSwiftUISDK",
            targets: ["AtomicSwiftUISDK"]),
    ],
    dependencies: [],
    targets: [
        .binaryTarget(name: "AtomicSDK", path: "iOS/AtomicSDK.xcframework"),
        .binaryTarget(name: "AtomicSwiftUISDK", path: "iOS/AtomicSwiftUISDK.xcframework")
    ]
)
