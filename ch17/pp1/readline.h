#ifndef READLINE_H
#define READLINE_H

/* KNKC chapter 17 Programming Project 1
 * Sundeep Kolli 15-August-2014
 * Program: inventory.c (dynamically allocated array version)
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

