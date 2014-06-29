/* KNKC chapter 15 exercise 3
 * Sundeep Kolli 23-june-2014
 * Program: ex3.c
 * Purpose: Would there be a problem with writing #include "file" instead 
 * of #include <file> if file is a system header?
*/

/*
Ans: If we write #include "file", the preprocessor searches for file in the 
current directory. If not found, it searches for file in the directories of the
currently opened include files, etc. In the end, it searches for file in the 
directory specified by the environment variable which is where the system 
headers are stored. So, the form of the include statement would not pose a 
problem unless there is a user written header file with the name "file". 
However, for clarity sake, better to write is with angled brackets.
*/
