/* KNKC chapter 14 exercise 13
 * Sundeep Kolli 17-june-2014
 * Program: ex13.c
 * Purpose: Show what the program will look like after preprocessing ignoring 
 * any lines added due to the inclusion of stdio.h. Also show the output of 
 * the program.
*/

#include <stdio.h>

#define N 100

void f(void);

int main(void){
	
	f();

#ifdef N
#undef N
#endif

	return 0;
}

void f(void){

#if defined(N)
	printf("N is %d\n", N);
#else
	printf("N is undefined\n");
#endif
}

/*
 a) Program after preprocessing (ignoring #include)
 
contents of stdio.h

void f(void);

int main(void){

	f();
	
	
	
	
	
	return 0;
}

void f(void){




	printf("N is undefined\n");

}
*/

/*
 b) Program output
 
 N is undefined 
 
*/
