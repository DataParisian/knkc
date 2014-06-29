/* KNKC chapter 13 Programming Project 17.
 * Sundeep Kolli 28-apr-2014
 * Program: pp17.c
 * Purpose: Modify pp2 from ch12 so that it includes the following function:
 * 		bool is_palindrome(const char *message);
 * The function returns true if the string pointed to by message is a 
 * palindrome.
 *
*/

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define N 30

bool is_palindrome(const char *message);

int main(void){
	
	char msg[N+1];
	bool isPalindrome = true;
	
	printf("Enter a message with less than %d characters: ", N);
	gets(msg);
	
	isPalindrome = is_palindrome(msg);	
	
	if (isPalindrome)
		printf("Is a Palindrome\n");
	else
		printf("Not a palindrome\n");
	
	return 0;
}

bool is_palindrome(const char *message){
	
	bool isPalindrome = true;
	char lettersInMsg[N+1];
	char *begin = lettersInMsg;
	char *end = lettersInMsg;
	
	while (*message) {
		if (toupper(*message) >= 'A' && toupper(*message) <= 'Z'){
			*end = toupper(*message);
			end++;
		}		
		message++;
	}
	*end = '\0';
	end--;
	
	while(begin < end){
		if(*begin != *end){
			isPalindrome = false;
			break;
		}
		begin++;
		end--;
	}
	
	return isPalindrome;
}
