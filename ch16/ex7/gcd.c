/* KNKC chapter 16 exercise 7
 * Sundeep Kolli 08-july-2014
 * Program: ex7.c
*/

#include "gcd.h"

/**************************************************************************
 * gcd: Computes the greatest common divisor using Euclid's algorithm.    * 
 **************************************************************************/
int gcd(int x, int y){
	
	int r;
	
	if (x < 0) x = -x;
	if (y < 0) y= -y;
	
	while (y){
		r = x % y;
		x = y;
		y = r;
	}
	
	return x;
}


