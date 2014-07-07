/* KNKC chapter 16 exercise 3
 * Sundeep Kolli 07-july-2014
 * Program: ex3.c
 * Purpose: Complete the following exercises.
*/

/*
 * a) Show how to declare a tag named complex for a structure with two 
 * members, real and imaginary, of type double.
 * Ans: 
 * 		struct complex{
 *			double real;
 *			double imaginary;
 *      };
 *
 * ) Use the complex tag to declare variables named c1, c2 and c3.
 * Ans: 
 * 		struct complex{
 *			double real;
 *			double imaginary;
 *      };
 *		struct complex c1, c2, c3;
 *
 * c) Write a function named make_complex that stores its two arguments (both 
 * of type double) in a complex structure, then returns the structure.
 
 * Ans: 
 * 		struct complex{
 *			double real;
 *			double imaginary;
 *      };
 * 
 * 		struct complex make_complex (double rp, double ip){
 *			struct complex c;
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
 * 		struct complex{
 *			double real;
 *			double imaginary;
 *      };
 * 
 * 		struct complex add_complex (struct complex c1, struct complex c2){
 *			struct complex rc;
 *
 *			rc.real = c1.real + c2.real;
 *			rc.imaginary = c1.imaginary + c2.imaginary;
 *
 *			return rc;
 *      }
 * 
*/
