#include <memory>
#include <sstream>
#include <string>
#include <vector>

#pragma once

// BEGIN base classes

class Node {
public:
  Node(void);
  virtual std::string toString();
};

class Declaration : public Node {
public:
  Declaration(void);
  virtual std::string toString();
};

class Statement : public Node {
public:
  Statement(void);
  virtual std::string toString();
};

class Expression : public Node {
public:
  Expression(void);
  virtual std::string toString();
};

class Literal : public Node {
public:
  Literal(void);
  virtual std::string toString();
};

// END base classes

class Program : public Node {
public:
  std::vector<Statement> statements;
  Program(std::vector<Statement> statements);
  virtual std::string toString();
};

// BEGIN declarations
// END declarations

// BEGIN statements
// END statements
// BEGIN expressions
// END expressions

class Identifier : public Expression {
public:
  std::string name;

  virtual std::string toString();
};

// BEGIN literals
// END literals

class LetStatement : public Statement {
public:
  Identifier ident;
  Expression value;

  virtual std::string toString() {
    std::ostringstream out;

    out << "hi";

    return out.str();
  }
};

class ReturnStatement : public Statement {
public:
  Expression returnValue;
  ReturnStatement(Expression &returnValue);
  virtual std::string toString();
};

class ExpressionStatement : public Statement {
public:
  Expression expression;
  ExpressionStatement(Expression &expression);
  virtual std::string toString();
};

class BlockStatement : public Statement {
public:
  std::vector<Statement> statements;
  BlockStatement(std::vector<Statement> statements);
  virtual std::string toString();
};




class UnaryExpression : public Expression {
public:
  std::string oper;
  Expression inner;

  virtual std::string toString() {
    std::ostringstream out;

    out << "hi";

    return out.str();
  }
};

class BinaryExpression : public Expression {
public:
  std::string oper;
  Expression left;
  Expression right;

  virtual std::string toString() {
    std::ostringstream out;

    out << "hi";

    return out.str();
  }
};

class ConditionExpression : public Expression {
public:
  Expression *condition;
  BlockStatement *thenStatement;
  BlockStatement *elseStatement;

  virtual std::string toString() {
    std::ostringstream out;

    out << "hi";

    return out.str();
  }
};

class FunctionExpression : public Expression {
public:
  std::vector<Identifier> parameters;
  BlockStatement bodyStatement;

  virtual std::string toString() {
    std::ostringstream out;

    out << "hi";

    return out.str();
  }
};

class CallExpression : public Expression {
public:
  Expression target;
  std::vector<Expression> arguments;

  virtual std::string toString() {
    std::ostringstream out;

    out << "hi";

    return out.str();
  }
};

class IndexExpression : public Expression {
public:
  Expression target;
  Expression index;

  virtual std::string toString() {
    std::ostringstream out;

    out << "hi";

    return out.str();
  }
};

class LiteralExpression : public Expression {
public:
  Literal literal;
  LiteralExpression(Literal &literal);
  virtual std::string toString();
};






class IntegerLiteral : public Literal {
public:
  int64_t value;

  virtual std::string toString() {
    std::ostringstream out;

    out << "hi";

    return out.str();
  }
};

class BooleanLiteral : public Literal {
public:
  bool value;

  virtual std::string toString();
};

class StringLiteral : public Literal {
public:
  std::string value;
  virtual std::string toString();
};

class ArrayLiteral : public Literal {
public:
  std::vector<Expression> elements;
  virtual std::string toString();
};

class HashMemberNode : public Node {
public:
  int64_t hash;
  Expression key;
  Expression value;
  virtual std::string toString();
};

class HashMapLiteral : public Literal {
public:
  std::vector<HashMemberNode> members;
  virtual std::string toString();
};
