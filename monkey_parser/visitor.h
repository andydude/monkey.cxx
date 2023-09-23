
// Generated from MonkeyParser.g4 by ANTLR 4.13.0

#pragma once

//#include <any>
#include "ast.h"
#include "antlr4-runtime.h"
#include "MonkeyParserVisitor.h"


/**
 * This class provides an empty implementation of MonkeyParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  MonkeyAstVisitor : public MonkeyParserVisitor {
public:
  // constructor
  MonkeyAstVisitor();  

  virtual antlrcpp::Any visitProgram(MonkeyParser::ProgramContext *ctx) override {
    std::vector<Statement> statements;
    
    for (MonkeyParser::StatementContext *sctx : ctx->statement()) {
      statements.push_back(this->visitStatement(sctx));
    }
    return new Program(statements);
  }

  virtual antlrcpp::Any visitStatement(MonkeyParser::StatementContext *ctx) override {
    if (ctx->blockStatement()) {
      return this->visitBlockStatement
	(ctx->blockStatement());
    } else if (ctx->letStatement()) {
      return this->visitLetStatement
	(ctx->letStatement());
    } else if (ctx->returnStatement()) {
      return this->visitReturnStatement
	(ctx->returnStatement());
    } else if (ctx->expressionStatement()) {
      return this->visitExpressionStatement
	(ctx->expressionStatement());
    } else {
      throw "WTF";
    }
  }

  virtual antlrcpp::Any visitBlockStatement(MonkeyParser::BlockStatementContext *ctx) override {
    std::vector<MonkeyParser::StatementContext*> stmt_ctxs = ctx->statement();
    std::vector<Statement> statements;
    for (auto stmt_ctx = stmt_ctxs.cbegin();
	 stmt_ctx != stmt_ctxs.cend(); ++stmt_ctx) {
      statements.push_back((Statement)this->visitStatement(*stmt_ctx));
    };
    return new BlockStatement(statements);
  }

  virtual antlrcpp::Any visitExpressionStatement(MonkeyParser::ExpressionStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLetStatement(MonkeyParser::LetStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturnStatement(MonkeyParser::ReturnStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionList(MonkeyParser::ExpressionListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(MonkeyParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinaryExpression(MonkeyParser::BinaryExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEqualOperator(MonkeyParser::EqualOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRelOperator(MonkeyParser::RelOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTermOperator(MonkeyParser::TermOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFactorOperator(MonkeyParser::FactorOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrefixExpression(MonkeyParser::PrefixExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrefixOperator(MonkeyParser::PrefixOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPostfixExpression(MonkeyParser::PostfixExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPostfixOperator(MonkeyParser::PostfixOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimaryExpression(MonkeyParser::PrimaryExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGroupExpression(MonkeyParser::GroupExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditionExpression(MonkeyParser::ConditionExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionLiteral(MonkeyParser::FunctionLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifierList(MonkeyParser::IdentifierListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifier(MonkeyParser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLiteralExpression(MonkeyParser::LiteralExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBooleanLiteral(MonkeyParser::BooleanLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntegerLiteral(MonkeyParser::IntegerLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStringLiteral(MonkeyParser::StringLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArrayListLiteral(MonkeyParser::ArrayListLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHashMapLiteral(MonkeyParser::HashMapLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHashMemberList(MonkeyParser::HashMemberListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHashMember(MonkeyParser::HashMemberContext *ctx) override {
    return visitChildren(ctx);
  }
};

