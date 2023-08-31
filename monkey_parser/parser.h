#pragma once
//#include <any>
#include "ast.h"
#include "lexer.h"
#include "MonkeyParser.h"

class Parser {
public:
  Lexer * l;
  MonkeyParser * p;
  
  // constructor
  Parser(Lexer * l);
  
  // methods
  virtual Program * parseProgram(void);
};

Program *Parse(std::string input);
