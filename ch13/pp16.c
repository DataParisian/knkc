/* KNKC chapter 13 Programming Project 16.
 * Sundeep Kolli 28-apr-2014
 * Program: pp16.c
 * Purpose: Modify pp1 from ch12 so that it includes the following function:
 * 		void *reverse(char *message);
 * The function reverses the string pointed to by message.
 *
*/

#include <stdio.h>

#define N 100

void reverse(char *message);

int main(void){

	char msg[N + 1];

	printf("Enter a message with less than %d characters: ", N);
	gets(msg);
	
	/* printf("not failed yet in main\n"); */
	
	reverse(msg);
	
	/* printf("not failed yet after reversal before printing\n"); */
	
	printf("Reversal is: %s\n", msg);
		
	return 0;
}

void reverse(char *message){
	char *start = message;
	char *end = message;
	
	char tempChar;
	
	while (*end){
		end++;
	}
	end--;
	
	while(start != end){
		tempChar = *start;
		*start = *end;
		*end = tempChar;
		start++;
		end--;
	}
}
