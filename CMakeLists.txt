cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
project(monkey-antlr4-cxx)
add_compile_options(-Wno-attributes)
add_library(libantlr4 SHARED IMPORTED)

set_property(TARGET libantlr4 PROPERTY IMPORTED_LOCATION
	/usr/lib/x86_64-linux-gnu/libantlr4-runtime.so.4.9)

add_executable(monkey
	monkey_ast/ast.cpp
	monkey_interpreter/interpreter.cpp
	monkey_interpreter/main.cpp
	monkey_parser/MonkeyLexer.cpp
	monkey_parser/MonkeyParser.cpp
	monkey_parser/lexer.cpp
	monkey_parser/parser.cpp
	monkey_parser/token.cpp
	monkey_parser/visitor.cpp)

target_include_directories(monkey PRIVATE
	monkey_ast
	monkey_parser
	/usr/include/antlr4-runtime)

target_link_libraries(monkey libantlr4)
