/* KNKC chapter 14 exercise 5
 * Sundeep Kolli 26-may-2014
 * Program: ex5.c
 * Purpose: Let TOUPPER be the following macro:
 * #define TOUPPER(c) ('a'<=(c)&&(c)<='z'?(c)-'a'+'A':(c))
 * Let s be a string and let i be an int variable. Show the output produced 
 * by each of the following program fragments.
*/

/* 
 * (a) strcpy(s, "abcd")
 * i = 0;
 * putchar(TOUPPER(s[++i]));
 * ANS: The preprocessor would expand the parameter of TOUPPER as follows:
 * TOUPPER('a'<=(s[++i])&&(s[++i])<='z'?(s[++i])-'a'+'A':(s[++i])).
 * As we can see, index i is pre-incremented twice in the two tests used to 
 * check of c is lowercase. After the tests, i has a value of 2. Since, s[2] 
 * which is the character 'c' passes the test, the output will be 
 * (s[++i])-'a'+'A' which is again preincrementing the index i. This would 
 * evaluate to ('d' - 'a' + 'A') which is the uppercase character 'D'.
 *
 * (b) strcpy(s, "0123")
 * i = 0;
 * putchar(TOUPPER(s[++i]));
 * ANS: The preprocessor would expand the parameter of TOUPPER as follows:
 * TOUPPER('a'<=(s[++i])&&(s[++i])<='z'?(s[++i])-'a'+'A':(s[++i])).
 * Index i is pre-incremented in the first test but the test fails since 
 * s[1], which is '1' is less than 'a' (in ASCII numbers come before 
 * letters), the output will be s[++i] which is again preincrementing the 
 * index i. This would evaluate to s[2] which is the '2'.
 *
*/
