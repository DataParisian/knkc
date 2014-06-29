/* KNKC chapter 14 exercise 4
 * Sundeep Kolli 26-may-2014
 * Program: ex4.c
 * Purpose: For each of the following macros, give an example that 
 * illustrates a problem with the macro and show how to fix it.
*/

/* 
 * (a) #define AVG(x,y) (x+y)/2
 * ANS: This definition could go wrong, for example, with   12/AVG(2,6)
 * The result would be 12/(2+6)/2 which would be evaluated from left to right. 
 * 12/(2+6) would evaluate to 1 and 1/2 would evaluate to 0. The intended 
 * result would have been 12/((2+6)/2) which would evaluate to 3. To fix it, 
 * it should be defined as #define AVG(x,y) (((x)+(y))/2)
 *
 * (b) #define AREA(x,y) (x)*(y)
 * ANS: This definition could also go wrong when, due to operator precedency, 
 * the expression is evaluated differenty that intended. For example, 
 * 100/AREA(2, 3) would evaluate to 100/(2)*(3) which is equal to (100/2)*150. 
 * The intended result was 100 / (2*3) which is equal to 16.
 *
*/
