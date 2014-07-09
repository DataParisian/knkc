/* KNKC chapter 16 exercise 7
 * Sundeep Kolli 08-july-2014
 * Program: ex7.c
*/

#include <stdio.h>
#include "gcd.h"
#include "fraction.h"

/******************************************************************************
 * reduce_fraction: reduces a fraction to its lowest form.                    *
 *****************************************************************************/
struct fraction reduce_fraction(struct fraction f){
	
	struct fraction rf;
	int g = gcd(f.numerator, f.denominator);

	#ifdef DEBUG
	printf("GCD: %d\n", g);
	#endif

	rf.numerator = f.numerator / g;
	rf.denominator = f.denominator / g;
	
	return rf;
}

/******************************************************************************
 * add_fractions: returns the sum of two fraction in unreduced form.          *
 *****************************************************************************/
struct fraction add_fractions(struct fraction f1, struct fraction f2){
	
	struct fraction sum;	

	sum.numerator = f1.numerator * f2.denominator 
					+ f1.denominator * f2.numerator;
	
	sum.denominator = f1.denominator * f2.denominator;
	
	return sum;
}

/******************************************************************************
 * subtract_fractions: returns the difference of two fractions in unreduced   *
 * 					   form.                                                  *
 *****************************************************************************/
struct fraction subtract_fractions(struct fraction f1, struct fraction f2){
	
	struct fraction diff;	

	diff.numerator = f1.numerator * f2.denominator 
					- f1.denominator * f2.numerator;
	
	diff.denominator = f1.denominator * f2.denominator;
	
	return diff;
}

/******************************************************************************
 * multiply_fractions: returns the product of two fractions in unreduced      *
 * 					   form.                                                  *
 *****************************************************************************/
struct fraction multiply_fractions(struct fraction f1, struct fraction f2){
	
	struct fraction product;	

	product.numerator = f1.numerator * f2.numerator;
	
	product.denominator = f1.denominator * f2.denominator;
	
	return product;
}

/******************************************************************************
 * divide_fractions: returns the quotient of two fractions in unreduced     *
 * 					   form.                                                  *
 *****************************************************************************/
struct fraction divide_fractions(struct fraction f1, struct fraction f2){
	
	struct fraction quotient;	

	quotient.numerator = f1.numerator * f2.denominator;
	
	quotient.denominator = f2.numerator * f1.denominator;
	
	return quotient;
}
