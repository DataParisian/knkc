#ifndef LINE_H
#define LINE_H

/* KNKC chapter 17 Programming Project 4 
 * Sundeep Kolli 17-august-2015
 * Program: pp4.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*****************************************************************************
 * MAX_WORD_LEN: Maximum number of characters in each word read.
 *****************************************************************************/
#define MAX_WORD_LEN 20

/*****************************************************************************
 * MAX_LINE_LEN: Maximum number of characters in each line read.
 *****************************************************************************/
#define MAX_LINE_LEN 60

/*****************************************************************************
 * clear_line: Clears the current line.
 *****************************************************************************/
void clear_line(void);

/*****************************************************************************
 * add_word: Adds word to the end of the current line. If this is not the 
 * 			 first word on the line, puts one space before the word.
 *****************************************************************************/
void add_word(const char *word);

/*****************************************************************************
 * space_remaining: Returns the number of characters left in the current line.
 *****************************************************************************/
int space_remaining(void);

/*****************************************************************************
 * write_line: Writes the current line with justification.
 *****************************************************************************/
void write_line(void);

/*****************************************************************************
 * flush_line: Writes the current line without justification. If the line is
 *			   empty, does nothing.
 *****************************************************************************/
void flush_line(void);


#endif

