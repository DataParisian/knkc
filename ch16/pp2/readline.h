#ifndef READLINE_H
#define READLINE_H

/* KNKC chapter 16 Programming Project 2
 * Sundeep Kolli 13-july-2014
 * Program: pp2.c
 * Purpose: Modify the inventory.c program of section 16.3 so that p(print) 
 * operation displays the parts sorted by part number.
*/

/***************************************************************************
* read_line: Skips leading white-space characters, then reads the     	   *
*            remainder of the input line and stores it in str. Truncates   *
*            the line if its length exceeds n. Returns the number of       *
*            characters stored.                                            *
****************************************************************************/
int read_line(char str[], int n);

#endif

