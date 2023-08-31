#include "token.h"

Token::Token(size_t type, std::string text) {
  this->tokenType = type;
  this->text = text;
}
