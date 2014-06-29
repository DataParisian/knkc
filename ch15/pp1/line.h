#ifndef LINE_H
#define LINE_H

/* KNKC chapter 15 
 * Program: justify
 * Sundeep Kolli 22-june-2014
*/

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
 * write_line: Writes the current line with justification. If moreSpace
 *****************************************************************************/
void write_line(BOOL moreSpaceAtBegin);

/*****************************************************************************
 * flush_line: Writes the current line without justification. If the line is
 *			   empty, does nothing.
 *****************************************************************************/
void flush_line(void);


#endif

