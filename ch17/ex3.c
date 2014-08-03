/* KNKC chapter 17 exercise 3
 * Sundeep Kolli 03-August-2014
 * Program: ex3.c
 * Purpose: Write the following function:
 *     int *create_array(int n, int initial_value);
 * The function should return a pointer to a dynamically allocated int array 
 * with n members, each of which is initialized to initial_value. The return  
 * value should be NULL if the array can't be allocated.
*/

#include <stdio.h>
#include <stdlib.h>

#define LEN 100

int *create_array(int n, int initial_value);

int main(void){
	
	int i, size, init_val;
	int *p;
		
	printf("Enter array size: ");
	scanf("%d", &size);
	
	printf("Enter initial value: ");
	scanf("%d", &init_val);
		
	p = create_array(size, init_val);
	
	if (p == NULL){
		printf("Memory allocation error.\n");
	}else{
		for (i = 0; i < size; i++)
			printf("%2d\n", p[i]);
	}
	
	return 0;
}

int *create_array(int n, int initial_value){
	
	int i, *p;
	
	p = malloc(n * sizeof(int));
	
	if (p == NULL){
		return p;
	}else{
		for (i = 0; i < n; i++)
			p[i] = initial_value;
	}
	return p;
}
