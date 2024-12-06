import XCTest
import SwiftTreeSitter
import TreeSitterKanshi

final class TreeSitterKanshiTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_kanshi())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Kanshi grammar")
    }
}
