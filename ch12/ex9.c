/* KNKC chapter 12 exercise 9
 * Sundeep Kolli 01-apr-2014
 * Program: ex9.c
 * Purpose: Write the following function:
 * 		double inner_product(const double *a, const double *b, int n);
 * a and b point to arrays of length n. The function should return 
 * a[0] * b[0] + a[1] * b[1] + ... + a[n-1] * b[n-1]. Use pointer arithmetic - 
 * not subscripting - to visit array elements.
*/

#include <stdio.h>

#define N 10

double inner_product(const double *a, const double *b, int n);

int main(void){
	double a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	double b[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	printf("Inner product: %2.2f\n", inner_product(a, b, N));
	
	return 0;
}

double inner_product(const double *a, const double *b, int n){
	double innerProduct = 0.0f, *p, *q;
	p = a;
	q = b;
	
	while (p < (a + N) && q < (b + N)){
		innerProduct += (*p) * (*q);
		p++;
		q++; 
	}
	return innerProduct;
}

