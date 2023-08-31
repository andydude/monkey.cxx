// -*- mode: antlr; -*-
// SPDX-FileCopyrightText: © 2024 Andrew Robbins
// SPDX-License-Identifier: Apache-2.0
lexer grammar MonkeyLexer;

FUNCTION
   : 'fn'
   ;

LET
   : 'let'
   ;

TRUE
   : 'true'
   ;

FALSE
   : 'false'
   ;

IF
   : 'if'
   ;

ELSE
   : 'else'
   ;

RETURN
   : 'return'
   ;

fragment ALPHA
   : [A-Za-z_]
   ;

IDENT
   : ALPHA+
   ;

fragment DIGIT
   : [0-9]
   ;

INTEGER
   : DIGIT+
   ;

fragment STRING_CHAR
   : ~ ["] // "
   ;

STRING
   : ["] STRING_CHAR* ["]
   ;

EQ_EQ
   : '=='
   ;

BANG_EQ
   : '!='
   ;

COMMA
   : ','
   ;

COLON
   : ':'
   ;

DOT
   : '.'
   ;

PLUS
   : '+'
   ;

MINUS
   : '-'
   ;

SEMICOLON
   : ';'
   ;

SLASH
   : '/'
   ;

STAR
   : '*'
   ;

BANG
   : '!'
   ;

EQ
   : '='
   ;

GT
   : '>'
   ;

LT
   : '<'
   ;

LPAREN
   : '('
   ;

RPAREN
   : ')'
   ;

LBRACE
   : '{'
   ;

RBRACE
   : '}'
   ;

LBRACKET
   : '['
   ;

RBRACKET
   : ']'
   ;

WS
   : [ \t\r\n]+ -> skip
   ;
