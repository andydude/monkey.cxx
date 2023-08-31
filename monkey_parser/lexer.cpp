#include "antlr4-runtime.h"
#include "lexer.h"

Lexer::Lexer(std::string input) {
  // WTF how do you construct a CharStream
  auto istream = new antlr4::ANTLRInputStream(input);
  this->l = new MonkeyLexer(istream);
  // this->l->setText(input);
}

Token * Lexer::nextToken() {
  auto antlrToken = this->l->nextToken();
  auto ttype = antlrToken->getType();
  auto text = antlrToken->getText();
  return new Token(ttype, text);
}
