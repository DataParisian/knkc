/* KNKC chapter 17 Programming Project 7
 * Sundeep Kolli 19-August-2015
 * Program: pp7.c
 * Purpose: (C99) Modify the remind2.c program of Section 17.2 so that each 
 *			element of the reminders arrays is a pointer to a vstring structure
 *			shown in Section 17.9 rather than a pointer to an ordinary string.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_REMIND 50          		/*  maximum number of reminders     */
#define MSG_LEN 60                  /*  max length of reminder message  */

int read_line(char str[], int n);

struct vstring{
	int n;
	char msg[];
};

int main(void){
	
	//char *reminders[MAX_REMIND];
	struct vstring *reminders[MAX_REMIND];	
	char day_str[3], msg_str[MSG_LEN+1];
	
	int day, i, j, num_remind = 0;
	
	for (i = 0; i < MAX_REMIND; i++){
			reminders[i] = malloc(sizeof(struct vstring) + (2 + MSG_LEN + 1));
			if (reminders[i] == NULL){
				printf("Memory allocation failure\n");
				exit(EXIT_FAILURE);
			}
	}
	
	for(;;){
		if (num_remind == MAX_REMIND){
			printf("-- No space left --\n");
			break;
		}			
		
		printf("Enter day and reminder: ");
		scanf("%2d", &day);
		if (day == 0)
			break;
		sprintf(day_str, "%2d", day);
		read_line(msg_str, MSG_LEN);
		
		
		for (i = 0; i < num_remind; i++){			
			if (strcmp(day_str, reminders[i]->msg) < 0){				
				break;
			}
		}	
		
		//printf("New data to be inserted at %d\n", i);
		
		for (j = num_remind; j > i; j--){
			//printf("Copying data to index%d from index%d\n", j, j-1);
			strcpy(reminders[j]->msg, reminders[j - 1]->msg);
		}		
		
		strcpy(reminders[i]->msg, day_str);
		strcat(reminders[i]->msg, msg_str);
				
		num_remind++;
		
	}
	
	printf("\nDay Reminder\n");
	for (i = 0; i < num_remind; i++){
		//printf("i: %d num_remind: %d\n", i, num_remind);
		printf(" %s\n", reminders[i]->msg);
	}
	
	return 0;
}

int read_line(char str[], int n){
	
	int ch, i = 0;
	
	while ((ch = getchar()) != '\n' && ch!= EOF)
		if (i < n)
			str[i++] = ch;
	
	str[i] = '\0';
	return i;
}
