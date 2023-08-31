
// Generated from MonkeyParser.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "MonkeyParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by MonkeyParser.
 */
class  MonkeyParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by MonkeyParser.
   */
    virtual antlrcpp::Any visitProgram(MonkeyParser::ProgramContext *context) = 0;

    virtual antlrcpp::Any visitStatement(MonkeyParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitBlockStatement(MonkeyParser::BlockStatementContext *context) = 0;

    virtual antlrcpp::Any visitExpressionStatement(MonkeyParser::ExpressionStatementContext *context) = 0;

    virtual antlrcpp::Any visitLetStatement(MonkeyParser::LetStatementContext *context) = 0;

    virtual antlrcpp::Any visitReturnStatement(MonkeyParser::ReturnStatementContext *context) = 0;

    virtual antlrcpp::Any visitExpressionList(MonkeyParser::ExpressionListContext *context) = 0;

    virtual antlrcpp::Any visitExpression(MonkeyParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitBinaryExpression(MonkeyParser::BinaryExpressionContext *context) = 0;

    virtual antlrcpp::Any visitEqualOperator(MonkeyParser::EqualOperatorContext *context) = 0;

    virtual antlrcpp::Any visitRelOperator(MonkeyParser::RelOperatorContext *context) = 0;

    virtual antlrcpp::Any visitTermOperator(MonkeyParser::TermOperatorContext *context) = 0;

    virtual antlrcpp::Any visitFactorOperator(MonkeyParser::FactorOperatorContext *context) = 0;

    virtual antlrcpp::Any visitPrefixExpression(MonkeyParser::PrefixExpressionContext *context) = 0;

    virtual antlrcpp::Any visitPrefixOperator(MonkeyParser::PrefixOperatorContext *context) = 0;

    virtual antlrcpp::Any visitPostfixExpression(MonkeyParser::PostfixExpressionContext *context) = 0;

    virtual antlrcpp::Any visitPostfixOperator(MonkeyParser::PostfixOperatorContext *context) = 0;

    virtual antlrcpp::Any visitPrimaryExpression(MonkeyParser::PrimaryExpressionContext *context) = 0;

    virtual antlrcpp::Any visitGroupExpression(MonkeyParser::GroupExpressionContext *context) = 0;

    virtual antlrcpp::Any visitConditionExpression(MonkeyParser::ConditionExpressionContext *context) = 0;

    virtual antlrcpp::Any visitFunctionLiteral(MonkeyParser::FunctionLiteralContext *context) = 0;

    virtual antlrcpp::Any visitIdentifierList(MonkeyParser::IdentifierListContext *context) = 0;

    virtual antlrcpp::Any visitIdentifier(MonkeyParser::IdentifierContext *context) = 0;

    virtual antlrcpp::Any visitLiteralExpression(MonkeyParser::LiteralExpressionContext *context) = 0;

    virtual antlrcpp::Any visitBooleanLiteral(MonkeyParser::BooleanLiteralContext *context) = 0;

    virtual antlrcpp::Any visitIntegerLiteral(MonkeyParser::IntegerLiteralContext *context) = 0;

    virtual antlrcpp::Any visitStringLiteral(MonkeyParser::StringLiteralContext *context) = 0;

    virtual antlrcpp::Any visitArrayListLiteral(MonkeyParser::ArrayListLiteralContext *context) = 0;

    virtual antlrcpp::Any visitHashMapLiteral(MonkeyParser::HashMapLiteralContext *context) = 0;

    virtual antlrcpp::Any visitHashMemberList(MonkeyParser::HashMemberListContext *context) = 0;

    virtual antlrcpp::Any visitHashMember(MonkeyParser::HashMemberContext *context) = 0;


};

