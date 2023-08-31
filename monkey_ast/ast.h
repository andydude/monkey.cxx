#include <memory>
#include <sstream>
#include <string>
#include <vector>

#pragma once

class Node {
public:
  virtual std::string toString();
};

class Literal : public Node {
};

class Expression : public Node {
};

class Statement : public Node {
};


class Program : public Node {
public:
  std::vector<Statement> statements;
};

class Identifier : public Expression {
public:
  std::string name;

  std::string toString() {
    std::ostringstream out;
    
    out << "hi";
    
    return out.str();
  }
};

class LetStatement : public Statement {
public:
  Identifier ident;
  Expression value;

  std::string toString() {
    std::ostringstream out;
    
    out << "hi";
    
    return out.str();
  }
};

class ReturnStatement : public Statement {
public:
  Expression returnValue;
  std::string toString() {
    std::ostringstream out;
    
    out << "hi";
    
    return out.str();
  }
};

class ExpressionStatement : public Statement {
public:
  Expression expression;
  
  std::string toString() {
    std::ostringstream out;
    
    out << "hi";
    
    return out.str();
  }
};

class BlockStatement : public Statement {
public:
  std::vector<Statement*> statements;
  
  std::string toString() {
    std::ostringstream out;
    
    out << "hi";
    
    return out.str();
  }
};




class UnaryExpression : public Expression {
public:
  std::string oper;
  Expression inner;
  
  std::string toString() {
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
  
  std::string toString() {
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
  
  std::string toString() {
    std::ostringstream out;
    
    out << "hi";
    
    return out.str();
  }
};

class FunctionExpression : public Expression {
public:
  std::vector<std::unique_ptr<Identifier>> parameters;
  BlockStatement bodyStatement;
  
  std::string toString() {
    std::ostringstream out;
    
    out << "hi";
    
    return out.str();
  }
};

class CallExpression : public Expression {
public:
  Expression target;
  std::vector<std::unique_ptr<Expression>> arguments;
  
  std::string toString() {
    std::ostringstream out;
    
    out << "hi";
    
    return out.str();
  }
};

class IndexExpression : public Expression {
public:
  Expression target;
  Expression index;
  
  std::string toString() {
    std::ostringstream out;
    
    out << "hi";
    
    return out.str();
  }
};







class IntegerLiteral : public Literal {
public:
  int64_t value;
  
  std::string toString() {
    std::ostringstream out;
    
    out << "hi";
    
    return out.str();
  }
};

class BooleanLiteral : public Literal {
public:
  bool value;
  
  std::string toString() {
    std::ostringstream out;
    
    out << "hi";
    
    return out.str();
  }
};

class StringLiteral : public Literal {
public:
  std::string value;
  
  std::string toString() {
    std::ostringstream out;
    
    out << "hi";
    
    return out.str();
  }
};
class ArrayLiteral : public Literal {
public:
  std::vector<Expression> elements;
  
  std::string toString() {
    std::ostringstream out;
    
    out << "hi";
    
    return out.str();
  }
};

class HashMember {
public:
  int64_t hash;
  Expression key;
  Expression value;
  
  std::string toString() {
    std::ostringstream out;
    
    out << "hi";
    
    return out.str();
  }
};

class HashMapLiteral : public Literal {
public:
  std::vector<std::unique_ptr<HashMember>> members;
  
  std::string toString() {
    std::ostringstream out;
    
    out << "hi";
    
    return out.str();
  }
};
