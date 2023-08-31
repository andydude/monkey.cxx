// -*- mode: antlr; -*-
// SPDX-FileCopyrightText: © 2023 Andrew Robbins
// SPDX-License-Identifier: MIT
parser grammar MonkeyParser;

options { tokenVocab = MonkeyLexer; }

program
   : statement+ EOF
   ;

statement
   : blockStatement
   | expressionStatement
   | letStatement
   | returnStatement
   ;

blockStatement
   : LBRACE statement+ RBRACE
   ;

expressionStatement
   : expression SEMICOLON
   ;

letStatement
   : LET identifier EQ expression SEMICOLON
   ;

returnStatement
   : RETURN expression SEMICOLON
   ;

expressionList
   : expression (COMMA expression)*
   ;

expression
   : binaryExpression
   ;

binaryExpression
   : prefixExpression // 2
   | binaryExpression factorOperator binaryExpression // 3
   | binaryExpression termOperator binaryExpression // 4
   | binaryExpression relOperator binaryExpression // 6
   | binaryExpression equalOperator binaryExpression // 7
   ;

equalOperator
   : EQ_EQ
   | BANG_EQ
   ;

relOperator
   : LT
   | GT
   ;

termOperator
   : PLUS
   | MINUS
   ;

factorOperator
   : STAR
   | SLASH
   ;

prefixExpression
   : prefixOperator* postfixExpression
   ;

prefixOperator
   : BANG
   | MINUS
   ;

postfixExpression
   : primaryExpression postfixOperator*
   ;

postfixOperator
   : LPAREN expressionList? RPAREN
   | LBRACKET expression RBRACKET
   ;

primaryExpression
   : groupExpression
   | conditionExpression
   | functionLiteral
   | identifier
   | literalExpression
   ;

groupExpression
   : LPAREN expression RPAREN
   ;

conditionExpression
   : IF LPAREN expression RPAREN
     blockStatement
     (ELSE blockStatement)?
   ;

functionLiteral
   : FUNCTION identifier?
     LPAREN identifierList? RPAREN
     blockStatement
   ;

identifierList
   : identifier (COMMA identifier)*
   ;

identifier
   : IDENT
   ;

literalExpression
   : booleanLiteral
   | integerLiteral
   | stringLiteral
   | arrayListLiteral
   | hashMapLiteral
   ;

booleanLiteral
   : TRUE
   | FALSE
   ;

integerLiteral
   : INTEGER
   ;

stringLiteral
   : STRING
   ;

arrayListLiteral
   : LBRACKET expressionList? RBRACKET
   ;

hashMapLiteral
   : LBRACE hashMemberList? RBRACE
   ;

hashMemberList
   : hashMember (COMMA hashMember)*
   ;

hashMember
   : expression COLON expression
   ;
