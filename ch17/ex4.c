/* KNKC chapter 17 exercise 4
 * Sundeep Kolli 03-August-2014
 * Program: ex4.c
 * Purpose: Suppose that the following declarations are in effect:
 *     struct point { int x, y; };
 *     struct rectangle { struct point upper_left, lower_right; };
 *     struct rectangle *p;
 * Assume that we want p to point to a rectangle stucture whose upper_left 
 * corner is at (10, 25) and whose lower right is at (20, 15). Write a series 
 * of statements that allocate such a structure and initialize it as indicated.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	struct point { int x, y; };
	struct rectangle { struct point upper_left, lower_right; };
	struct rectangle *p;
	
	p = malloc(sizeof(struct rectangle));
	
	p->upper_left.x = 10;
	p->upper_left.y = 25;
	
	p->lower_right.x = 20;
	p->lower_right.y = 15;
	
	if (p == NULL){
		printf("Memory allocation error.\n");
		return 0;
	}
	
	printf("Upper left: (%2d, %2d)\n", p->upper_left.x, p->upper_left.y);
	printf("Lower right: (%2d, %2d)\n", p->lower_right.x, p->lower_right.y);
		
	return 0;
}

