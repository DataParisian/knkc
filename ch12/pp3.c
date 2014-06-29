/* KNKC chapter 12 programming project 1
 * Sundeep Kolli 04-apr-2014
 * Program: pp3.c
 * Purpose: simplify part (b) of pp1.c by taking advantage of the fact that an 
 * array name can be used as a pointer. 
*/

#include <stdio.h>

#define N 30

int main(void){

	int i = 0;
	char c, msg[N], *p = msg;

	
	/* (a) Subscripting version */
/*	printf("(a) Subscripting version: \n");*/
/*	printf("Enter a message: ");	*/
/*	while ((i < N) &&  (c = getchar())!= '\n'){*/
/*		msg[i] = c;*/
/*		i++;*/
/*	}*/
/*	i--;*/
/*	*/
/*	printf("Reversal is: ");*/
/*	while (i >= 0){*/
/*		putchar(msg[i]);*/
/*		i--;*/
/*	}	*/
/*	printf("\n");*/
/*	*/
/*	printf("\nClearing message array: \n\n");*/
/*	for (i = 0; i < N; i++){*/
/*		msg[i] = ' ';*/
/*	};*/
	
	/* (b) Pointer version */
	printf("(b) Pointer version: \n");	
	printf("Enter a message: ");
	while ((p < msg + N) &&  (c = getchar())!= '\n'){
		*p = c;
		p++;
	}
	p--;
	
	printf("Reversal is: ");
	while (p >= msg){
		putchar(*p);
		p--;
	}	
	printf("\n");
	
	return 0;
}

