/* KNKC chapter 16 exercise 4
 * Sundeep Kolli 07-july-2014
 * Program: ex4.c
 * Purpose: Repeat ex3 but this time using a type named complex.
*/

/*
 * a) Show how to declare a type named complex for a structure with two 
 * members, real and imaginary, of type double.
 * Ans: 
 * 		typedef struct{
 *			double real;
 *			double imaginary;
 *      } Complex;
 *
 * ) Use the complex type to declare variables named c1, c2 and c3.
 * Ans: 
 * 		typedef struct{
 *			double real;
 *			double imaginary;
 *      } Complex;
 *		Complex c1, c2, c3;
 *
 * c) Write a function named make_complex that stores its two arguments (both 
 * of type double) in a complex structure, then returns the structure.
 
 * Ans: 
 * 		typedef struct{
 *			double real;
 *			double imaginary;
 *      } Complex;
 * 
 * 		Complex make_complex (double rp, double ip){
 *			Complex c;
 *			cp.real = rp;
 *			cp.imaginary = ip;
 *
 *			return c;
 *      }
 *
 * d) Write a function named add_complex that adds the corresponding members 
 * of its arguments (both complex structures), then returns the result
 * (another complex structure). 
 * Ans: 
 * 		typedef struct{
 *			double real;
 *			double imaginary;
 *      } Complex;
 * 
 * 		Complex add_complex (complex c1, complex c2){
 *			Complex rc;
 *
 *			rc.real = c1.real + c2.real;
 *			rc.imaginary = c1.imaginary + c2.imaginary;
 *
 *			return rc;
 *      }
 * 
*/
