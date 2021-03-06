/* KNKC chapter 8 exercise 7
 * Sundeep Kolli 01-feb-2014
 * Program: ex7.c
 * Purpose: Using the shortcuts in section 8.2, shrink the initializer for
 * the segments array in exercise 6 as much as possible
*/

#include <stdio.h>

int main (void){

	const int segments[10][7] = {{1, 1, 1, 1, 1, 1},
								 {0, 1, 1},
								 {1, 1, 0, 1, 1, 0, 1},
								 {1, 1, 1, 1, 0, 0, 1},
								 {0, 1, 1, 0, 0, 1, 1},
								 {1, 0, 1, 1, 0, 1, 1},
								 {1, 0, 1, 1, 1, 1, 1},
								 {1, 1, 1},
								 {1, 1, 1, 1, 1, 1, 1},
								 {1, 1, 1, 1, 0, 1, 1}};

	return 0;
}
