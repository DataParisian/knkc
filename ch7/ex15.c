/* KNKC chapter 7 exercise 15
 * Sundeep Kolli 27-dec-2013
 * Program: exercise15.c
 * Purpose: create types named Int8, Int16 and Int32 using typedef 
 * to represent 8, 16 and 32 bit integers
*/

#include <stdio.h>

int main(void){

	typedef char Int8;
	typedef short Int16;
	typedef int Int32;

	printf ("Size of Int8 is %lu\n", (unsigned long) sizeof(Int8));
	printf ("Size of Int16 is %lu\n", (unsigned long) sizeof(Int16));
	printf ("Size of Int32 is %lu\n", (unsigned long) sizeof(Int32));

	return 0;
}
