// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterKanshi",
    products: [
        .library(name: "TreeSitterKanshi", targets: ["TreeSitterKanshi"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterKanshi",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterKanshiTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterKanshi",
            ],
            path: "bindings/swift/TreeSitterKanshiTests"
        )
    ],
    cLanguageStandard: .c11
)
