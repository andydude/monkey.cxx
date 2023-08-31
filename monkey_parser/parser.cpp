#include "antlr4-runtime.h"
#include "parser.h"
#include "visitor.h"

Parser::Parser(Lexer * l) {
  antlr4::CommonTokenStream * tstream = new antlr4::CommonTokenStream(
    l->l, antlr4::Token::DEFAULT_CHANNEL);
  this->p = new MonkeyParser(tstream);
}

Program * Parser::parseProgram(void) {
  MonkeyAstVisitor * visitor = new MonkeyAstVisitor();
  Program * program = this->p->program()->accept(visitor);
  return program;
}

Program * Parse(std::string input) {
  Lexer * l = new Lexer(input);
  Parser * p = new Parser(l);
  return p->parseProgram();
}
