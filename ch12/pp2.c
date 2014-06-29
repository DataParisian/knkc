/* KNKC chapter 12 programming project 2
 * Sundeep Kolli 03-apr-2014
 * Program: pp2.c
 * Purpose: (a) Write a program that reads a message and checks whether it's a 
 * palindrome. Ignore that all characters aren't letters. Use integer variables 
 * to keep track of positions in the array.
 * (b) Revise the program to use pointers instead of an integer to keep track 
 * of the current position in the array.
*/

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define N 30

int main(void){

	int i, j = 0, k = 0;
	char c, msg[N], *p;
	bool isPalindrome = true;
	
	/* (a) Subscripting version */
	printf("(a) Subscripting version: \n");
	printf("Enter a message: ");	
	for (i = 0; i < N; i++){
		c = getchar();
		if (c == '\n'){
			break;
		}else if (toupper(c) >= 'A' && toupper(c) <= 'Z'){
			msg[k] = toupper(c);
			k++;
		}		
	}
	k--;
			
	while (j < k){
		if (msg[j] != msg[k])
			isPalindrome = false;
		j++;
		k--;
	}
	
	if (isPalindrome)
		printf("Palindrome\n");
	else
		printf("Not a palindrome\n");
		
	printf("\nClearing message array: \n\n");
	for (i = 0; i < N; i++){
		msg[i] = ' ';
	};
	
	/* (b) Pointer version*/
	printf("(b) Pointer version: \n");	
	printf("Enter a message: ");	
	p = &msg[0];
	while (((c = getchar()) != '\n') && (p < &msg[0] + N)) {
		if (toupper(c) >= 'A' && toupper(c) <= 'Z'){
			*p = toupper(c);
			p++;
		}	
	}
	p--;
	
	isPalindrome = true;
	k = p - &msg[0];
	p = &msg[0];
	j = 0;
	while (j < k){
		if (*(p + j)!= *(p + k))
			isPalindrome = false;
		j++;
		k--;
	}
	
	if (isPalindrome)
		printf("Palindrome\n");
	else
		printf("Not a palindrome\n");
	
	return 0;
}

