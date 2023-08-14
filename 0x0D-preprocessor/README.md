# The Preproccesor
The C preprocessor modifies a source code file before handing it over to the compiler.
Preprocessor uses:
1. to include files directly into other files, or #define constants
2. to create "inlined" code using macros expanded at compile time and to prevent code from being compiled twice.
3. The preprocessor removes all comments
There are essentially three uses of the preprocessor--directives, constants, and macros. Directives are commands that tell the preprocessor to skip part of a file, include another file, or define a constant or macro. Directives always begin with a sharp sign (#) and for readability should be placed flush to the left of the page. All other uses of the preprocessor involve processing #define'd constants or macros. Typically, constants and macros are written in ALL CAPS to indicate they are special 
