#pragma once

#include <cstddef>
#include <string>

class Token {
public:
  size_t tokenType;
  std::string text;
  // constructor
  Token(size_t type, std::string text);
};
