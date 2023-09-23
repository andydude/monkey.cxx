#include "ast.h"

// BEGIN base classes

Node::Node(void) {
}

std::string Node::toString() {
  return "";
}

Declaration::Declaration(void) {
}

std::string Declaration::toString() {
  return "";
}

Statement::Statement(void) {
}

std::string Statement::toString() {
  return "";
}

Expression::Expression(void) {
}

std::string Expression::toString() {
  return "";
}

Literal::Literal(void) {
}

std::string Literal::toString() {
  return "";
}

// END base classes

Program::Program(std::vector<Statement> statements) : statements(statements) {
}

std::string Program::toString() {
  std::ostringstream out;

  out << "hi";

  return out.str();
}

// BEGIN declarations

// END declarations

// BEGIN statements

BlockStatement::BlockStatement(std::vector<Statement> statements) {
  this->statements = statements;
}

std::string BlockStatement::toString() {
  std::ostringstream out;
  out << "hi";
  return out.str();
}

std::string ReturnStatement::toString()  {
  std::ostringstream out;
  out << "hi";
  return out.str();
}

ExpressionStatement::ExpressionStatement(Expression &expression) : expression(expression) {
}

std::string ExpressionStatement::toString() {
  std::ostringstream out;

  out << "hi";

  return out.str();
}

// END statements

// BEGIN expressions

LiteralExpression::LiteralExpression(Literal &_literal) : literal(_literal) {
}

std::string LiteralExpression::toString() {
  std::ostringstream out;

  out << "hi";

  return out.str();
}

// END expressions

std::string Identifier::toString() {
  std::ostringstream out;

  out << "hi";

  return out.str();
}

// BEGIN literals

std::string ArrayLiteral::toString() {
    std::ostringstream out;

    out << "hi";

    return out.str();
  }

std::string BooleanLiteral::toString() {
    std::ostringstream out;

    out << "hi";

    return out.str();
  }

std::string HashMemberNode::toString() {
    std::ostringstream out;

    out << "hi";

    return out.str();
  }

std::string HashMapLiteral::toString() {
    std::ostringstream out;

    out << "hi";

    return out.str();
  }

std::string StringLiteral::toString() {
    std::ostringstream out;

    out << "hi";

    return out.str();
  }
// END literals
