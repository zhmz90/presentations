kaleidoscope: lexer_parser_ast_cgen.cpp
	clang++ -g lexer_parser_ast_cgen.cpp `llvm-config --cxxflags --ldflags --system-libs --libs core mcjit native` -O3 \
	-o kaleidoscope -rdynamic -v -fno-rtti 
lexer: lexer.cpp
	clang++ -g lexer.cpp  `llvm-config --cxxflags --ldflags --system-libs --libs core mcjit native` -O3 \
	-o lexer 
parser_ast: parser_ast.cpp
	clang++ -g parser_ast.cpp  `llvm-config --cxxflags --ldflags --system-libs --libs core mcjit native` -O3 \
	-o parser_ast

