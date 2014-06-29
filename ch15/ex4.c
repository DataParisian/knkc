/* KNKC chapter 15 exercise 4
 * Sundeep Kolli 24-june-2014
 * Program: ex4.c
 * Purpose: Assume that debug.h is a header file with the below contents: 
	#ifdef DEBUG
	#define PRINT_DEBUG(n) printf("Value of " #n ": %d\n", n)
	#else
	#define PRINT_DEBUG(n)
	#endif

	Let testdebug.c be the following source file:
	
	#include <stdio.h>
	
	#define DEBUG
	#include "debug.h"
	
	int main(void)
	{
		int i = 1, j = 2, k = 3;
	
	#ifdef DEBUG
		printf("Output if DEBUG is defined:\n");
	#else
		printf("Output if DEBUG is not defined:\n");
	#endif
	
		PRINT_DEBUG(i);
		PRINT_DEBUG(j);
		PRINT_DEBUG(k);
		PRINT_DEBUG(i + j);
		PRINT_DEBUG(2 * i + j - k);
		
		return 0;
	}
	
	Answer the following questions:
*/

/*
	a) What is the output when the program is executed?
	Ans:
		Output if DEBUG is defined:
		Value of i: 1
		Value of j: 2
		Value of k: 3
		Value of i + j: 3
		Value of 2 * i + j - k: 1
		
*/

/*
	b) What is the output if the #define directive is removed from testdebug.c?
	Ans:
		Output if DEBUG is not defined:
		
*/

/*
	c) Explain why the output is different in parts (a) and (b)?
	Ans: In part a), since the macro DEBUG is defined, the conditional 
	statements in the debug header leave in place only statements which show 
	output appropriately. Conversely, in part (b), since the DEBUG macro is 
	not defined, these statements are removed during preprocessing.	
*/

/*
	d) Is it necessary for the DEBUG macro to be defined before debug.h is 
	included in order for PRINT_DEBUG to have the desired effect? Justify 
	your answer?
	Ans: Normally yes, otherwise the preprocessor considers its value to be 0.
	However, with most modern compilers, a macro could be supplied outside 
	the program, for example on the command line. This would have the same
	effect as if the macro has been defined at the top of the source file.
*/
