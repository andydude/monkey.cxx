#include <iostream>
#include <sstream>
#include "parser.h"

#define MAX_LEN 1024
#define PROMPT ">> "

void replStart(std::istream &cin, std::ostream &cout) {
  cout << PROMPT;
  
  char buffer[MAX_LEN+1];
  cin.getline(buffer, MAX_LEN);
  Program * program = Parse(std::string(buffer));

  cout << program->toString();
  cout << std::endl;
}


int main(int argc, char **argv)
{
  replStart(std::cin, std::cout);
  return 0;
}
