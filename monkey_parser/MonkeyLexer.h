
// Generated from MonkeyLexer.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"




class  MonkeyLexer : public antlr4::Lexer {
public:
  enum {
    FUNCTION = 1, LET = 2, TRUE = 3, FALSE = 4, IF = 5, ELSE = 6, RETURN = 7, 
    IDENT = 8, INTEGER = 9, STRING = 10, EQ_EQ = 11, BANG_EQ = 12, COMMA = 13, 
    COLON = 14, DOT = 15, PLUS = 16, MINUS = 17, SEMICOLON = 18, SLASH = 19, 
    STAR = 20, BANG = 21, EQ = 22, GT = 23, LT = 24, LPAREN = 25, RPAREN = 26, 
    LBRACE = 27, RBRACE = 28, LBRACKET = 29, RBRACKET = 30, WS = 31
  };

  explicit MonkeyLexer(antlr4::CharStream *input);
  ~MonkeyLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

