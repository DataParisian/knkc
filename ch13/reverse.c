/* KNKC chapter 13 Programming Project 4
 * Sundeep Kolli 26-apr-2014
 * Program: pp4.c
 * Purpose: Wrtie a program named reverse.c that echoes its command-line 
 * arguments in reverse order.
*/


#include <stdio.h>
/*#include <stdlib.h>*/


int main(int argc, char *argv[]){
	
	int i;
	
	for (i = argc - 1; i > 0; i--)
		printf("%s ", argv[i]);
	
	printf("\n");
	
	return 0;
}
