
// Generated from MonkeyParser.g4 by ANTLR 4.9.2


#include "MonkeyParserVisitor.h"

#include "MonkeyParser.h"


using namespace antlrcpp;
using namespace antlr4;

MonkeyParser::MonkeyParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

MonkeyParser::~MonkeyParser() {
  delete _interpreter;
}

std::string MonkeyParser::getGrammarFileName() const {
  return "MonkeyParser.g4";
}

const std::vector<std::string>& MonkeyParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& MonkeyParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

MonkeyParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MonkeyParser::ProgramContext::EOF() {
  return getToken(MonkeyParser::EOF, 0);
}

std::vector<MonkeyParser::StatementContext *> MonkeyParser::ProgramContext::statement() {
  return getRuleContexts<MonkeyParser::StatementContext>();
}

MonkeyParser::StatementContext* MonkeyParser::ProgramContext::statement(size_t i) {
  return getRuleContext<MonkeyParser::StatementContext>(i);
}


size_t MonkeyParser::ProgramContext::getRuleIndex() const {
  return MonkeyParser::RuleProgram;
}


antlrcpp::Any MonkeyParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MonkeyParserVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

MonkeyParser::ProgramContext* MonkeyParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, MonkeyParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(63); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(62);
      statement();
      setState(65); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MonkeyParser::FUNCTION)
      | (1ULL << MonkeyParser::LET)
      | (1ULL << MonkeyParser::TRUE)
      | (1ULL << MonkeyParser::FALSE)
      | (1ULL << MonkeyParser::IF)
      | (1ULL << MonkeyParser::RETURN)
      | (1ULL << MonkeyParser::IDENT)
      | (1ULL << MonkeyParser::INTEGER)
      | (1ULL << MonkeyParser::STRING)
      | (1ULL << MonkeyParser::MINUS)
      | (1ULL << MonkeyParser::BANG)
      | (1ULL << MonkeyParser::LPAREN)
      | (1ULL << MonkeyParser::LBRACE)
      | (1ULL << MonkeyParser::LBRACKET))) != 0));
    setState(67);
    match(MonkeyParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

MonkeyParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MonkeyParser::BlockStatementContext* MonkeyParser::StatementContext::blockStatement() {
  return getRuleContext<MonkeyParser::BlockStatementContext>(0);
}

MonkeyParser::ExpressionStatementContext* MonkeyParser::StatementContext::expressionStatement() {
  return getRuleContext<MonkeyParser::ExpressionStatementContext>(0);
}

MonkeyParser::LetStatementContext* MonkeyParser::StatementContext::letStatement() {
  return getRuleContext<MonkeyParser::LetStatementContext>(0);
}

MonkeyParser::ReturnStatementContext* MonkeyParser::StatementContext::returnStatement() {
  return getRuleContext<MonkeyParser::ReturnStatementContext>(0);
}


size_t MonkeyParser::StatementContext::getRuleIndex() const {
  return MonkeyParser::RuleStatement;
}


antlrcpp::Any MonkeyParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MonkeyParserVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

MonkeyParser::StatementContext* MonkeyParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, MonkeyParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(73);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(69);
      blockStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(70);
      expressionStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(71);
      letStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(72);
      returnStatement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockStatementContext ------------------------------------------------------------------

MonkeyParser::BlockStatementContext::BlockStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MonkeyParser::BlockStatementContext::LBRACE() {
  return getToken(MonkeyParser::LBRACE, 0);
}

tree::TerminalNode* MonkeyParser::BlockStatementContext::RBRACE() {
  return getToken(MonkeyParser::RBRACE, 0);
}

std::vector<MonkeyParser::StatementContext *> MonkeyParser::BlockStatementContext::statement() {
  return getRuleContexts<MonkeyParser::StatementContext>();
}

MonkeyParser::StatementContext* MonkeyParser::BlockStatementContext::statement(size_t i) {
  return getRuleContext<MonkeyParser::StatementContext>(i);
}


size_t MonkeyParser::BlockStatementContext::getRuleIndex() const {
  return MonkeyParser::RuleBlockStatement;
}


antlrcpp::Any MonkeyParser::BlockStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MonkeyParserVisitor*>(visitor))
    return parserVisitor->visitBlockStatement(this);
  else
    return visitor->visitChildren(this);
}

MonkeyParser::BlockStatementContext* MonkeyParser::blockStatement() {
  BlockStatementContext *_localctx = _tracker.createInstance<BlockStatementContext>(_ctx, getState());
  enterRule(_localctx, 4, MonkeyParser::RuleBlockStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(75);
    match(MonkeyParser::LBRACE);
    setState(77); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(76);
      statement();
      setState(79); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MonkeyParser::FUNCTION)
      | (1ULL << MonkeyParser::LET)
      | (1ULL << MonkeyParser::TRUE)
      | (1ULL << MonkeyParser::FALSE)
      | (1ULL << MonkeyParser::IF)
      | (1ULL << MonkeyParser::RETURN)
      | (1ULL << MonkeyParser::IDENT)
      | (1ULL << MonkeyParser::INTEGER)
      | (1ULL << MonkeyParser::STRING)
      | (1ULL << MonkeyParser::MINUS)
      | (1ULL << MonkeyParser::BANG)
      | (1ULL << MonkeyParser::LPAREN)
      | (1ULL << MonkeyParser::LBRACE)
      | (1ULL << MonkeyParser::LBRACKET))) != 0));
    setState(81);
    match(MonkeyParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionStatementContext ------------------------------------------------------------------

MonkeyParser::ExpressionStatementContext::ExpressionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MonkeyParser::ExpressionContext* MonkeyParser::ExpressionStatementContext::expression() {
  return getRuleContext<MonkeyParser::ExpressionContext>(0);
}

tree::TerminalNode* MonkeyParser::ExpressionStatementContext::SEMICOLON() {
  return getToken(MonkeyParser::SEMICOLON, 0);
}


size_t MonkeyParser::ExpressionStatementContext::getRuleIndex() const {
  return MonkeyParser::RuleExpressionStatement;
}


antlrcpp::Any MonkeyParser::ExpressionStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MonkeyParserVisitor*>(visitor))
    return parserVisitor->visitExpressionStatement(this);
  else
    return visitor->visitChildren(this);
}

MonkeyParser::ExpressionStatementContext* MonkeyParser::expressionStatement() {
  ExpressionStatementContext *_localctx = _tracker.createInstance<ExpressionStatementContext>(_ctx, getState());
  enterRule(_localctx, 6, MonkeyParser::RuleExpressionStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(83);
    expression();
    setState(84);
    match(MonkeyParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LetStatementContext ------------------------------------------------------------------

MonkeyParser::LetStatementContext::LetStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MonkeyParser::LetStatementContext::LET() {
  return getToken(MonkeyParser::LET, 0);
}

MonkeyParser::IdentifierContext* MonkeyParser::LetStatementContext::identifier() {
  return getRuleContext<MonkeyParser::IdentifierContext>(0);
}

tree::TerminalNode* MonkeyParser::LetStatementContext::EQ() {
  return getToken(MonkeyParser::EQ, 0);
}

MonkeyParser::ExpressionContext* MonkeyParser::LetStatementContext::expression() {
  return getRuleContext<MonkeyParser::ExpressionContext>(0);
}

tree::TerminalNode* MonkeyParser::LetStatementContext::SEMICOLON() {
  return getToken(MonkeyParser::SEMICOLON, 0);
}


size_t MonkeyParser::LetStatementContext::getRuleIndex() const {
  return MonkeyParser::RuleLetStatement;
}


antlrcpp::Any MonkeyParser::LetStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MonkeyParserVisitor*>(visitor))
    return parserVisitor->visitLetStatement(this);
  else
    return visitor->visitChildren(this);
}

MonkeyParser::LetStatementContext* MonkeyParser::letStatement() {
  LetStatementContext *_localctx = _tracker.createInstance<LetStatementContext>(_ctx, getState());
  enterRule(_localctx, 8, MonkeyParser::RuleLetStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(86);
    match(MonkeyParser::LET);
    setState(87);
    identifier();
    setState(88);
    match(MonkeyParser::EQ);
    setState(89);
    expression();
    setState(90);
    match(MonkeyParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnStatementContext ------------------------------------------------------------------

MonkeyParser::ReturnStatementContext::ReturnStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MonkeyParser::ReturnStatementContext::RETURN() {
  return getToken(MonkeyParser::RETURN, 0);
}

MonkeyParser::ExpressionContext* MonkeyParser::ReturnStatementContext::expression() {
  return getRuleContext<MonkeyParser::ExpressionContext>(0);
}

tree::TerminalNode* MonkeyParser::ReturnStatementContext::SEMICOLON() {
  return getToken(MonkeyParser::SEMICOLON, 0);
}


size_t MonkeyParser::ReturnStatementContext::getRuleIndex() const {
  return MonkeyParser::RuleReturnStatement;
}


antlrcpp::Any MonkeyParser::ReturnStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MonkeyParserVisitor*>(visitor))
    return parserVisitor->visitReturnStatement(this);
  else
    return visitor->visitChildren(this);
}

MonkeyParser::ReturnStatementContext* MonkeyParser::returnStatement() {
  ReturnStatementContext *_localctx = _tracker.createInstance<ReturnStatementContext>(_ctx, getState());
  enterRule(_localctx, 10, MonkeyParser::RuleReturnStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(92);
    match(MonkeyParser::RETURN);
    setState(93);
    expression();
    setState(94);
    match(MonkeyParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionListContext ------------------------------------------------------------------

MonkeyParser::ExpressionListContext::ExpressionListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MonkeyParser::ExpressionContext *> MonkeyParser::ExpressionListContext::expression() {
  return getRuleContexts<MonkeyParser::ExpressionContext>();
}

MonkeyParser::ExpressionContext* MonkeyParser::ExpressionListContext::expression(size_t i) {
  return getRuleContext<MonkeyParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> MonkeyParser::ExpressionListContext::COMMA() {
  return getTokens(MonkeyParser::COMMA);
}

tree::TerminalNode* MonkeyParser::ExpressionListContext::COMMA(size_t i) {
  return getToken(MonkeyParser::COMMA, i);
}


size_t MonkeyParser::ExpressionListContext::getRuleIndex() const {
  return MonkeyParser::RuleExpressionList;
}


antlrcpp::Any MonkeyParser::ExpressionListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MonkeyParserVisitor*>(visitor))
    return parserVisitor->visitExpressionList(this);
  else
    return visitor->visitChildren(this);
}

MonkeyParser::ExpressionListContext* MonkeyParser::expressionList() {
  ExpressionListContext *_localctx = _tracker.createInstance<ExpressionListContext>(_ctx, getState());
  enterRule(_localctx, 12, MonkeyParser::RuleExpressionList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(96);
    expression();
    setState(101);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MonkeyParser::COMMA) {
      setState(97);
      match(MonkeyParser::COMMA);
      setState(98);
      expression();
      setState(103);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

MonkeyParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MonkeyParser::BinaryExpressionContext* MonkeyParser::ExpressionContext::binaryExpression() {
  return getRuleContext<MonkeyParser::BinaryExpressionContext>(0);
}


size_t MonkeyParser::ExpressionContext::getRuleIndex() const {
  return MonkeyParser::RuleExpression;
}


antlrcpp::Any MonkeyParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MonkeyParserVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

MonkeyParser::ExpressionContext* MonkeyParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 14, MonkeyParser::RuleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(104);
    binaryExpression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BinaryExpressionContext ------------------------------------------------------------------

MonkeyParser::BinaryExpressionContext::BinaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MonkeyParser::PrefixExpressionContext* MonkeyParser::BinaryExpressionContext::prefixExpression() {
  return getRuleContext<MonkeyParser::PrefixExpressionContext>(0);
}

std::vector<MonkeyParser::BinaryExpressionContext *> MonkeyParser::BinaryExpressionContext::binaryExpression() {
  return getRuleContexts<MonkeyParser::BinaryExpressionContext>();
}

MonkeyParser::BinaryExpressionContext* MonkeyParser::BinaryExpressionContext::binaryExpression(size_t i) {
  return getRuleContext<MonkeyParser::BinaryExpressionContext>(i);
}

MonkeyParser::FactorOperatorContext* MonkeyParser::BinaryExpressionContext::factorOperator() {
  return getRuleContext<MonkeyParser::FactorOperatorContext>(0);
}

MonkeyParser::TermOperatorContext* MonkeyParser::BinaryExpressionContext::termOperator() {
  return getRuleContext<MonkeyParser::TermOperatorContext>(0);
}

MonkeyParser::RelOperatorContext* MonkeyParser::BinaryExpressionContext::relOperator() {
  return getRuleContext<MonkeyParser::RelOperatorContext>(0);
}

MonkeyParser::EqualOperatorContext* MonkeyParser::BinaryExpressionContext::equalOperator() {
  return getRuleContext<MonkeyParser::EqualOperatorContext>(0);
}


size_t MonkeyParser::BinaryExpressionContext::getRuleIndex() const {
  return MonkeyParser::RuleBinaryExpression;
}


antlrcpp::Any MonkeyParser::BinaryExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MonkeyParserVisitor*>(visitor))
    return parserVisitor->visitBinaryExpression(this);
  else
    return visitor->visitChildren(this);
}


MonkeyParser::BinaryExpressionContext* MonkeyParser::binaryExpression() {
   return binaryExpression(0);
}

MonkeyParser::BinaryExpressionContext* MonkeyParser::binaryExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  MonkeyParser::BinaryExpressionContext *_localctx = _tracker.createInstance<BinaryExpressionContext>(_ctx, parentState);
  MonkeyParser::BinaryExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 16;
  enterRecursionRule(_localctx, 16, MonkeyParser::RuleBinaryExpression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(107);
    prefixExpression();
    _ctx->stop = _input->LT(-1);
    setState(127);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(125);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<BinaryExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleBinaryExpression);
          setState(109);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(110);
          factorOperator();
          setState(111);
          binaryExpression(5);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<BinaryExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleBinaryExpression);
          setState(113);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(114);
          termOperator();
          setState(115);
          binaryExpression(4);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<BinaryExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleBinaryExpression);
          setState(117);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(118);
          relOperator();
          setState(119);
          binaryExpression(3);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<BinaryExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleBinaryExpression);
          setState(121);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(122);
          equalOperator();
          setState(123);
          binaryExpression(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(129);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- EqualOperatorContext ------------------------------------------------------------------

MonkeyParser::EqualOperatorContext::EqualOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MonkeyParser::EqualOperatorContext::EQ_EQ() {
  return getToken(MonkeyParser::EQ_EQ, 0);
}

tree::TerminalNode* MonkeyParser::EqualOperatorContext::BANG_EQ() {
  return getToken(MonkeyParser::BANG_EQ, 0);
}


size_t MonkeyParser::EqualOperatorContext::getRuleIndex() const {
  return MonkeyParser::RuleEqualOperator;
}


antlrcpp::Any MonkeyParser::EqualOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MonkeyParserVisitor*>(visitor))
    return parserVisitor->visitEqualOperator(this);
  else
    return visitor->visitChildren(this);
}

MonkeyParser::EqualOperatorContext* MonkeyParser::equalOperator() {
  EqualOperatorContext *_localctx = _tracker.createInstance<EqualOperatorContext>(_ctx, getState());
  enterRule(_localctx, 18, MonkeyParser::RuleEqualOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(130);
    _la = _input->LA(1);
    if (!(_la == MonkeyParser::EQ_EQ

    || _la == MonkeyParser::BANG_EQ)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RelOperatorContext ------------------------------------------------------------------

MonkeyParser::RelOperatorContext::RelOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MonkeyParser::RelOperatorContext::LT() {
  return getToken(MonkeyParser::LT, 0);
}

tree::TerminalNode* MonkeyParser::RelOperatorContext::GT() {
  return getToken(MonkeyParser::GT, 0);
}


size_t MonkeyParser::RelOperatorContext::getRuleIndex() const {
  return MonkeyParser::RuleRelOperator;
}


antlrcpp::Any MonkeyParser::RelOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MonkeyParserVisitor*>(visitor))
    return parserVisitor->visitRelOperator(this);
  else
    return visitor->visitChildren(this);
}

MonkeyParser::RelOperatorContext* MonkeyParser::relOperator() {
  RelOperatorContext *_localctx = _tracker.createInstance<RelOperatorContext>(_ctx, getState());
  enterRule(_localctx, 20, MonkeyParser::RuleRelOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(132);
    _la = _input->LA(1);
    if (!(_la == MonkeyParser::GT

    || _la == MonkeyParser::LT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TermOperatorContext ------------------------------------------------------------------

MonkeyParser::TermOperatorContext::TermOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MonkeyParser::TermOperatorContext::PLUS() {
  return getToken(MonkeyParser::PLUS, 0);
}

tree::TerminalNode* MonkeyParser::TermOperatorContext::MINUS() {
  return getToken(MonkeyParser::MINUS, 0);
}


size_t MonkeyParser::TermOperatorContext::getRuleIndex() const {
  return MonkeyParser::RuleTermOperator;
}


antlrcpp::Any MonkeyParser::TermOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MonkeyParserVisitor*>(visitor))
    return parserVisitor->visitTermOperator(this);
  else
    return visitor->visitChildren(this);
}

MonkeyParser::TermOperatorContext* MonkeyParser::termOperator() {
  TermOperatorContext *_localctx = _tracker.createInstance<TermOperatorContext>(_ctx, getState());
  enterRule(_localctx, 22, MonkeyParser::RuleTermOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(134);
    _la = _input->LA(1);
    if (!(_la == MonkeyParser::PLUS

    || _la == MonkeyParser::MINUS)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FactorOperatorContext ------------------------------------------------------------------

MonkeyParser::FactorOperatorContext::FactorOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MonkeyParser::FactorOperatorContext::STAR() {
  return getToken(MonkeyParser::STAR, 0);
}

tree::TerminalNode* MonkeyParser::FactorOperatorContext::SLASH() {
  return getToken(MonkeyParser::SLASH, 0);
}


size_t MonkeyParser::FactorOperatorContext::getRuleIndex() const {
  return MonkeyParser::RuleFactorOperator;
}


antlrcpp::Any MonkeyParser::FactorOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MonkeyParserVisitor*>(visitor))
    return parserVisitor->visitFactorOperator(this);
  else
    return visitor->visitChildren(this);
}

MonkeyParser::FactorOperatorContext* MonkeyParser::factorOperator() {
  FactorOperatorContext *_localctx = _tracker.createInstance<FactorOperatorContext>(_ctx, getState());
  enterRule(_localctx, 24, MonkeyParser::RuleFactorOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(136);
    _la = _input->LA(1);
    if (!(_la == MonkeyParser::SLASH

    || _la == MonkeyParser::STAR)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrefixExpressionContext ------------------------------------------------------------------

MonkeyParser::PrefixExpressionContext::PrefixExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MonkeyParser::PostfixExpressionContext* MonkeyParser::PrefixExpressionContext::postfixExpression() {
  return getRuleContext<MonkeyParser::PostfixExpressionContext>(0);
}

std::vector<MonkeyParser::PrefixOperatorContext *> MonkeyParser::PrefixExpressionContext::prefixOperator() {
  return getRuleContexts<MonkeyParser::PrefixOperatorContext>();
}

MonkeyParser::PrefixOperatorContext* MonkeyParser::PrefixExpressionContext::prefixOperator(size_t i) {
  return getRuleContext<MonkeyParser::PrefixOperatorContext>(i);
}


size_t MonkeyParser::PrefixExpressionContext::getRuleIndex() const {
  return MonkeyParser::RulePrefixExpression;
}


antlrcpp::Any MonkeyParser::PrefixExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MonkeyParserVisitor*>(visitor))
    return parserVisitor->visitPrefixExpression(this);
  else
    return visitor->visitChildren(this);
}

MonkeyParser::PrefixExpressionContext* MonkeyParser::prefixExpression() {
  PrefixExpressionContext *_localctx = _tracker.createInstance<PrefixExpressionContext>(_ctx, getState());
  enterRule(_localctx, 26, MonkeyParser::RulePrefixExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(141);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MonkeyParser::MINUS

    || _la == MonkeyParser::BANG) {
      setState(138);
      prefixOperator();
      setState(143);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(144);
    postfixExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrefixOperatorContext ------------------------------------------------------------------

MonkeyParser::PrefixOperatorContext::PrefixOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MonkeyParser::PrefixOperatorContext::BANG() {
  return getToken(MonkeyParser::BANG, 0);
}

tree::TerminalNode* MonkeyParser::PrefixOperatorContext::MINUS() {
  return getToken(MonkeyParser::MINUS, 0);
}


size_t MonkeyParser::PrefixOperatorContext::getRuleIndex() const {
  return MonkeyParser::RulePrefixOperator;
}


antlrcpp::Any MonkeyParser::PrefixOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MonkeyParserVisitor*>(visitor))
    return parserVisitor->visitPrefixOperator(this);
  else
    return visitor->visitChildren(this);
}

MonkeyParser::PrefixOperatorContext* MonkeyParser::prefixOperator() {
  PrefixOperatorContext *_localctx = _tracker.createInstance<PrefixOperatorContext>(_ctx, getState());
  enterRule(_localctx, 28, MonkeyParser::RulePrefixOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(146);
    _la = _input->LA(1);
    if (!(_la == MonkeyParser::MINUS

    || _la == MonkeyParser::BANG)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PostfixExpressionContext ------------------------------------------------------------------

MonkeyParser::PostfixExpressionContext::PostfixExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MonkeyParser::PrimaryExpressionContext* MonkeyParser::PostfixExpressionContext::primaryExpression() {
  return getRuleContext<MonkeyParser::PrimaryExpressionContext>(0);
}

std::vector<MonkeyParser::PostfixOperatorContext *> MonkeyParser::PostfixExpressionContext::postfixOperator() {
  return getRuleContexts<MonkeyParser::PostfixOperatorContext>();
}

MonkeyParser::PostfixOperatorContext* MonkeyParser::PostfixExpressionContext::postfixOperator(size_t i) {
  return getRuleContext<MonkeyParser::PostfixOperatorContext>(i);
}


size_t MonkeyParser::PostfixExpressionContext::getRuleIndex() const {
  return MonkeyParser::RulePostfixExpression;
}


antlrcpp::Any MonkeyParser::PostfixExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MonkeyParserVisitor*>(visitor))
    return parserVisitor->visitPostfixExpression(this);
  else
    return visitor->visitChildren(this);
}

MonkeyParser::PostfixExpressionContext* MonkeyParser::postfixExpression() {
  PostfixExpressionContext *_localctx = _tracker.createInstance<PostfixExpressionContext>(_ctx, getState());
  enterRule(_localctx, 30, MonkeyParser::RulePostfixExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(148);
    primaryExpression();
    setState(152);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(149);
        postfixOperator(); 
      }
      setState(154);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PostfixOperatorContext ------------------------------------------------------------------

MonkeyParser::PostfixOperatorContext::PostfixOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MonkeyParser::PostfixOperatorContext::LPAREN() {
  return getToken(MonkeyParser::LPAREN, 0);
}

tree::TerminalNode* MonkeyParser::PostfixOperatorContext::RPAREN() {
  return getToken(MonkeyParser::RPAREN, 0);
}

MonkeyParser::ExpressionListContext* MonkeyParser::PostfixOperatorContext::expressionList() {
  return getRuleContext<MonkeyParser::ExpressionListContext>(0);
}

tree::TerminalNode* MonkeyParser::PostfixOperatorContext::LBRACKET() {
  return getToken(MonkeyParser::LBRACKET, 0);
}

MonkeyParser::ExpressionContext* MonkeyParser::PostfixOperatorContext::expression() {
  return getRuleContext<MonkeyParser::ExpressionContext>(0);
}

tree::TerminalNode* MonkeyParser::PostfixOperatorContext::RBRACKET() {
  return getToken(MonkeyParser::RBRACKET, 0);
}


size_t MonkeyParser::PostfixOperatorContext::getRuleIndex() const {
  return MonkeyParser::RulePostfixOperator;
}


antlrcpp::Any MonkeyParser::PostfixOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MonkeyParserVisitor*>(visitor))
    return parserVisitor->visitPostfixOperator(this);
  else
    return visitor->visitChildren(this);
}

MonkeyParser::PostfixOperatorContext* MonkeyParser::postfixOperator() {
  PostfixOperatorContext *_localctx = _tracker.createInstance<PostfixOperatorContext>(_ctx, getState());
  enterRule(_localctx, 32, MonkeyParser::RulePostfixOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(164);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MonkeyParser::LPAREN: {
        enterOuterAlt(_localctx, 1);
        setState(155);
        match(MonkeyParser::LPAREN);
        setState(157);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << MonkeyParser::FUNCTION)
          | (1ULL << MonkeyParser::TRUE)
          | (1ULL << MonkeyParser::FALSE)
          | (1ULL << MonkeyParser::IF)
          | (1ULL << MonkeyParser::IDENT)
          | (1ULL << MonkeyParser::INTEGER)
          | (1ULL << MonkeyParser::STRING)
          | (1ULL << MonkeyParser::MINUS)
          | (1ULL << MonkeyParser::BANG)
          | (1ULL << MonkeyParser::LPAREN)
          | (1ULL << MonkeyParser::LBRACE)
          | (1ULL << MonkeyParser::LBRACKET))) != 0)) {
          setState(156);
          expressionList();
        }
        setState(159);
        match(MonkeyParser::RPAREN);
        break;
      }

      case MonkeyParser::LBRACKET: {
        enterOuterAlt(_localctx, 2);
        setState(160);
        match(MonkeyParser::LBRACKET);
        setState(161);
        expression();
        setState(162);
        match(MonkeyParser::RBRACKET);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryExpressionContext ------------------------------------------------------------------

MonkeyParser::PrimaryExpressionContext::PrimaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MonkeyParser::GroupExpressionContext* MonkeyParser::PrimaryExpressionContext::groupExpression() {
  return getRuleContext<MonkeyParser::GroupExpressionContext>(0);
}

MonkeyParser::ConditionExpressionContext* MonkeyParser::PrimaryExpressionContext::conditionExpression() {
  return getRuleContext<MonkeyParser::ConditionExpressionContext>(0);
}

MonkeyParser::FunctionLiteralContext* MonkeyParser::PrimaryExpressionContext::functionLiteral() {
  return getRuleContext<MonkeyParser::FunctionLiteralContext>(0);
}

MonkeyParser::IdentifierContext* MonkeyParser::PrimaryExpressionContext::identifier() {
  return getRuleContext<MonkeyParser::IdentifierContext>(0);
}

MonkeyParser::LiteralExpressionContext* MonkeyParser::PrimaryExpressionContext::literalExpression() {
  return getRuleContext<MonkeyParser::LiteralExpressionContext>(0);
}


size_t MonkeyParser::PrimaryExpressionContext::getRuleIndex() const {
  return MonkeyParser::RulePrimaryExpression;
}


antlrcpp::Any MonkeyParser::PrimaryExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MonkeyParserVisitor*>(visitor))
    return parserVisitor->visitPrimaryExpression(this);
  else
    return visitor->visitChildren(this);
}

MonkeyParser::PrimaryExpressionContext* MonkeyParser::primaryExpression() {
  PrimaryExpressionContext *_localctx = _tracker.createInstance<PrimaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 34, MonkeyParser::RulePrimaryExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(171);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MonkeyParser::LPAREN: {
        enterOuterAlt(_localctx, 1);
        setState(166);
        groupExpression();
        break;
      }

      case MonkeyParser::IF: {
        enterOuterAlt(_localctx, 2);
        setState(167);
        conditionExpression();
        break;
      }

      case MonkeyParser::FUNCTION: {
        enterOuterAlt(_localctx, 3);
        setState(168);
        functionLiteral();
        break;
      }

      case MonkeyParser::IDENT: {
        enterOuterAlt(_localctx, 4);
        setState(169);
        identifier();
        break;
      }

      case MonkeyParser::TRUE:
      case MonkeyParser::FALSE:
      case MonkeyParser::INTEGER:
      case MonkeyParser::STRING:
      case MonkeyParser::LBRACE:
      case MonkeyParser::LBRACKET: {
        enterOuterAlt(_localctx, 5);
        setState(170);
        literalExpression();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GroupExpressionContext ------------------------------------------------------------------

MonkeyParser::GroupExpressionContext::GroupExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MonkeyParser::GroupExpressionContext::LPAREN() {
  return getToken(MonkeyParser::LPAREN, 0);
}

MonkeyParser::ExpressionContext* MonkeyParser::GroupExpressionContext::expression() {
  return getRuleContext<MonkeyParser::ExpressionContext>(0);
}

tree::TerminalNode* MonkeyParser::GroupExpressionContext::RPAREN() {
  return getToken(MonkeyParser::RPAREN, 0);
}


size_t MonkeyParser::GroupExpressionContext::getRuleIndex() const {
  return MonkeyParser::RuleGroupExpression;
}


antlrcpp::Any MonkeyParser::GroupExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MonkeyParserVisitor*>(visitor))
    return parserVisitor->visitGroupExpression(this);
  else
    return visitor->visitChildren(this);
}

MonkeyParser::GroupExpressionContext* MonkeyParser::groupExpression() {
  GroupExpressionContext *_localctx = _tracker.createInstance<GroupExpressionContext>(_ctx, getState());
  enterRule(_localctx, 36, MonkeyParser::RuleGroupExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(173);
    match(MonkeyParser::LPAREN);
    setState(174);
    expression();
    setState(175);
    match(MonkeyParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionExpressionContext ------------------------------------------------------------------

MonkeyParser::ConditionExpressionContext::ConditionExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MonkeyParser::ConditionExpressionContext::IF() {
  return getToken(MonkeyParser::IF, 0);
}

tree::TerminalNode* MonkeyParser::ConditionExpressionContext::LPAREN() {
  return getToken(MonkeyParser::LPAREN, 0);
}

MonkeyParser::ExpressionContext* MonkeyParser::ConditionExpressionContext::expression() {
  return getRuleContext<MonkeyParser::ExpressionContext>(0);
}

tree::TerminalNode* MonkeyParser::ConditionExpressionContext::RPAREN() {
  return getToken(MonkeyParser::RPAREN, 0);
}

std::vector<MonkeyParser::BlockStatementContext *> MonkeyParser::ConditionExpressionContext::blockStatement() {
  return getRuleContexts<MonkeyParser::BlockStatementContext>();
}

MonkeyParser::BlockStatementContext* MonkeyParser::ConditionExpressionContext::blockStatement(size_t i) {
  return getRuleContext<MonkeyParser::BlockStatementContext>(i);
}

tree::TerminalNode* MonkeyParser::ConditionExpressionContext::ELSE() {
  return getToken(MonkeyParser::ELSE, 0);
}


size_t MonkeyParser::ConditionExpressionContext::getRuleIndex() const {
  return MonkeyParser::RuleConditionExpression;
}


antlrcpp::Any MonkeyParser::ConditionExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MonkeyParserVisitor*>(visitor))
    return parserVisitor->visitConditionExpression(this);
  else
    return visitor->visitChildren(this);
}

MonkeyParser::ConditionExpressionContext* MonkeyParser::conditionExpression() {
  ConditionExpressionContext *_localctx = _tracker.createInstance<ConditionExpressionContext>(_ctx, getState());
  enterRule(_localctx, 38, MonkeyParser::RuleConditionExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(177);
    match(MonkeyParser::IF);
    setState(178);
    match(MonkeyParser::LPAREN);
    setState(179);
    expression();
    setState(180);
    match(MonkeyParser::RPAREN);
    setState(181);
    blockStatement();
    setState(184);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      setState(182);
      match(MonkeyParser::ELSE);
      setState(183);
      blockStatement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionLiteralContext ------------------------------------------------------------------

MonkeyParser::FunctionLiteralContext::FunctionLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MonkeyParser::FunctionLiteralContext::FUNCTION() {
  return getToken(MonkeyParser::FUNCTION, 0);
}

tree::TerminalNode* MonkeyParser::FunctionLiteralContext::LPAREN() {
  return getToken(MonkeyParser::LPAREN, 0);
}

tree::TerminalNode* MonkeyParser::FunctionLiteralContext::RPAREN() {
  return getToken(MonkeyParser::RPAREN, 0);
}

MonkeyParser::BlockStatementContext* MonkeyParser::FunctionLiteralContext::blockStatement() {
  return getRuleContext<MonkeyParser::BlockStatementContext>(0);
}

MonkeyParser::IdentifierContext* MonkeyParser::FunctionLiteralContext::identifier() {
  return getRuleContext<MonkeyParser::IdentifierContext>(0);
}

MonkeyParser::IdentifierListContext* MonkeyParser::FunctionLiteralContext::identifierList() {
  return getRuleContext<MonkeyParser::IdentifierListContext>(0);
}


size_t MonkeyParser::FunctionLiteralContext::getRuleIndex() const {
  return MonkeyParser::RuleFunctionLiteral;
}


antlrcpp::Any MonkeyParser::FunctionLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MonkeyParserVisitor*>(visitor))
    return parserVisitor->visitFunctionLiteral(this);
  else
    return visitor->visitChildren(this);
}

MonkeyParser::FunctionLiteralContext* MonkeyParser::functionLiteral() {
  FunctionLiteralContext *_localctx = _tracker.createInstance<FunctionLiteralContext>(_ctx, getState());
  enterRule(_localctx, 40, MonkeyParser::RuleFunctionLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(186);
    match(MonkeyParser::FUNCTION);
    setState(188);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MonkeyParser::IDENT) {
      setState(187);
      identifier();
    }
    setState(190);
    match(MonkeyParser::LPAREN);
    setState(192);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MonkeyParser::IDENT) {
      setState(191);
      identifierList();
    }
    setState(194);
    match(MonkeyParser::RPAREN);
    setState(195);
    blockStatement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierListContext ------------------------------------------------------------------

MonkeyParser::IdentifierListContext::IdentifierListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MonkeyParser::IdentifierContext *> MonkeyParser::IdentifierListContext::identifier() {
  return getRuleContexts<MonkeyParser::IdentifierContext>();
}

MonkeyParser::IdentifierContext* MonkeyParser::IdentifierListContext::identifier(size_t i) {
  return getRuleContext<MonkeyParser::IdentifierContext>(i);
}

std::vector<tree::TerminalNode *> MonkeyParser::IdentifierListContext::COMMA() {
  return getTokens(MonkeyParser::COMMA);
}

tree::TerminalNode* MonkeyParser::IdentifierListContext::COMMA(size_t i) {
  return getToken(MonkeyParser::COMMA, i);
}


size_t MonkeyParser::IdentifierListContext::getRuleIndex() const {
  return MonkeyParser::RuleIdentifierList;
}


antlrcpp::Any MonkeyParser::IdentifierListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MonkeyParserVisitor*>(visitor))
    return parserVisitor->visitIdentifierList(this);
  else
    return visitor->visitChildren(this);
}

MonkeyParser::IdentifierListContext* MonkeyParser::identifierList() {
  IdentifierListContext *_localctx = _tracker.createInstance<IdentifierListContext>(_ctx, getState());
  enterRule(_localctx, 42, MonkeyParser::RuleIdentifierList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(197);
    identifier();
    setState(202);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MonkeyParser::COMMA) {
      setState(198);
      match(MonkeyParser::COMMA);
      setState(199);
      identifier();
      setState(204);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierContext ------------------------------------------------------------------

MonkeyParser::IdentifierContext::IdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MonkeyParser::IdentifierContext::IDENT() {
  return getToken(MonkeyParser::IDENT, 0);
}


size_t MonkeyParser::IdentifierContext::getRuleIndex() const {
  return MonkeyParser::RuleIdentifier;
}


antlrcpp::Any MonkeyParser::IdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MonkeyParserVisitor*>(visitor))
    return parserVisitor->visitIdentifier(this);
  else
    return visitor->visitChildren(this);
}

MonkeyParser::IdentifierContext* MonkeyParser::identifier() {
  IdentifierContext *_localctx = _tracker.createInstance<IdentifierContext>(_ctx, getState());
  enterRule(_localctx, 44, MonkeyParser::RuleIdentifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(205);
    match(MonkeyParser::IDENT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralExpressionContext ------------------------------------------------------------------

MonkeyParser::LiteralExpressionContext::LiteralExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MonkeyParser::BooleanLiteralContext* MonkeyParser::LiteralExpressionContext::booleanLiteral() {
  return getRuleContext<MonkeyParser::BooleanLiteralContext>(0);
}

MonkeyParser::IntegerLiteralContext* MonkeyParser::LiteralExpressionContext::integerLiteral() {
  return getRuleContext<MonkeyParser::IntegerLiteralContext>(0);
}

MonkeyParser::StringLiteralContext* MonkeyParser::LiteralExpressionContext::stringLiteral() {
  return getRuleContext<MonkeyParser::StringLiteralContext>(0);
}

MonkeyParser::ArrayListLiteralContext* MonkeyParser::LiteralExpressionContext::arrayListLiteral() {
  return getRuleContext<MonkeyParser::ArrayListLiteralContext>(0);
}

MonkeyParser::HashMapLiteralContext* MonkeyParser::LiteralExpressionContext::hashMapLiteral() {
  return getRuleContext<MonkeyParser::HashMapLiteralContext>(0);
}


size_t MonkeyParser::LiteralExpressionContext::getRuleIndex() const {
  return MonkeyParser::RuleLiteralExpression;
}


antlrcpp::Any MonkeyParser::LiteralExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MonkeyParserVisitor*>(visitor))
    return parserVisitor->visitLiteralExpression(this);
  else
    return visitor->visitChildren(this);
}

MonkeyParser::LiteralExpressionContext* MonkeyParser::literalExpression() {
  LiteralExpressionContext *_localctx = _tracker.createInstance<LiteralExpressionContext>(_ctx, getState());
  enterRule(_localctx, 46, MonkeyParser::RuleLiteralExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(212);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MonkeyParser::TRUE:
      case MonkeyParser::FALSE: {
        enterOuterAlt(_localctx, 1);
        setState(207);
        booleanLiteral();
        break;
      }

      case MonkeyParser::INTEGER: {
        enterOuterAlt(_localctx, 2);
        setState(208);
        integerLiteral();
        break;
      }

      case MonkeyParser::STRING: {
        enterOuterAlt(_localctx, 3);
        setState(209);
        stringLiteral();
        break;
      }

      case MonkeyParser::LBRACKET: {
        enterOuterAlt(_localctx, 4);
        setState(210);
        arrayListLiteral();
        break;
      }

      case MonkeyParser::LBRACE: {
        enterOuterAlt(_localctx, 5);
        setState(211);
        hashMapLiteral();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BooleanLiteralContext ------------------------------------------------------------------

MonkeyParser::BooleanLiteralContext::BooleanLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MonkeyParser::BooleanLiteralContext::TRUE() {
  return getToken(MonkeyParser::TRUE, 0);
}

tree::TerminalNode* MonkeyParser::BooleanLiteralContext::FALSE() {
  return getToken(MonkeyParser::FALSE, 0);
}


size_t MonkeyParser::BooleanLiteralContext::getRuleIndex() const {
  return MonkeyParser::RuleBooleanLiteral;
}


antlrcpp::Any MonkeyParser::BooleanLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MonkeyParserVisitor*>(visitor))
    return parserVisitor->visitBooleanLiteral(this);
  else
    return visitor->visitChildren(this);
}

MonkeyParser::BooleanLiteralContext* MonkeyParser::booleanLiteral() {
  BooleanLiteralContext *_localctx = _tracker.createInstance<BooleanLiteralContext>(_ctx, getState());
  enterRule(_localctx, 48, MonkeyParser::RuleBooleanLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(214);
    _la = _input->LA(1);
    if (!(_la == MonkeyParser::TRUE

    || _la == MonkeyParser::FALSE)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntegerLiteralContext ------------------------------------------------------------------

MonkeyParser::IntegerLiteralContext::IntegerLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MonkeyParser::IntegerLiteralContext::INTEGER() {
  return getToken(MonkeyParser::INTEGER, 0);
}


size_t MonkeyParser::IntegerLiteralContext::getRuleIndex() const {
  return MonkeyParser::RuleIntegerLiteral;
}


antlrcpp::Any MonkeyParser::IntegerLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MonkeyParserVisitor*>(visitor))
    return parserVisitor->visitIntegerLiteral(this);
  else
    return visitor->visitChildren(this);
}

MonkeyParser::IntegerLiteralContext* MonkeyParser::integerLiteral() {
  IntegerLiteralContext *_localctx = _tracker.createInstance<IntegerLiteralContext>(_ctx, getState());
  enterRule(_localctx, 50, MonkeyParser::RuleIntegerLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(216);
    match(MonkeyParser::INTEGER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringLiteralContext ------------------------------------------------------------------

MonkeyParser::StringLiteralContext::StringLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MonkeyParser::StringLiteralContext::STRING() {
  return getToken(MonkeyParser::STRING, 0);
}


size_t MonkeyParser::StringLiteralContext::getRuleIndex() const {
  return MonkeyParser::RuleStringLiteral;
}


antlrcpp::Any MonkeyParser::StringLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MonkeyParserVisitor*>(visitor))
    return parserVisitor->visitStringLiteral(this);
  else
    return visitor->visitChildren(this);
}

MonkeyParser::StringLiteralContext* MonkeyParser::stringLiteral() {
  StringLiteralContext *_localctx = _tracker.createInstance<StringLiteralContext>(_ctx, getState());
  enterRule(_localctx, 52, MonkeyParser::RuleStringLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(218);
    match(MonkeyParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayListLiteralContext ------------------------------------------------------------------

MonkeyParser::ArrayListLiteralContext::ArrayListLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MonkeyParser::ArrayListLiteralContext::LBRACKET() {
  return getToken(MonkeyParser::LBRACKET, 0);
}

tree::TerminalNode* MonkeyParser::ArrayListLiteralContext::RBRACKET() {
  return getToken(MonkeyParser::RBRACKET, 0);
}

MonkeyParser::ExpressionListContext* MonkeyParser::ArrayListLiteralContext::expressionList() {
  return getRuleContext<MonkeyParser::ExpressionListContext>(0);
}


size_t MonkeyParser::ArrayListLiteralContext::getRuleIndex() const {
  return MonkeyParser::RuleArrayListLiteral;
}


antlrcpp::Any MonkeyParser::ArrayListLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MonkeyParserVisitor*>(visitor))
    return parserVisitor->visitArrayListLiteral(this);
  else
    return visitor->visitChildren(this);
}

MonkeyParser::ArrayListLiteralContext* MonkeyParser::arrayListLiteral() {
  ArrayListLiteralContext *_localctx = _tracker.createInstance<ArrayListLiteralContext>(_ctx, getState());
  enterRule(_localctx, 54, MonkeyParser::RuleArrayListLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(220);
    match(MonkeyParser::LBRACKET);
    setState(222);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MonkeyParser::FUNCTION)
      | (1ULL << MonkeyParser::TRUE)
      | (1ULL << MonkeyParser::FALSE)
      | (1ULL << MonkeyParser::IF)
      | (1ULL << MonkeyParser::IDENT)
      | (1ULL << MonkeyParser::INTEGER)
      | (1ULL << MonkeyParser::STRING)
      | (1ULL << MonkeyParser::MINUS)
      | (1ULL << MonkeyParser::BANG)
      | (1ULL << MonkeyParser::LPAREN)
      | (1ULL << MonkeyParser::LBRACE)
      | (1ULL << MonkeyParser::LBRACKET))) != 0)) {
      setState(221);
      expressionList();
    }
    setState(224);
    match(MonkeyParser::RBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HashMapLiteralContext ------------------------------------------------------------------

MonkeyParser::HashMapLiteralContext::HashMapLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MonkeyParser::HashMapLiteralContext::LBRACE() {
  return getToken(MonkeyParser::LBRACE, 0);
}

tree::TerminalNode* MonkeyParser::HashMapLiteralContext::RBRACE() {
  return getToken(MonkeyParser::RBRACE, 0);
}

MonkeyParser::HashMemberListContext* MonkeyParser::HashMapLiteralContext::hashMemberList() {
  return getRuleContext<MonkeyParser::HashMemberListContext>(0);
}


size_t MonkeyParser::HashMapLiteralContext::getRuleIndex() const {
  return MonkeyParser::RuleHashMapLiteral;
}


antlrcpp::Any MonkeyParser::HashMapLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MonkeyParserVisitor*>(visitor))
    return parserVisitor->visitHashMapLiteral(this);
  else
    return visitor->visitChildren(this);
}

MonkeyParser::HashMapLiteralContext* MonkeyParser::hashMapLiteral() {
  HashMapLiteralContext *_localctx = _tracker.createInstance<HashMapLiteralContext>(_ctx, getState());
  enterRule(_localctx, 56, MonkeyParser::RuleHashMapLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(226);
    match(MonkeyParser::LBRACE);
    setState(228);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MonkeyParser::FUNCTION)
      | (1ULL << MonkeyParser::TRUE)
      | (1ULL << MonkeyParser::FALSE)
      | (1ULL << MonkeyParser::IF)
      | (1ULL << MonkeyParser::IDENT)
      | (1ULL << MonkeyParser::INTEGER)
      | (1ULL << MonkeyParser::STRING)
      | (1ULL << MonkeyParser::MINUS)
      | (1ULL << MonkeyParser::BANG)
      | (1ULL << MonkeyParser::LPAREN)
      | (1ULL << MonkeyParser::LBRACE)
      | (1ULL << MonkeyParser::LBRACKET))) != 0)) {
      setState(227);
      hashMemberList();
    }
    setState(230);
    match(MonkeyParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HashMemberListContext ------------------------------------------------------------------

MonkeyParser::HashMemberListContext::HashMemberListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MonkeyParser::HashMemberContext *> MonkeyParser::HashMemberListContext::hashMember() {
  return getRuleContexts<MonkeyParser::HashMemberContext>();
}

MonkeyParser::HashMemberContext* MonkeyParser::HashMemberListContext::hashMember(size_t i) {
  return getRuleContext<MonkeyParser::HashMemberContext>(i);
}

std::vector<tree::TerminalNode *> MonkeyParser::HashMemberListContext::COMMA() {
  return getTokens(MonkeyParser::COMMA);
}

tree::TerminalNode* MonkeyParser::HashMemberListContext::COMMA(size_t i) {
  return getToken(MonkeyParser::COMMA, i);
}


size_t MonkeyParser::HashMemberListContext::getRuleIndex() const {
  return MonkeyParser::RuleHashMemberList;
}


antlrcpp::Any MonkeyParser::HashMemberListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MonkeyParserVisitor*>(visitor))
    return parserVisitor->visitHashMemberList(this);
  else
    return visitor->visitChildren(this);
}

MonkeyParser::HashMemberListContext* MonkeyParser::hashMemberList() {
  HashMemberListContext *_localctx = _tracker.createInstance<HashMemberListContext>(_ctx, getState());
  enterRule(_localctx, 58, MonkeyParser::RuleHashMemberList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(232);
    hashMember();
    setState(237);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MonkeyParser::COMMA) {
      setState(233);
      match(MonkeyParser::COMMA);
      setState(234);
      hashMember();
      setState(239);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HashMemberContext ------------------------------------------------------------------

MonkeyParser::HashMemberContext::HashMemberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MonkeyParser::ExpressionContext *> MonkeyParser::HashMemberContext::expression() {
  return getRuleContexts<MonkeyParser::ExpressionContext>();
}

MonkeyParser::ExpressionContext* MonkeyParser::HashMemberContext::expression(size_t i) {
  return getRuleContext<MonkeyParser::ExpressionContext>(i);
}

tree::TerminalNode* MonkeyParser::HashMemberContext::COLON() {
  return getToken(MonkeyParser::COLON, 0);
}


size_t MonkeyParser::HashMemberContext::getRuleIndex() const {
  return MonkeyParser::RuleHashMember;
}


antlrcpp::Any MonkeyParser::HashMemberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MonkeyParserVisitor*>(visitor))
    return parserVisitor->visitHashMember(this);
  else
    return visitor->visitChildren(this);
}

MonkeyParser::HashMemberContext* MonkeyParser::hashMember() {
  HashMemberContext *_localctx = _tracker.createInstance<HashMemberContext>(_ctx, getState());
  enterRule(_localctx, 60, MonkeyParser::RuleHashMember);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(240);
    expression();
    setState(241);
    match(MonkeyParser::COLON);
    setState(242);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool MonkeyParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 8: return binaryExpressionSempred(dynamic_cast<BinaryExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool MonkeyParser::binaryExpressionSempred(BinaryExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 4);
    case 1: return precpred(_ctx, 3);
    case 2: return precpred(_ctx, 2);
    case 3: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> MonkeyParser::_decisionToDFA;
atn::PredictionContextCache MonkeyParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN MonkeyParser::_atn;
std::vector<uint16_t> MonkeyParser::_serializedATN;

std::vector<std::string> MonkeyParser::_ruleNames = {
  "program", "statement", "blockStatement", "expressionStatement", "letStatement", 
  "returnStatement", "expressionList", "expression", "binaryExpression", 
  "equalOperator", "relOperator", "termOperator", "factorOperator", "prefixExpression", 
  "prefixOperator", "postfixExpression", "postfixOperator", "primaryExpression", 
  "groupExpression", "conditionExpression", "functionLiteral", "identifierList", 
  "identifier", "literalExpression", "booleanLiteral", "integerLiteral", 
  "stringLiteral", "arrayListLiteral", "hashMapLiteral", "hashMemberList", 
  "hashMember"
};

std::vector<std::string> MonkeyParser::_literalNames = {
  "", "'fn'", "'let'", "'true'", "'false'", "'if'", "'else'", "'return'", 
  "", "", "", "'=='", "'!='", "','", "':'", "'.'", "'+'", "'-'", "';'", 
  "'/'", "'*'", "'!'", "'='", "'>'", "'<'", "'('", "')'", "'{'", "'}'", 
  "'['", "']'"
};

std::vector<std::string> MonkeyParser::_symbolicNames = {
  "", "FUNCTION", "LET", "TRUE", "FALSE", "IF", "ELSE", "RETURN", "IDENT", 
  "INTEGER", "STRING", "EQ_EQ", "BANG_EQ", "COMMA", "COLON", "DOT", "PLUS", 
  "MINUS", "SEMICOLON", "SLASH", "STAR", "BANG", "EQ", "GT", "LT", "LPAREN", 
  "RPAREN", "LBRACE", "RBRACE", "LBRACKET", "RBRACKET", "WS"
};

dfa::Vocabulary MonkeyParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> MonkeyParser::_tokenNames;

MonkeyParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0x21, 0xf7, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 
       0xe, 0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 
       0x9, 0x11, 0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 
       0x9, 0x14, 0x4, 0x15, 0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 
       0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 
       0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 
       0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 0x1f, 0x9, 0x1f, 0x4, 0x20, 
       0x9, 0x20, 0x3, 0x2, 0x6, 0x2, 0x42, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 
       0x43, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x5, 0x3, 0x4c, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x6, 0x4, 0x50, 0xa, 
       0x4, 0xd, 0x4, 0xe, 0x4, 0x51, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 
       0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
       0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 
       0x8, 0x3, 0x8, 0x7, 0x8, 0x66, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x69, 
       0xb, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
       0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
       0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
       0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x80, 0xa, 0xa, 0xc, 0xa, 0xe, 
       0xa, 0x83, 0xb, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 
       0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x7, 0xf, 0x8e, 0xa, 
       0xf, 0xc, 0xf, 0xe, 0xf, 0x91, 0xb, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
       0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 0x99, 0xa, 0x11, 
       0xc, 0x11, 0xe, 0x11, 0x9c, 0xb, 0x11, 0x3, 0x12, 0x3, 0x12, 0x5, 
       0x12, 0xa0, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
       0x3, 0x12, 0x5, 0x12, 0xa7, 0xa, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 
       0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0xae, 0xa, 0x13, 0x3, 0x14, 
       0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
       0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0xbb, 0xa, 
       0x15, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0xbf, 0xa, 0x16, 0x3, 0x16, 
       0x3, 0x16, 0x5, 0x16, 0xc3, 0xa, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
       0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x7, 0x17, 0xcb, 0xa, 0x17, 
       0xc, 0x17, 0xe, 0x17, 0xce, 0xb, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 
       0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0xd7, 
       0xa, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 
       0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0xe1, 0xa, 0x1d, 0x3, 
       0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0xe7, 0xa, 0x1e, 
       0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x7, 0x1f, 
       0xee, 0xa, 0x1f, 0xc, 0x1f, 0xe, 0x1f, 0xf1, 0xb, 0x1f, 0x3, 0x20, 
       0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x2, 0x3, 0x12, 0x21, 
       0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 
       0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 
       0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x2, 0x8, 0x3, 0x2, 
       0xd, 0xe, 0x3, 0x2, 0x19, 0x1a, 0x3, 0x2, 0x12, 0x13, 0x3, 0x2, 0x15, 
       0x16, 0x4, 0x2, 0x13, 0x13, 0x17, 0x17, 0x3, 0x2, 0x5, 0x6, 0x2, 
       0xf4, 0x2, 0x41, 0x3, 0x2, 0x2, 0x2, 0x4, 0x4b, 0x3, 0x2, 0x2, 0x2, 
       0x6, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x8, 0x55, 0x3, 0x2, 0x2, 0x2, 0xa, 
       0x58, 0x3, 0x2, 0x2, 0x2, 0xc, 0x5e, 0x3, 0x2, 0x2, 0x2, 0xe, 0x62, 
       0x3, 0x2, 0x2, 0x2, 0x10, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x12, 0x6c, 0x3, 
       0x2, 0x2, 0x2, 0x14, 0x84, 0x3, 0x2, 0x2, 0x2, 0x16, 0x86, 0x3, 0x2, 
       0x2, 0x2, 0x18, 0x88, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x8a, 0x3, 0x2, 0x2, 
       0x2, 0x1c, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x94, 0x3, 0x2, 0x2, 0x2, 
       0x20, 0x96, 0x3, 0x2, 0x2, 0x2, 0x22, 0xa6, 0x3, 0x2, 0x2, 0x2, 0x24, 
       0xad, 0x3, 0x2, 0x2, 0x2, 0x26, 0xaf, 0x3, 0x2, 0x2, 0x2, 0x28, 0xb3, 
       0x3, 0x2, 0x2, 0x2, 0x2a, 0xbc, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xc7, 0x3, 
       0x2, 0x2, 0x2, 0x2e, 0xcf, 0x3, 0x2, 0x2, 0x2, 0x30, 0xd6, 0x3, 0x2, 
       0x2, 0x2, 0x32, 0xd8, 0x3, 0x2, 0x2, 0x2, 0x34, 0xda, 0x3, 0x2, 0x2, 
       0x2, 0x36, 0xdc, 0x3, 0x2, 0x2, 0x2, 0x38, 0xde, 0x3, 0x2, 0x2, 0x2, 
       0x3a, 0xe4, 0x3, 0x2, 0x2, 0x2, 0x3c, 0xea, 0x3, 0x2, 0x2, 0x2, 0x3e, 
       0xf2, 0x3, 0x2, 0x2, 0x2, 0x40, 0x42, 0x5, 0x4, 0x3, 0x2, 0x41, 0x40, 
       0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 0x3, 0x2, 0x2, 0x2, 0x43, 0x41, 0x3, 
       0x2, 0x2, 0x2, 0x43, 0x44, 0x3, 0x2, 0x2, 0x2, 0x44, 0x45, 0x3, 0x2, 
       0x2, 0x2, 0x45, 0x46, 0x7, 0x2, 0x2, 0x3, 0x46, 0x3, 0x3, 0x2, 0x2, 
       0x2, 0x47, 0x4c, 0x5, 0x6, 0x4, 0x2, 0x48, 0x4c, 0x5, 0x8, 0x5, 0x2, 
       0x49, 0x4c, 0x5, 0xa, 0x6, 0x2, 0x4a, 0x4c, 0x5, 0xc, 0x7, 0x2, 0x4b, 
       0x47, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x48, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x49, 
       0x3, 0x2, 0x2, 0x2, 0x4b, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x5, 0x3, 
       0x2, 0x2, 0x2, 0x4d, 0x4f, 0x7, 0x1d, 0x2, 0x2, 0x4e, 0x50, 0x5, 
       0x4, 0x3, 0x2, 0x4f, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x50, 0x51, 0x3, 0x2, 
       0x2, 0x2, 0x51, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 0x3, 0x2, 0x2, 
       0x2, 0x52, 0x53, 0x3, 0x2, 0x2, 0x2, 0x53, 0x54, 0x7, 0x1e, 0x2, 
       0x2, 0x54, 0x7, 0x3, 0x2, 0x2, 0x2, 0x55, 0x56, 0x5, 0x10, 0x9, 0x2, 
       0x56, 0x57, 0x7, 0x14, 0x2, 0x2, 0x57, 0x9, 0x3, 0x2, 0x2, 0x2, 0x58, 
       0x59, 0x7, 0x4, 0x2, 0x2, 0x59, 0x5a, 0x5, 0x2e, 0x18, 0x2, 0x5a, 
       0x5b, 0x7, 0x18, 0x2, 0x2, 0x5b, 0x5c, 0x5, 0x10, 0x9, 0x2, 0x5c, 
       0x5d, 0x7, 0x14, 0x2, 0x2, 0x5d, 0xb, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5f, 
       0x7, 0x9, 0x2, 0x2, 0x5f, 0x60, 0x5, 0x10, 0x9, 0x2, 0x60, 0x61, 
       0x7, 0x14, 0x2, 0x2, 0x61, 0xd, 0x3, 0x2, 0x2, 0x2, 0x62, 0x67, 0x5, 
       0x10, 0x9, 0x2, 0x63, 0x64, 0x7, 0xf, 0x2, 0x2, 0x64, 0x66, 0x5, 
       0x10, 0x9, 0x2, 0x65, 0x63, 0x3, 0x2, 0x2, 0x2, 0x66, 0x69, 0x3, 
       0x2, 0x2, 0x2, 0x67, 0x65, 0x3, 0x2, 0x2, 0x2, 0x67, 0x68, 0x3, 0x2, 
       0x2, 0x2, 0x68, 0xf, 0x3, 0x2, 0x2, 0x2, 0x69, 0x67, 0x3, 0x2, 0x2, 
       0x2, 0x6a, 0x6b, 0x5, 0x12, 0xa, 0x2, 0x6b, 0x11, 0x3, 0x2, 0x2, 
       0x2, 0x6c, 0x6d, 0x8, 0xa, 0x1, 0x2, 0x6d, 0x6e, 0x5, 0x1c, 0xf, 
       0x2, 0x6e, 0x81, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x70, 0xc, 0x6, 0x2, 0x2, 
       0x70, 0x71, 0x5, 0x1a, 0xe, 0x2, 0x71, 0x72, 0x5, 0x12, 0xa, 0x7, 
       0x72, 0x80, 0x3, 0x2, 0x2, 0x2, 0x73, 0x74, 0xc, 0x5, 0x2, 0x2, 0x74, 
       0x75, 0x5, 0x18, 0xd, 0x2, 0x75, 0x76, 0x5, 0x12, 0xa, 0x6, 0x76, 
       0x80, 0x3, 0x2, 0x2, 0x2, 0x77, 0x78, 0xc, 0x4, 0x2, 0x2, 0x78, 0x79, 
       0x5, 0x16, 0xc, 0x2, 0x79, 0x7a, 0x5, 0x12, 0xa, 0x5, 0x7a, 0x80, 
       0x3, 0x2, 0x2, 0x2, 0x7b, 0x7c, 0xc, 0x3, 0x2, 0x2, 0x7c, 0x7d, 0x5, 
       0x14, 0xb, 0x2, 0x7d, 0x7e, 0x5, 0x12, 0xa, 0x4, 0x7e, 0x80, 0x3, 
       0x2, 0x2, 0x2, 0x7f, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x73, 0x3, 0x2, 
       0x2, 0x2, 0x7f, 0x77, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x7b, 0x3, 0x2, 0x2, 
       0x2, 0x80, 0x83, 0x3, 0x2, 0x2, 0x2, 0x81, 0x7f, 0x3, 0x2, 0x2, 0x2, 
       0x81, 0x82, 0x3, 0x2, 0x2, 0x2, 0x82, 0x13, 0x3, 0x2, 0x2, 0x2, 0x83, 
       0x81, 0x3, 0x2, 0x2, 0x2, 0x84, 0x85, 0x9, 0x2, 0x2, 0x2, 0x85, 0x15, 
       0x3, 0x2, 0x2, 0x2, 0x86, 0x87, 0x9, 0x3, 0x2, 0x2, 0x87, 0x17, 0x3, 
       0x2, 0x2, 0x2, 0x88, 0x89, 0x9, 0x4, 0x2, 0x2, 0x89, 0x19, 0x3, 0x2, 
       0x2, 0x2, 0x8a, 0x8b, 0x9, 0x5, 0x2, 0x2, 0x8b, 0x1b, 0x3, 0x2, 0x2, 
       0x2, 0x8c, 0x8e, 0x5, 0x1e, 0x10, 0x2, 0x8d, 0x8c, 0x3, 0x2, 0x2, 
       0x2, 0x8e, 0x91, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x8d, 0x3, 0x2, 0x2, 0x2, 
       0x8f, 0x90, 0x3, 0x2, 0x2, 0x2, 0x90, 0x92, 0x3, 0x2, 0x2, 0x2, 0x91, 
       0x8f, 0x3, 0x2, 0x2, 0x2, 0x92, 0x93, 0x5, 0x20, 0x11, 0x2, 0x93, 
       0x1d, 0x3, 0x2, 0x2, 0x2, 0x94, 0x95, 0x9, 0x6, 0x2, 0x2, 0x95, 0x1f, 
       0x3, 0x2, 0x2, 0x2, 0x96, 0x9a, 0x5, 0x24, 0x13, 0x2, 0x97, 0x99, 
       0x5, 0x22, 0x12, 0x2, 0x98, 0x97, 0x3, 0x2, 0x2, 0x2, 0x99, 0x9c, 
       0x3, 0x2, 0x2, 0x2, 0x9a, 0x98, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9b, 0x3, 
       0x2, 0x2, 0x2, 0x9b, 0x21, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9a, 0x3, 0x2, 
       0x2, 0x2, 0x9d, 0x9f, 0x7, 0x1b, 0x2, 0x2, 0x9e, 0xa0, 0x5, 0xe, 
       0x8, 0x2, 0x9f, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa0, 0x3, 0x2, 0x2, 
       0x2, 0xa0, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xa1, 0xa7, 0x7, 0x1c, 0x2, 
       0x2, 0xa2, 0xa3, 0x7, 0x1f, 0x2, 0x2, 0xa3, 0xa4, 0x5, 0x10, 0x9, 
       0x2, 0xa4, 0xa5, 0x7, 0x20, 0x2, 0x2, 0xa5, 0xa7, 0x3, 0x2, 0x2, 
       0x2, 0xa6, 0x9d, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa2, 0x3, 0x2, 0x2, 0x2, 
       0xa7, 0x23, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xae, 0x5, 0x26, 0x14, 0x2, 
       0xa9, 0xae, 0x5, 0x28, 0x15, 0x2, 0xaa, 0xae, 0x5, 0x2a, 0x16, 0x2, 
       0xab, 0xae, 0x5, 0x2e, 0x18, 0x2, 0xac, 0xae, 0x5, 0x30, 0x19, 0x2, 
       0xad, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xad, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xad, 
       0xaa, 0x3, 0x2, 0x2, 0x2, 0xad, 0xab, 0x3, 0x2, 0x2, 0x2, 0xad, 0xac, 
       0x3, 0x2, 0x2, 0x2, 0xae, 0x25, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xb0, 0x7, 
       0x1b, 0x2, 0x2, 0xb0, 0xb1, 0x5, 0x10, 0x9, 0x2, 0xb1, 0xb2, 0x7, 
       0x1c, 0x2, 0x2, 0xb2, 0x27, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb4, 0x7, 
       0x7, 0x2, 0x2, 0xb4, 0xb5, 0x7, 0x1b, 0x2, 0x2, 0xb5, 0xb6, 0x5, 
       0x10, 0x9, 0x2, 0xb6, 0xb7, 0x7, 0x1c, 0x2, 0x2, 0xb7, 0xba, 0x5, 
       0x6, 0x4, 0x2, 0xb8, 0xb9, 0x7, 0x8, 0x2, 0x2, 0xb9, 0xbb, 0x5, 0x6, 
       0x4, 0x2, 0xba, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbb, 0x3, 0x2, 0x2, 
       0x2, 0xbb, 0x29, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xbe, 0x7, 0x3, 0x2, 0x2, 
       0xbd, 0xbf, 0x5, 0x2e, 0x18, 0x2, 0xbe, 0xbd, 0x3, 0x2, 0x2, 0x2, 
       0xbe, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xc0, 
       0xc2, 0x7, 0x1b, 0x2, 0x2, 0xc1, 0xc3, 0x5, 0x2c, 0x17, 0x2, 0xc2, 
       0xc1, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc4, 
       0x3, 0x2, 0x2, 0x2, 0xc4, 0xc5, 0x7, 0x1c, 0x2, 0x2, 0xc5, 0xc6, 
       0x5, 0x6, 0x4, 0x2, 0xc6, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xcc, 0x5, 
       0x2e, 0x18, 0x2, 0xc8, 0xc9, 0x7, 0xf, 0x2, 0x2, 0xc9, 0xcb, 0x5, 
       0x2e, 0x18, 0x2, 0xca, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xce, 0x3, 
       0x2, 0x2, 0x2, 0xcc, 0xca, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xcd, 0x3, 0x2, 
       0x2, 0x2, 0xcd, 0x2d, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcc, 0x3, 0x2, 0x2, 
       0x2, 0xcf, 0xd0, 0x7, 0xa, 0x2, 0x2, 0xd0, 0x2f, 0x3, 0x2, 0x2, 0x2, 
       0xd1, 0xd7, 0x5, 0x32, 0x1a, 0x2, 0xd2, 0xd7, 0x5, 0x34, 0x1b, 0x2, 
       0xd3, 0xd7, 0x5, 0x36, 0x1c, 0x2, 0xd4, 0xd7, 0x5, 0x38, 0x1d, 0x2, 
       0xd5, 0xd7, 0x5, 0x3a, 0x1e, 0x2, 0xd6, 0xd1, 0x3, 0x2, 0x2, 0x2, 
       0xd6, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd6, 
       0xd4, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xd7, 0x31, 
       0x3, 0x2, 0x2, 0x2, 0xd8, 0xd9, 0x9, 0x7, 0x2, 0x2, 0xd9, 0x33, 0x3, 
       0x2, 0x2, 0x2, 0xda, 0xdb, 0x7, 0xb, 0x2, 0x2, 0xdb, 0x35, 0x3, 0x2, 
       0x2, 0x2, 0xdc, 0xdd, 0x7, 0xc, 0x2, 0x2, 0xdd, 0x37, 0x3, 0x2, 0x2, 
       0x2, 0xde, 0xe0, 0x7, 0x1f, 0x2, 0x2, 0xdf, 0xe1, 0x5, 0xe, 0x8, 
       0x2, 0xe0, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xe1, 0x3, 0x2, 0x2, 0x2, 
       0xe1, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xe3, 0x7, 0x20, 0x2, 0x2, 
       0xe3, 0x39, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe6, 0x7, 0x1d, 0x2, 0x2, 
       0xe5, 0xe7, 0x5, 0x3c, 0x1f, 0x2, 0xe6, 0xe5, 0x3, 0x2, 0x2, 0x2, 
       0xe6, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xe8, 
       0xe9, 0x7, 0x1e, 0x2, 0x2, 0xe9, 0x3b, 0x3, 0x2, 0x2, 0x2, 0xea, 
       0xef, 0x5, 0x3e, 0x20, 0x2, 0xeb, 0xec, 0x7, 0xf, 0x2, 0x2, 0xec, 
       0xee, 0x5, 0x3e, 0x20, 0x2, 0xed, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xee, 
       0xf1, 0x3, 0x2, 0x2, 0x2, 0xef, 0xed, 0x3, 0x2, 0x2, 0x2, 0xef, 0xf0, 
       0x3, 0x2, 0x2, 0x2, 0xf0, 0x3d, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xef, 0x3, 
       0x2, 0x2, 0x2, 0xf2, 0xf3, 0x5, 0x10, 0x9, 0x2, 0xf3, 0xf4, 0x7, 
       0x10, 0x2, 0x2, 0xf4, 0xf5, 0x5, 0x10, 0x9, 0x2, 0xf5, 0x3f, 0x3, 
       0x2, 0x2, 0x2, 0x15, 0x43, 0x4b, 0x51, 0x67, 0x7f, 0x81, 0x8f, 0x9a, 
       0x9f, 0xa6, 0xad, 0xba, 0xbe, 0xc2, 0xcc, 0xd6, 0xe0, 0xe6, 0xef, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

MonkeyParser::Initializer MonkeyParser::_init;
