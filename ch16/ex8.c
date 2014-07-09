/* KNKC chapter 16 exercise 8
 * Sundeep Kolli 08-july-2014
 * Program: ex8.c
 * Purpose: Let color be the following structure:
 *		struct color{
 *			int red;
 *			int green;
 *			int blue;
 *		}
*/


/*
 * a) Write a declaration for a const variable MAGENTA of type struct color 
 * whose members have the values 255, 0 and 255 respectively.
 */
 
 const struct MAGENTA = {255, 0, 255};
 
 /*
 * b) Repeat part a) but use a C99 style designated initializer that doesn't 
 * specify the value of green, allowing it to default to 0.
 */
 
 const struct MAGENTA = {.red = 255, .blue = 255};
 