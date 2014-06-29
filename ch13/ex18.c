/* KNKC chapter 13 exercise 18
 * Sundeep Kolli 19-apr-2014
 * Program: ex18.c
 * Purpose: Write the following function:
 * 		void remove_filename(char *url);
 * url points to a string containing a URL(Uniform Resource Locator) that ends  
 * with a file name(such as "http://www.knking.com/index.html"). The function 
 * should modify the string by removing the file name and the preceding slash. 
 * (In this example, the result will be "http://www.knking.com"). Incorporate 
 * the "search for the end of a string" idiom into your function.
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

void remove_filename(char *url);

#define N 100

int main(void){
	char urlInput[N + 1] = "";
	
	printf("Enter a url with less than %d characters: ", N);
	gets(urlInput);
	
	remove_filename(urlInput);
	
	printf("URL: %s\n", urlInput);
		
	return 0;
}

void remove_filename(char *url){

	char *p;	
	int count = 0;	
		
	for (p = url; *p; p++){
		if (*p == '/'){			
			if (count >= 2){
				*p = '\0';
				break;				
			}else{
				count++;
			}
		}
	}
	
}

