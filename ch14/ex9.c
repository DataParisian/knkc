/* KNKC chapter 14 exercise 9
 * Sundeep Kolli 31-may-2014
 * Program: ex9.c
 * Purpose: Write the following parametrized macros.
*/

/*
 * a) CHECK(x, y, n) - Has the value 1 if both x and y fall between 0 and n-1
 *    inclusive. 
*/

#define CHECK(x, y, n) \
	if ((x) >= 0 && (y) >= 0 && (x) <= (n-1) && (y) <= (n-1)) \
		1

CHECK(1, 2, 5);	 	 

/*
 * b) MEDIAN(x, y, z) - Finds the median of x, y and z. 
*/

#define MEDIAN(x, y, z) \
	(((x)-(y)) * ((z)-(y)) >= 0) ? (x) : \
	(((((y)-(x)) * ((z)-(y))) >= 0) ? (y) : (z))

MEDIAN(3, 2, 5);	 	

/*
 * c) POLYNOMIAL(x) - Computes the polynomial 3x⁵ + 2x⁴ - 5x³ - x² + 7x - 6. 
*/

#define POLYNOMIAL(x) ((3*(x)*(x)*(x)*(x)*(x)) + \
					  (2*(x)*(x)*(x)*(x)) - \
					  (5*(x)*(x)*(x)) - \
					  ((x)*(x)) + \
					  (7*(x)) - \
					  6)

POLYNOMIAL(2);
