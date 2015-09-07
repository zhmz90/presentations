kaleidoscope: lexer_parser_ast_cgen.cpp
	clang++ -g lexer_parser_ast_cgen.cpp `llvm-config --cxxflags --ldflags --system-libs --libs core mcjit native` -O3 \
	-o kaleidoscope -rdynamic -v -fno-rtti 
lexer: lexer.cpp
	clang++ -g lexer.cpp  `llvm-config --cxxflags --ldflags --system-libs --libs core mcjit native` -O3 \
	-o lexer 

parser_ast: parser_ast.cpp
	clang++ -g parser_ast.cpp  `llvm-config --cxxflags --ldflags --system-libs --libs core mcjit native` -O3 \
	-o parser_ast
codegen: codegen.cpp
	clang++ -g codegen.cpp  `llvm-config --cxxflags --ldflags --system-libs --libs core mcjit native` -O3 -o codegen -rdynamic -v -fno-rtti 
jit_opt: jit_opt.cpp
	clang++ -g jit_opt.cpp  `llvm-config --cxxflags --ldflags --system-libs --libs core mcjit native` -O3 -o jit_opt -rdynamic -v -fno-rtti 

if: if.cpp
	clang++ -g if.cpp  `llvm-config --cxxflags --ldflags --system-libs --libs core mcjit native` -O3 -o if -rdynamic -v -fno-rtti 
user_defined_types: user_defined_types.cpp
	clang++ -g user_defined_types.cpp  `llvm-config --cxxflags --ldflags --system-libs --libs core mcjit native` -O3 -o user_defined_types -rdynamic -v -fno-rtti 

