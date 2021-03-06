/* KNKC chapter 13 Programming Project 2.
 * Sundeep Kolli 20-apr-2014
 * Program: pp2.c
 * Purpose: Improve the remind.c program of Section 13.5 in the following ways:
 * 		a) Have the program print an error message and ignore a reminder if the
 *		   corresponding day is negative or larger than 31.
 *      b) Allow the user to enter a day, a 24-hour time and a reminder. The 
 *         printed reminder list should be sorted first by day, then by time.
 *      c) Have the program print a one-year remider list. Require the user to 
 *         enter days in the form month/day.
*/

#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50       /* maximum number of reminders */
#define MSG_LEN 60          /* max length of reminder message */

#define HRS 24              /* maximum number of reminders */
#define MINS 60             /* max length of reminder message */


int read_line(char str[], int n);

int main (void){
	
	char reminders[MAX_REMIND][MSG_LEN + 3];
	char month_day_str[12], day_str[3], hr_str[3], min_str[3];
	char msg_str[MSG_LEN + 1];
	int month, day, hr, min, i, j, num_remind = 0;
	
	for (;;){
		if (num_remind == MAX_REMIND){
			printf("-- No space left --\n");
			break;
		}
		
		printf("Enter month/day, 24h time(hh:mm) and the reminder: ");
		scanf("%2d/%2d", &month, &day);
		if (month == 0 || day == 0){
			break;
		}else if (month < 0 || month > 12 || day < 0 || day > 31){
			continue;
		}
		
		scanf("%2d:%2d", &hr, &min);
		if (hr < 0 || hr > 24 || min < 0 || min > 60){
			printf("Incorrect time format");
			continue;
		}
		
		sprintf(month_day_str, "%2d", month);
		sprintf(day_str, "%2d", day);
		sprintf(hr_str, "%2.2d", hr);
		sprintf(min_str, "%2.2d", min);
		
		strcat(month_day_str, "/");
		strcat(month_day_str, day_str);
		strcat(month_day_str, " ");
		strcat(month_day_str, hr_str);
		strcat(month_day_str, ":");
		strcat(month_day_str, min_str);
		
		read_line(msg_str, MSG_LEN);
		
		for (i = 0; i < num_remind; i++){
			if (strcmp(month_day_str, reminders[i]) < 0){
				break;
			}
		}
		for (j = num_remind; j > i; j--){
			strcpy(reminders[j], reminders[j - 1]);
		}
		
		strcpy(reminders[i], month_day_str);
		strcat(reminders[i], msg_str);
		
		num_remind++;		
	}
	
	printf("\nDay Reminder\n");
	for (i = 0; i < num_remind; i++)
		printf(" %s\n", reminders[i]);		
		
	return 0;
}

int read_line(char str[], int n){
	int ch, i = 0;
	
	while ((ch = getchar()) != '\n'){
		if (i < n){
			str[i++] = ch;
		}
	}
	str[i] = '\0';
	return i;
}

