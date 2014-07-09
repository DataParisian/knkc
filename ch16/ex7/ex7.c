/* KNKC chapter 16 exercise 7
 * Sundeep Kolli 08-july-2014
 * Program: ex7.c
 * Purpose: Assume that the fraction structure contains two members: 
 * numerator and denominator (both of type int). Write functions that perform 
 * the following operations on fractions:
*/

#include <stdio.h>
#include "fraction.h"

#define DEBUG1

void test_part_a(void);
void test_part_b(void);
void test_part_c(void);
void test_part_d(void);
void test_part_e(void);

int main(void){
	
	char c;
	
	printf("Which part of the exercise do you want to run? ");
	scanf("%c", &c);
	
	switch (c){
		case 'a': test_part_a(); break;
		case 'b': test_part_b(); break;
		case 'c': test_part_c(); break;
		case 'd': test_part_d(); break;
		case 'e': test_part_e(); break;
		default: printf("Unknown entry.\n");
	}
	
	return 0;
}

/*
 * a) Reduce the fraction f to lowest terms. Hint: To reduce a fraction to 
 * lowest terms, first compute the greatest common divisor (GCD) of the 
 * numerator and denominator. Then divide both the numerator and denominator 
 * by the GCD.
 */
void test_part_a(void){
	
	struct fraction f;
	
	printf("Enter an unreduced fraction (a/b): ");
	scanf("%d / %d", &f.numerator, &f.denominator);

	#ifdef DEBUG
	printf("Unreduced fraction: %d/%d\n", f.numerator, f.denominator);
	#endif
	
	f = reduce_fraction(f);
	printf("Reduced fraction: %d/%d\n", f.numerator, f.denominator);

	return;
}

/*
 * b) Add the fractions f1 and f2.
 */
void test_part_b(void){
	struct fraction sum, f1, f2;
		
	printf("Enter first fraction (a/b): ");
	scanf("%d / %d", &f1.numerator, &f1.denominator);
	
	printf("Enter second fraction (a/b): ");
	scanf("%d / %d", &f2.numerator, &f2.denominator);
	
	sum = add_fractions(f1, f2);
	sum = reduce_fraction(sum);	
	
	printf("Sum of the fractions: %d/%d\n", sum.numerator, sum.denominator);
}

/*
 * c) Subtract the fraction f2 from the fraction f1.
 */
void test_part_c(void){
	struct fraction diff, f1, f2;
		
	printf("Enter first fraction (a/b): ");
	scanf("%d / %d", &f1.numerator, &f1.denominator);
	
	printf("Enter second fraction (a/b): ");
	scanf("%d / %d", &f2.numerator, &f2.denominator);
	
	diff = subtract_fractions(f1, f2);
	diff = reduce_fraction(diff);	
	
	printf("Difference of the fractions: %d/%d\n", diff.numerator, diff.denominator);
}

/*
 * d)  Multiply the fractions f1 and f2.
 */
void test_part_d(void){
	struct fraction product, f1, f2;
		
	printf("Enter first fraction (a/b): ");
	scanf("%d / %d", &f1.numerator, &f1.denominator);
	
	printf("Enter second fraction (a/b): ");
	scanf("%d / %d", &f2.numerator, &f2.denominator);
	
	product = multiply_fractions(f1, f2);
	product = reduce_fraction(product);
	
	printf("Product of the fractions: %d/%d\n", product.numerator, product.denominator);
}

/*
 * e)  Divide the fraction f1 by the fraction f2.
 */
void test_part_e(void){
	struct fraction quotient, f1, f2;
		
	printf("Enter first fraction (a/b): ");
	scanf("%d / %d", &f1.numerator, &f1.denominator);
	
	printf("Enter second fraction (a/b): ");
	scanf("%d / %d", &f2.numerator, &f2.denominator);
	
	quotient = divide_fractions(f1, f2);
	quotient = reduce_fraction(quotient);
	
	printf("Product of the fractions: %d/%d\n", quotient.numerator, quotient.denominator);
} 
 