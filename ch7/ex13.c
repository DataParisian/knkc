/* KNKC chapter 7 exercise 13
 * Sundeep Kolli 27-dec-2013
 * Program: exercise13.c
 * Purpose: give the value and type of each expression below
*/

#include <stdio.h>

int main(void){

	char c = '\1';
	short s = 2;
	int i = -3;
	long m = 5;
	float f = 6.5;
	double d = 7.5;

	/* type: int, value: -3*/
	printf ("%d\n", c * i);	

	/* type: long, value: 7 */
	printf ("%ld\n", s + m);	

	/* type: float, value: 6.5 */
	printf ("%f\n", f / c);	

	/* type: double, value: 3.75 */
	printf ("%f\n", d / s);	

	/* type: double, value: -1.0 */
	printf ("%f\n", f - d);	

	/* type: float, value: 6 */
	printf ("%d\n", (int) f);	


	return 0;
}
