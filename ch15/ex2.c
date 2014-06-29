/* KNKC chapter 15 exercise 2
 * Sundeep Kolli 23-june-2014
 * Program: ex2.c
 * Purpose: Which of the following should not be put in a header file?
 * Why not?
*/

/*
a) Function prototypes.
Ans: Function prototypes must be put in a header file.

b) Function definitions.
Ans: Function definitions must not be put in a header file. A header file 
could be included in multiple source files. After preprocessing, the contents 
of the header file would therefore appear in multiple source files. If 
function definitions are put in the header file and therefore copied into 
multiple source files, the program would then have copies of the same 
function in many source file. The compiler/linker would object to this.

c) Macro definitions.
Ans: Macro definitions must be put in a header file.

d) Type definitions.
Ans: Type definitions must be put in a header file.
*/
