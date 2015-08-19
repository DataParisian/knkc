/* KNKC chapter 17 exercise 16
 * Sundeep Kolli 15-March-2015
 * Program: ex16.c
 * Purpose: Wrtie the following function. The call sum(g, i, j) should return
 * g(i) + ... + g(j). 
 * int sum(int (*f)(int), int start, int end);
*/


#include <stdio.h>

int sum(int (*f)(int), int start, int end);
int g(int i);

int main(void){
	
	int i = 1, j = 100;
	
	printf("Sum: %d\n", sum(g, i, j));
	return 0;
}

int sum(int (*f)(int), int start, int end){
	
	int sum = 0;
	
	for ( ; start <= end; start++){
		sum += ((*f)(start));
	}
		
	return sum;
}

int g(int i){

	return i * i;
}

