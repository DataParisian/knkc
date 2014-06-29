/* KNKC chapter 14 exercise 3
 * Sundeep Kolli 26-may-2014
 * Program: ex3.c
 * Purpose: Let DOUBLE be the following macro:
 * 	#define DOUBLE(x) 2*x
*/

/* 
 * (a) What is the value of DOUBLE(1+2)?
 * ANS: Instead of evaluating as 2*(1+2) thus obtaining a result of 6, the
 * preprocessor will evaluate it as 2*1+2, which gives a result of 4.
 *
 * (b) What is the value of 4/DOUBLE(2)?
 * ANS: Instead of evaluating as 4/(2*2), thus obtaining a result of 1, the
 * preprocessor will evaluate it as 4/2*2, which gives a result of 4.
 *
 * (c) Fix the definition of DOUBLE
 * ANS: Just add a paranthesis around the expression and around x.
 * #define DOUBLE(x) (2*(x))
*/
