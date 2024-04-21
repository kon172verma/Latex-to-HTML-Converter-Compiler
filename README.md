# LaTeX to HTML Compiler/Converter

**LaTeX:** is a software system for typesetting documents. LaTeX markup describes the content and layout of the document, as opposed to the formatted text found in WYSIWYG word processors like Microsoft Word, LibreOffice Writer and Apple Pages.

The features(tags) of LaTeX which we consider in this compiler are:-

- \section
- \subsection
- \par
- \label
- \ref
- \textbf
- \textit
- \underline
- \enumerate
- \item
- tabular environment
- figure environment
- \includegraphics
- \caption
- Math mode with $...$
- \frac{numerator}{denominator}
- \sqrt
- $\sum... $
- $\int...   $

The converted code to HTML can be viewed in any web browser.

Used **Flex** - for Lexical Analysis of input data, i.e. converting the input stream to a string of tokens.

Used **Bison** - Bison is a general-purpose parser generator that converts an annotated context-free grammar into a deterministic LR or generalized LR (GLR) parser employing LALR(1) parser tables.

**Abstract Syntax Tree:** The representation of SourceCode as a tree of nodes representing constants or variables (leaves) and operators or statements (inner nodes). Also called a "parse tree". An AbstractSyntaxTree is often the output of a parser (or the "parse stage" of a compiler), and forms the input to semantic analysis and code generation (this assumes a phased compiler; many compilers interleave the phases in order to conserve memory).
