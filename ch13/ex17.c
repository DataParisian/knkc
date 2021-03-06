/* KNKC chapter 13 exercise 17
 * Sundeep Kolli 19-apr-2014
 * Program: ex17.c
 * Purpose: Write the following function:
 * 		bool test_extension(const char *file_name, const char *extension);
 * file_name points to a string containing a file name. The function should 
 * return true if the file's extension matches the string pointed to by 
 * extension. Incorporate search for the end of a string idiom into this 
 * function. Use the toupper function to convert characters to upper-case 
 * before comparing them.
*/

/*UNSAFE UNSAFE UNSAFE*/
/*UNSAFE UNSAFE UNSAFE*/
/*UNSAFE UNSAFE UNSAFE*/
/*UNSAFE UNSAFE UNSAFE*/
/*UNSAFE UNSAFE UNSAFE*/
/*UNSAFE UNSAFE UNSAFE*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

bool test_extension(const char *file_name, const char *extension);

#define N 100

int main(void){
	char fname[N + 1] = "", extn[N + 2] = "";
	
	printf("Enter a file name with less than %d characters: ", N);
	gets(fname);
	
	printf("Enter the extension of file name with less than %d characters: ", N);
	gets(extn);
	
	printf("Extension match: ");
	if (test_extension(fname, extn))
		puts("true\n");
	else
		puts("false\n");
		
	return 0;
}

bool test_extension(const char *file_name, const char *extension){

	const char *p = file_name, *t = extension;
	bool isMatch = true;
	
	if (*p == '\0' || *t == '\0')
		return false;
		
	for (; *p; p++)
		if (*p == '.')
			break;	
	
	for (p++; *p; p++){		
		
		if ((toupper(*p) != toupper(*t)) || *t == '\0'){
			isMatch = false;
			break;
		}		
		t++;
	}
	
	return isMatch;
}

