/* KNKC chapter 7 programming project 2
 * Sundeep Kolli 27-dec-2013
 * Program: pp2.c
 * Purpose: Modify the square2.c program of section 6.3 so that it 
 * pauses every 24 squares and won't continue until the user presses 
 * the Enter key. Use getchar for this.
*/

#include <stdio.h>

int main(void){

	int i, n;
	char ch;
	
	printf ("This program prints a table of squares.\n");
	printf ("Enter number of entries in table: ");
	scanf ("%d", &n);
	getchar();
		
	for (i = 1; i <= n; i++){		
		if (i != 1 && ((i-1) % 24) == 0){
			printf ("Press Enter to continue...");	
			while ((ch = getchar()) != 10){
				printf ("Press Enter to continue...");
				getchar();
			}

			printf ("%10d%10d\n", i, i * i);
		}else{
			printf ("%10d%10d\n", i, i * i);
		}
	}

	return 0;
}
