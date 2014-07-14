#ifndef READLINE_H
#define READLINE_H

/* KNKC chapter 16 pp4.c
 * Sundeep Kolli 14-july-2014
 * Program: pp4.c
 * Purpose: Modify the inventory program of section 16.3 by adding a price 
 * member to the part structure. The insert function should ask the user for 
 * the price of the new item. The search and print functions should display the 
 * price. Add a new command that allows the user to change the price of a part.
*/

/***************************************************************************
* read_line: Skips leading white-space characters, then reads the     	   *
*            remainder of the input line and stores it in str. Truncates   *
*            the line if its length exceeds n. Returns the number of       *
*            characters stored.                                            *
****************************************************************************/
int read_line(char str[], int n);

#endif

