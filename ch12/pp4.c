/* KNKC chapter 12 programming project 4
 * Sundeep Kolli 04-apr-2014
 * Program: pp4.c
 * Purpose: Simplify part (b) of pp2.c by taking advantage of the fact that an 
 * array name can be used as a pointer.
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
/*	printf("(a) Subscripting version: \n");*/
/*	printf("Enter a message: ");	*/
/*	for (i = 0; i < N; i++){*/
/*		c = getchar();*/
/*		if (c == '\n'){*/
/*			break;*/
/*		}else if (toupper(c) >= 'A' && toupper(c) <= 'Z'){*/
/*			msg[k] = toupper(c);*/
/*			k++;*/
/*		}		*/
/*	}*/
/*	k--;*/
/*			*/
/*	while (j < k){*/
/*		if (msg[j] != msg[k])*/
/*			isPalindrome = false;*/
/*		j++;*/
/*		k--;*/
/*	}*/
/*	*/
/*	if (isPalindrome)*/
/*		printf("Palindrome\n");*/
/*	else*/
/*		printf("Not a palindrome\n");*/
/*		*/
/*	printf("\nClearing message array: \n\n");*/
/*	for (i = 0; i < N; i++){*/
/*		msg[i] = ' ';*/
/*	};*/
	
	/* (b) Pointer version*/
	printf("(b) Pointer version: \n");	
	printf("Enter a message: ");	
	p = msg;
	while (((c = getchar()) != '\n') && (p < msg + N)) {
		if (toupper(c) >= 'A' && toupper(c) <= 'Z'){
			*p = toupper(c);
			p++;
		}	
	}
	p--;
	
	isPalindrome = true;
	k = p - msg;
	p = msg;
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

