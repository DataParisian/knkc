/* KNKC chapter 12 programming project 1
 * Sundeep Kolli 03-apr-2014
 * Program: pp1.c
 * Purpose: (a) Write a program that reads a message and prints its reversal.
 * Reads the message one character at a time using getchar() and stores it in 
 * an array. It stops reading when the array is full or when the character 
 * read is '\n'.
 * (b) Revise the program to use a pointer instead of an integer to keep track 
 * of the current position in the array. 
*/

#include <stdio.h>

#define N 30

int main(void){

	int i = 0;
	char c, msg[N], *p = &msg[0];

	
	/* (a) Subscripting version */
	printf("(a) Subscripting version: \n");
	printf("Enter a message: ");	
	while ((i < N) &&  (c = getchar())!= '\n'){
		msg[i] = c;
		i++;
	}
	i--;
	
	printf("Reversal is: ");
	while (i >= 0){
		putchar(msg[i]);
		i--;
	}	
	printf("\n");
	
	printf("\nClearing message array: \n\n");
	for (i = 0; i < N; i++){
		msg[i] = ' ';
	};
	
	/* (b) Pointer version */
	printf("(b) Pointer version: \n");	
	printf("Enter a message: ");
	while ((p < &msg[0] + N) &&  (c = getchar())!= '\n'){
		*p = c;
		p++;
	}
	p--;
	
	printf("Reversal is: ");
	while (p >= &msg[0]){
		putchar(*p);
		p--;
	}	
	printf("\n");
	
	return 0;
}

