/* KNKC chapter 17 Programming Project 1
 * Sundeep Kolli 15-August-2015
 * Program: inventory.c (dynamically allocated array version)
 * Purpose: Modify the inventory.c program of Section 16.3 so that the 
 *          inventory array is allocated dynamically and later reallocated when
 *          it fills up. Use malloc intially to allocate memory for 10 part 
 *          structures. When the array has no more room for new parts, use 
 *          realloc to double its size. Repeat the doubling step each time the 
 *          array becomes full. 
*/

#include <stdio.h>
#include <stdlib.h>
#include "readline.h"

#define NAME_LEN 25
#define INIT_SIZE 10
#define SIZE_MULTIPLIER 2

struct part{
	int number;
	char name[NAME_LEN + 1];
	int on_hand;
} *inventory;

int max_parts = 0;     		  /* number of parts currently allocated */
int num_parts = 0;            /* number of parts currently stored */

int find_part(int number);
void insert(void);
void search(void);
void update(void);
void print(void);

/***************************************************************************
* main: Prompts the user to enter an operation code, then calls a          *
*		function to perform the requested action. Repeats until the user   *
*       command 'q'. Prints an error message if the user enters an         *
*		illegal code.													   *
****************************************************************************/
int main(void){
	char code;
	
	for (;;){
		printf("Enter operation code: ");
		scanf(" %c", &code);
		while (getchar() != '\n')      /* skips to the end of the line */
			;
		switch (code){
			case 'i': insert();
					  break;
			case 's': search();
					  break;
			case 'u': update();
					  break;
			case 'p': print();
					  break;
			case 'q': free(inventory); return 0;
			default: printf("Illegal code\n");
		}
		printf("\n");
	}
}

/***************************************************************************
* find_part: Looks up a part number in the inventory array. Returns the    *
*		     array index if the part number is found; otherwise            *
*		    returns -1.                              					   *
****************************************************************************/
int find_part(int number){
	int i;
	
	for (i = 0; i < num_parts; i++)
		if (inventory[i].number == number)
			return i;

	return -1;	
}

/***************************************************************************
* insert:  Prompts the user for information about a new part and then      *
*		   inserts the part into the database. Prints an error message     *
*		   and returns prematurely if the part already exists or the 	   *
*		   database is full.                                         	   *
****************************************************************************/
void insert(void){
	int part_number;	
	
	
	if (max_parts == 0){		
		
		inventory = malloc(INIT_SIZE * sizeof(struct part));
		
		if (inventory == NULL){
			printf("Memory allocation failure initially in insert function.\n");
			exit(EXIT_FAILURE);
		}
		
		max_parts += INIT_SIZE;
		
	}else if (num_parts == max_parts){
		
		inventory = realloc(inventory, 
							SIZE_MULTIPLIER * max_parts * sizeof(struct part));
									
		if (inventory == NULL){
			printf("Memory re-allocation failure  in insert function.\n");
			return;
		}
		
		max_parts *= SIZE_MULTIPLIER;

	}
	
	printf("Enter part number: ");
	scanf("%d", &part_number);
	
	if (find_part(part_number) >= 0){
		printf("Part already exists.\n");
		return;
	}
	
	inventory[num_parts].number = part_number;
	printf("Enter part name: ");
	read_line(inventory[num_parts].name, NAME_LEN);
	printf("Enter quantity on hand: ");
	scanf("%d", &inventory[num_parts].on_hand);
	num_parts++;
}

/***************************************************************************
* search:  Prompts the user to enter a part number, then looks up the      *
*		   part in the database. If the part exists, prints the name       *
*		   and qantity on hand; if not, prints an error message.    	   *
****************************************************************************/
void search(void){
	int i, number;
		
	printf("Enter part number: ");
	scanf("%d", &number);
	
	i = find_part(number);
	if (i >= 0){
		printf("Part name: %s\n", inventory[i].name);
		printf("Quantity on hand: %d\n", inventory[i].on_hand);
	}else{
		printf("Part not found.\n");
	}
}


/***************************************************************************
* update: Prompts the user to enter a part number. Prints an error         *
*		  message if the part doesn't exist; otherwise, prompts the user   *
*		  to enter change in qantity on hand and updates the database. 	   *
****************************************************************************/
void update(void){
	int i, number, change;
		
	printf("Enter part number: ");
	scanf("%d", &number);	
	i = find_part(number);
	
	if (i >= 0){		
		printf("Enter change in quantity on hand: ");
		scanf("%d", &change);
		inventory[i].on_hand += change;
	}else{
		printf("Part not found.\n");
	}
}

/***************************************************************************
* Print: Prints a listing of all parts in the database, showing the part   *
*		 number, part name, and quantity on hand. Parts are printed in     *
*		 the order in which they were entered into the database.     	   *
****************************************************************************/
void print(void){
	int i;
		
	printf("Part number		Part Name			Quantity on Hand\n");
	
	for (i = 0; i < num_parts; i++)
		printf("%7d			%-25s%11d\n", inventory[i].number,
			   inventory[i].name, inventory[i].on_hand);
}

