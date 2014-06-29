/* KNKC chapter 14 exercise 12
 * Sundeep Kolli 17-june-2014
 * Program: ex12.c
 * Purpose: Suppose that the macro M has been defined as follows:
 *   #define M 10
 * Which of the following tests will fail? 
*/

#define M 10

/*
 * a) #if M
 * Ans: This will not fail since M is defined as 0.   
*/


/*
 * b) #ifdef M
 * Ans: This will not fail since M is defined, as 0.   
*/

/*
 * c) #ifndef M
 * Ans: This will fail since M is defined, as 0.   
*/

/*
 * d) #if defined(M)
 * Ans: This will not fail since M is defined, as 0.   
*/

/*
 * e) #if !defined(M)
 * Ans: This will fail since M is defined, as 0.   
*/
