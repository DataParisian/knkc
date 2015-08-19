/* KNKC chapter 17 exercise 10
 * Sundeep Kolli 29-February-2015
 * Program: ex10.c
 * Purpose: Modify the print_part function of Section 16.2 so that its 
 * parameter is a pointer to a part structure. Use the -> operator in your 
 * answer.
*/

struct part{
	int number;
	char name[NAME_LEN + 1];
	int on_hand;
};

struct part *part1;

void print_part(struct part *p){
	printf("Part number: %d\n", p->number);
	printf("Part name: %s\n", p->name);
	printf("Quantity on hand: %d\n", p->on_hand);
}

