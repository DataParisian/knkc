/* KNKC chapter 14 exercise 6
 * Sundeep Kolli 27-may-2014
 * Program: ex6.c
 * Purpose: Write the following macros which expand into printf calls.
*/

/* 
 * (a) Write a macro DISP(f,x) that expands into a call of printf that 
 * displays the value of the function f when called with argument x. 
 * For example,
 * DISP(sqrt, 3.0); should expand into 
 * printf("sqrt(%g) = %g\n", 3.0, sqrt(3.0));  
*/
 
#define DISP(f, x) printf(#f "(%g) = %g\n", f(x))

DISP(sqrt, 3.0);

/* 
 * (b) Write a macro DISP2(f,x, y) that's similar to DISP but works for 
 * functions with two arguments.
*/

#define DISP2(f, x, y) printf(#f " of (%g)/(%g) = %g\n", (x), (y), (f((x) / (y))))

DISP2(sqrt, 27.0, 3.0);
