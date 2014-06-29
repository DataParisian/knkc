/* KNKC chapter 14 exercise 16
 * Sundeep Kolli 17-june-2014
 * Program: ex16.c
 * Purpose: (C99) Assume that the following macro definitions are in effect:
 * 	#define IDENT(x) PRAGMA(indent #x)
 *  #define PRAGMA(x) _Pragma(#x)
 * What will the following line look like after macro expansion?
 * 	IDENT(foo)
*/


#define IDENT(x) PRAGMA(ident #x)
#define PRAGMA(x) _Pragma(#x)

IDENT(foo)

/*
INDENT(foo) will first be expanded as PRAGMA(ident "foo")
PRAGMA(ident "foo") will be expanded as _Pragma("ident \"foo\"")
which inturn will be destringized and expanded as 
#pragma ident "foo"
*/
