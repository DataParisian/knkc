/* KNKC chapter 16 pp3.c
 * Sundeep Kolli 13-july-2014
 * Program: pp3.c
 * Purpose: Modify the inventory.c program of section 16.3 by making inventory 
 * and num_parts local to the main function.
*/

#include <stdio.h>
#include "readline.h"

#define NAME_LEN 25
#define MAX_PARTS 100

struct part{
		int number;
		char name[NAME_LEN + 1];
		int on_hand;
	   };

int find_part(int number, const int *num_parts, const struct part inventory[]);
void insert(int *num_parts, struct part inventory[]);
void search(int *num_parts, struct part inventory[]);
void update(int *num_parts, struct part inventory[]);
void print(int *num_parts, struct part inventory[]);


/***************************************************************************
* main: Prompts the user to enter an operation code, then calls a          *
*		function to perform the requested action. Repeats until the user   *
*       command 'q'. Prints an error message if the user enters an         *
*		illegal code.													   *
****************************************************************************/
int main(void){
	char code;
		
	struct part inventory[MAX_PARTS];

	int num_parts = 0;     /* number of parts currently stored */
	
	for (;;){
		printf("Enter operation code: ");
		scanf(" %c", &code);
		while (getchar() != '\n')      /* skips to the end of the line */
			;
		switch (code){
			case 'i': insert(&num_parts, inventory);
					  break;
			case 's': search(&num_parts, inventory);
					  break;
			case 'u': update(&num_parts, inventory);
					  break;
			case 'p': print(&num_parts, inventory);
					  break;
			case 'q': return 0;
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
int find_part(int number, const int *num_parts, 
						const struct part inventory[]){
	int i;
		
	for (i = 0; i < *num_parts; i++)
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
void insert(int *num_parts, struct part inventory[]){
	int part_number;
		
	if (*num_parts == MAX_PARTS){
		printf("Database is full; can't add more parts.\n");
		return;
	}
	
	printf("Enter part number: ");
	scanf("%d", &part_number);
	
	if (find_part(part_number, num_parts, inventory) >= 0){
		printf("Part already exists.\n");
		return;
	}
	
	inventory[*num_parts].number = part_number;
	printf("Enter part name: ");
	read_line(inventory[*num_parts].name, NAME_LEN);
	printf("Enter quantity on hand: ");
	scanf("%d", &inventory[*num_parts].on_hand);
	(*num_parts)++;
	
}

/***************************************************************************
* search:  Prompts the user to enter a part number, then looks up the      *
*		   part in the database. If the part exists, prints the name       *
*		   and qantity on hand; if not, prints an error message.    	   *
****************************************************************************/
void search(int *num_parts, struct part inventory[]){
	int i, number;
		
	printf("Enter part number: ");
	scanf("%d", &number);
	
	i = find_part(number, num_parts, inventory);
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
void update(int *num_parts, struct part inventory[]){
	int i, number, change;
		
	printf("Enter part number: ");
	scanf("%d", &number);	
	i = find_part(number, num_parts, inventory);
	
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
void print(int *num_parts, struct part inventory[]){
	int i;
		
	printf("Part number		Part Name			Quantity on Hand\n");
	
	for (i = 0; i < *num_parts; i++)
		printf("%7d			%-25s%11d\n", inventory[i].number,
			   inventory[i].name, inventory[i].on_hand);
}

