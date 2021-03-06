/* KNKC chapter 8 programming project 15
 * Sundeep Kolli 07-feb-2014
 * Program: pp15.c
 * Purpose: Write a program that encrypts a message using a Caesar cipher. 
 * The user will enter the message to be encrypted and the number of positions 
 * by which letters should be shifted.
*/

#include <stdio.h>

#define MSG_LENGTH 80

int main (void){
	
	char c, msg[MSG_LENGTH] = {'a'};
	int i, charCount = 0, shift;
	
	printf ("Enter message to be crypted: ");		
	while ((c = getchar()) != '\n' && charCount < MSG_LENGTH){
		msg[charCount] = c;
		charCount++;	
	}
	
	printf ("Enter shift amount (1-25): ");
	scanf ("%d", &shift);
	
	printf ("Encrypted message: ");
	for (i = 0; i < charCount; i++){
		c = msg[i];
		if ((c >= 'a' && c <= 'z')){
			putchar((((c - 'a') + shift) % 26) + 'a');			
		}else if ((c >= 'A' && c <= 'Z')){
			putchar((((c - 'A') + shift) % 26) + 'A');		
		}else{
			putchar(c);
		}
	}	
	
	printf ("\n");
		
	return 0;
}
