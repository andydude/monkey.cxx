
// Generated from MonkeyParser.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"




class  MonkeyParser : public antlr4::Parser {
public:
  enum {
    FUNCTION = 1, LET = 2, TRUE = 3, FALSE = 4, IF = 5, ELSE = 6, RETURN = 7, 
    IDENT = 8, INTEGER = 9, STRING = 10, EQ_EQ = 11, BANG_EQ = 12, COMMA = 13, 
    COLON = 14, DOT = 15, PLUS = 16, MINUS = 17, SEMICOLON = 18, SLASH = 19, 
    STAR = 20, BANG = 21, EQ = 22, GT = 23, LT = 24, LPAREN = 25, RPAREN = 26, 
    LBRACE = 27, RBRACE = 28, LBRACKET = 29, RBRACKET = 30, WS = 31
  };

  enum {
    RuleProgram = 0, RuleStatement = 1, RuleBlockStatement = 2, RuleExpressionStatement = 3, 
    RuleLetStatement = 4, RuleReturnStatement = 5, RuleExpressionList = 6, 
    RuleExpression = 7, RuleBinaryExpression = 8, RuleEqualOperator = 9, 
    RuleRelOperator = 10, RuleTermOperator = 11, RuleFactorOperator = 12, 
    RulePrefixExpression = 13, RulePrefixOperator = 14, RulePostfixExpression = 15, 
    RulePostfixOperator = 16, RulePrimaryExpression = 17, RuleGroupExpression = 18, 
    RuleConditionExpression = 19, RuleFunctionLiteral = 20, RuleIdentifierList = 21, 
    RuleIdentifier = 22, RuleLiteralExpression = 23, RuleBooleanLiteral = 24, 
    RuleIntegerLiteral = 25, RuleStringLiteral = 26, RuleArrayListLiteral = 27, 
    RuleHashMapLiteral = 28, RuleHashMemberList = 29, RuleHashMember = 30
  };

  explicit MonkeyParser(antlr4::TokenStream *input);
  ~MonkeyParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgramContext;
  class StatementContext;
  class BlockStatementContext;
  class ExpressionStatementContext;
  class LetStatementContext;
  class ReturnStatementContext;
  class ExpressionListContext;
  class ExpressionContext;
  class BinaryExpressionContext;
  class EqualOperatorContext;
  class RelOperatorContext;
  class TermOperatorContext;
  class FactorOperatorContext;
  class PrefixExpressionContext;
  class PrefixOperatorContext;
  class PostfixExpressionContext;
  class PostfixOperatorContext;
  class PrimaryExpressionContext;
  class GroupExpressionContext;
  class ConditionExpressionContext;
  class FunctionLiteralContext;
  class IdentifierListContext;
  class IdentifierContext;
  class LiteralExpressionContext;
  class BooleanLiteralContext;
  class IntegerLiteralContext;
  class StringLiteralContext;
  class ArrayListLiteralContext;
  class HashMapLiteralContext;
  class HashMemberListContext;
  class HashMemberContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockStatementContext *blockStatement();
    ExpressionStatementContext *expressionStatement();
    LetStatementContext *letStatement();
    ReturnStatementContext *returnStatement();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  BlockStatementContext : public antlr4::ParserRuleContext {
  public:
    BlockStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockStatementContext* blockStatement();

  class  ExpressionStatementContext : public antlr4::ParserRuleContext {
  public:
    ExpressionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *SEMICOLON();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionStatementContext* expressionStatement();

  class  LetStatementContext : public antlr4::ParserRuleContext {
  public:
    LetStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LET();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *EQ();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *SEMICOLON();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LetStatementContext* letStatement();

  class  ReturnStatementContext : public antlr4::ParserRuleContext {
  public:
    ReturnStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *SEMICOLON();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReturnStatementContext* returnStatement();

  class  ExpressionListContext : public antlr4::ParserRuleContext {
  public:
    ExpressionListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionListContext* expressionList();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BinaryExpressionContext *binaryExpression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();

  class  BinaryExpressionContext : public antlr4::ParserRuleContext {
  public:
    BinaryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrefixExpressionContext *prefixExpression();
    std::vector<BinaryExpressionContext *> binaryExpression();
    BinaryExpressionContext* binaryExpression(size_t i);
    FactorOperatorContext *factorOperator();
    TermOperatorContext *termOperator();
    RelOperatorContext *relOperator();
    EqualOperatorContext *equalOperator();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BinaryExpressionContext* binaryExpression();
  BinaryExpressionContext* binaryExpression(int precedence);
  class  EqualOperatorContext : public antlr4::ParserRuleContext {
  public:
    EqualOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQ_EQ();
    antlr4::tree::TerminalNode *BANG_EQ();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EqualOperatorContext* equalOperator();

  class  RelOperatorContext : public antlr4::ParserRuleContext {
  public:
    RelOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *GT();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RelOperatorContext* relOperator();

  class  TermOperatorContext : public antlr4::ParserRuleContext {
  public:
    TermOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TermOperatorContext* termOperator();

  class  FactorOperatorContext : public antlr4::ParserRuleContext {
  public:
    FactorOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STAR();
    antlr4::tree::TerminalNode *SLASH();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FactorOperatorContext* factorOperator();

  class  PrefixExpressionContext : public antlr4::ParserRuleContext {
  public:
    PrefixExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PostfixExpressionContext *postfixExpression();
    std::vector<PrefixOperatorContext *> prefixOperator();
    PrefixOperatorContext* prefixOperator(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrefixExpressionContext* prefixExpression();

  class  PrefixOperatorContext : public antlr4::ParserRuleContext {
  public:
    PrefixOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BANG();
    antlr4::tree::TerminalNode *MINUS();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrefixOperatorContext* prefixOperator();

  class  PostfixExpressionContext : public antlr4::ParserRuleContext {
  public:
    PostfixExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrimaryExpressionContext *primaryExpression();
    std::vector<PostfixOperatorContext *> postfixOperator();
    PostfixOperatorContext* postfixOperator(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PostfixExpressionContext* postfixExpression();

  class  PostfixOperatorContext : public antlr4::ParserRuleContext {
  public:
    PostfixOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    ExpressionListContext *expressionList();
    antlr4::tree::TerminalNode *LBRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RBRACKET();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PostfixOperatorContext* postfixOperator();

  class  PrimaryExpressionContext : public antlr4::ParserRuleContext {
  public:
    PrimaryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    GroupExpressionContext *groupExpression();
    ConditionExpressionContext *conditionExpression();
    FunctionLiteralContext *functionLiteral();
    IdentifierContext *identifier();
    LiteralExpressionContext *literalExpression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrimaryExpressionContext* primaryExpression();

  class  GroupExpressionContext : public antlr4::ParserRuleContext {
  public:
    GroupExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GroupExpressionContext* groupExpression();

  class  ConditionExpressionContext : public antlr4::ParserRuleContext {
  public:
    ConditionExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<BlockStatementContext *> blockStatement();
    BlockStatementContext* blockStatement(size_t i);
    antlr4::tree::TerminalNode *ELSE();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionExpressionContext* conditionExpression();

  class  FunctionLiteralContext : public antlr4::ParserRuleContext {
  public:
    FunctionLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    BlockStatementContext *blockStatement();
    IdentifierContext *identifier();
    IdentifierListContext *identifierList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionLiteralContext* functionLiteral();

  class  IdentifierListContext : public antlr4::ParserRuleContext {
  public:
    IdentifierListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierListContext* identifierList();

  class  IdentifierContext : public antlr4::ParserRuleContext {
  public:
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENT();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierContext* identifier();

  class  LiteralExpressionContext : public antlr4::ParserRuleContext {
  public:
    LiteralExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BooleanLiteralContext *booleanLiteral();
    IntegerLiteralContext *integerLiteral();
    StringLiteralContext *stringLiteral();
    ArrayListLiteralContext *arrayListLiteral();
    HashMapLiteralContext *hashMapLiteral();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralExpressionContext* literalExpression();

  class  BooleanLiteralContext : public antlr4::ParserRuleContext {
  public:
    BooleanLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BooleanLiteralContext* booleanLiteral();

  class  IntegerLiteralContext : public antlr4::ParserRuleContext {
  public:
    IntegerLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntegerLiteralContext* integerLiteral();

  class  StringLiteralContext : public antlr4::ParserRuleContext {
  public:
    StringLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StringLiteralContext* stringLiteral();

  class  ArrayListLiteralContext : public antlr4::ParserRuleContext {
  public:
    ArrayListLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACKET();
    antlr4::tree::TerminalNode *RBRACKET();
    ExpressionListContext *expressionList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrayListLiteralContext* arrayListLiteral();

  class  HashMapLiteralContext : public antlr4::ParserRuleContext {
  public:
    HashMapLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    HashMemberListContext *hashMemberList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HashMapLiteralContext* hashMapLiteral();

  class  HashMemberListContext : public antlr4::ParserRuleContext {
  public:
    HashMemberListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<HashMemberContext *> hashMember();
    HashMemberContext* hashMember(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HashMemberListContext* hashMemberList();

  class  HashMemberContext : public antlr4::ParserRuleContext {
  public:
    HashMemberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *COLON();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HashMemberContext* hashMember();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool binaryExpressionSempred(BinaryExpressionContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

