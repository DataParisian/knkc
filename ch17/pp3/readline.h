#ifndef READLINE_H
#define READLINE_H

/* KNKC chapter 17 pp3.c
 * Sundeep Kolli 25-August-2015
 * Program: pp3.c
 * Purpose: Maintains a parts database (linked list version).
*/

/***************************************************************************
* read_line: Skips leading white-space characters, then reads the     	   *
*            remainder of the input line and stores it in str. Truncates   *
*            the line if its length exceeds n. Returns the number of       *
*            characters stored.                                            *
****************************************************************************/
int read_line(char str[], int n);

#endif

