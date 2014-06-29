#ifndef WORD_H
#define WORD_H

/* KNKC chapter 15 
 * Program: justify
 * Sundeep Kolli 22-june-2014
*/

/*****************************************************************************
 * read_word: Reads the next word from the input and stores it in word. Makes 
 *            word empty if no word could be read because of end-of-file.
 *            Truncates the word if its length exceeds len. Returns the number
 * 			  of characters stored.
 *****************************************************************************/

int read_word(char *word, int len);

#endif

