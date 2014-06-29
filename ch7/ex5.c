/* KNKC chapter 7 exercise 5
 * Sundeep Kolli 27-dec-2013
 * Program: exercise5.c
 * Purpose: Which one of the following is not a legal way of 
 * writing the number 65 (assume character set ASCII)
*/

#include <stdio.h>

int main(void){

	/* legal since ASCII char code 'A' is equal to 65 in decimal */
	printf ("%d\n", 'A');
	

	/* illegal since binary constants are not valid in standard C */
	/* some compilers like gcc allow binary literals as extensions */
	/*
	printf ("%d\n", 0b1000001);
	*/

	/* legal octal code for 65 */
	printf ("%d\n", 0101);

	/* legal hexadecimal code for 65 */
	printf ("%d\n", 0x41);

	return 0;
}
