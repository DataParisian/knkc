/* KNKC chapter 17 exercise 15
 * Sundeep Kolli 15-March-2015
 * Program: ex15.c
 * Purpose: Show the output of the following program and explain what it does:
*/


/* Answer: The main function calls the funtion f1 in the print statement and the
 * 		   the result is printed. The function f1 takes as argument a function
 * 		   pointer i.e. a pointer to a function with an int argument and calls
 * 		   this function repeatedly until the value returned is zero. The value 
 *         of n is incremented until the while loop exits and n is returned by
 *         f1. Here n is initialized to 0 and f2 is called repeatedly until the 
 *         while value returned by f2 is zero at which point n has value 3.
 *         Therefore, the program prints 3. 
*/

#include <stdio.h>

int f1 (int (*f)(int));
int f2 (int i);

int main(void){
	printf("Answer: %d\n", f1(f2));
	return 0;
}

int f1(int (*f)(int)){
	int n = 0;
	
	while ((*f)(n)) n++;	
	return n;
}

int f2(int i){

	return i * i + i - 12;
}

