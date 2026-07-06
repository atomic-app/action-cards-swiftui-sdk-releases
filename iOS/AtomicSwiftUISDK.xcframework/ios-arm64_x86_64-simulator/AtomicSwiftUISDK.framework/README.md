Vendored SwiftDraw 0.27.0 source used by AtomicSwiftUISDK's internal SVG rendering path.

Adaptations:
- Source is compiled directly into the AtomicSwiftUISDK target instead of as a Swift package.
- Swift 6 `package` access and narrow import visibility were converted to Swift 5-compatible internal/default access and regular imports.
- Command-line, SFSymbol/codegen, and unrelated formatter surfaces were omitted unless retained renderer code required a helper.

SwiftDraw is distributed under the zlib license. Upstream source headers are preserved in vendored files.
