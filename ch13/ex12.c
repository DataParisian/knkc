/* KNKC chapter 13 exercise 12
 * Sundeep Kolli 17-apr-2014
 * Program: ex12.c
 * Purpose: Write the following function:
 * 		void get_extension(const char *file_name, char *extension);
 * file_name points to a string containing a file name. The function should 
 * store the extension on the file name in the string pointed to by extension. 
 * If the file name doesn't have an extension, the function should store an 
 * empty string (a single null character) in the string pointed to by extension.
 * Keep the function as simple as possible by using strlen and strcpy functions.
*/

/*UNSAFE UNSAFE UNSAFE*/
/*UNSAFE UNSAFE UNSAFE*/
/*UNSAFE UNSAFE UNSAFE*/
/*UNSAFE UNSAFE UNSAFE*/
/*UNSAFE UNSAFE UNSAFE*/
/*UNSAFE UNSAFE UNSAFE*/

#include <stdio.h>
#include <string.h>

void get_extension(const char *file_name, char *extension);

#define N 100

int main(void){
	char fname[N + 1], extn[N + 1] = "";
	
	printf("Enter the filename: ");
	gets(fname);
	
	get_extension(fname, extn);
	
	printf("File name: %s has extension %s\n", fname, extn);
				
	return 0;
}

void get_extension(const char *file_name, char *extension){	

/*	const char *f = file_name;*/
	int i = strlen(file_name);
	int j;
	
	for (j = 0; j < i; j++)
		if (file_name[j] == '.')
			break;
	
	strcpy(extension, (file_name + j + 1));
}

