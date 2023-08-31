#pragma once
#include "token.h"
#include "MonkeyLexer.h"

class Lexer {
public:
  MonkeyLexer * l;
  
  // constructor
  Lexer(std::string input);
  
  // methods
  virtual Token * nextToken();
};
