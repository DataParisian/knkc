/* KNKC chapter 13 Programming Project 13.
 * Sundeep Kolli 28-apr-2014
 * Program: pp13.c
 * Purpose: Modify pp15 from ch8 so that it includes the following function:
 * 		void encrypt(char *message, int shift);
 * The function expects message to point to a string containing the message
 * to be encrypted; shift represents the amount by which each letter in the 
 * message is to be shifted.
*/

#include <stdio.h>

#define N 80

void encrypt(char *message, int shift);

int main (void){
	
	char msg[N + 1];
	int shift;
	
	printf ("Enter message to be crypted with less than %d characters: ", N);		
	gets(msg);	
	
	printf ("Enter shift amount (1-25): ");
	scanf ("%d", &shift);
	
	encrypt(msg, shift);
	
	printf ("Encrypted message: %s\n", msg);	
		
	return 0;
}

void encrypt(char *message, int shift){
	
	while (*message){
		if ((*message >= 'a' && *message <= 'z')){
			*message = ((((*message - 'a') + shift) % 26) + 'a');			
		}else if ((*message >= 'A' && *message <= 'Z')){
			*message = ((((*message - 'A') + shift) % 26) + 'A');
		}
		message++;
	}
}
