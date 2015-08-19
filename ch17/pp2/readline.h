#ifndef READLINE_H
#define READLINE_H

/* KNKC chapter 16 inventory.c
 * Sundeep Kolli 05-july-2014
 * Program: inventory.c
 * Purpose: Maintains a parts database (arrays version).
*/

/***************************************************************************
* read_line: Skips leading white-space characters, then reads the     	   *
*            remainder of the input line and stores it in str. Truncates   *
*            the line if its length exceeds n. Returns the number of       *
*            characters stored.                                            *
****************************************************************************/
int read_line(char str[], int n);

#endif

