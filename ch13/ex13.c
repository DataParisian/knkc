/* KNKC chapter 13 exercise 13
 * Sundeep Kolli 17-apr-2014
 * Program: ex13.c
 * Purpose: Write the following function:
 * 		void build_index_url(const char *domain, char *index_url);
 * domain points to a string containing an internet domain, such as 
 * "knking.com". The function should add "http://www." to the beginning of this 
 * string and "/index.html" to the end of the string, storing the result in the 
 * string pointed to by index_url. You may assume that index_url ponits to a 
 * variable that is long enough to hold the resulting string. Keep the function 
 * as simple as possible by using the strcat and strcpy functions.
*/

/*UNSAFE UNSAFE UNSAFE*/
/*UNSAFE UNSAFE UNSAFE*/
/*UNSAFE UNSAFE UNSAFE*/
/*UNSAFE UNSAFE UNSAFE*/
/*UNSAFE UNSAFE UNSAFE*/
/*UNSAFE UNSAFE UNSAFE*/

#include <stdio.h>
#include <string.h>

void build_index_url(const char *domain, char *index_url);

#define N 100

int main(void){
	char dom[N + 1], indexUrl[N + 1] = "";
	
	printf("Enter a domain name: ");
	gets(dom);
	
	build_index_url(dom, indexUrl);
	
	printf("URL: %s \n", indexUrl);
				
	return 0;
}

void build_index_url(const char *domain, char *index_url){	
	
	strcpy(index_url, "http://www.");
	strcat(index_url, domain);
	strcat(index_url, "/index.html");	
}

