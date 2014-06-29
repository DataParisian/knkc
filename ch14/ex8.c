/* KNKC chapter 14 exercise 8
 * Sundeep Kolli 30-may-2014
 * Program: ex8.c
 * Purpose: Write a macro that expands into a string containing the current 
 * line number and file name. For example, the followin macro invocation 
 * const char *str = LINE_FILE; should expand into 
 * const char *str = "Line 10 of file foo.c"; where foo.c is the file 
 * contianing the program and 10 is the line on which the invocation of 
 * LINE_FILE appears.
*/

#define STR(x) #x

#define LINE_STR(l) STR(l)

#define LINE_FILE "Line " LINE_STR(__LINE__) " of file " __FILE__

LINE_FILE;
