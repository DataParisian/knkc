/* KNKC chapter programming project 6
 * Sundeep Kolli 21-dec-2013
 * Program: pp6.c
 * Purpose: asks the user to enter an integer n, then
 * prints all even squares between 1 and n
*/

#include <stdio.h>

int main (void)
{
	int i, inputNumber;
	
	printf ("Enter a number: ");
	scanf ("%d", &inputNumber);
	
	i = 1;
	while ((i * i) <= inputNumber){
		if ((i * i) % 2 == 0)
			printf ("%d\n", i * i);
		i++;	
    }
	
	return 0;
}
