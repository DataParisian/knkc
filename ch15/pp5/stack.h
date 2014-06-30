#ifndef STACK_H
#define STACK_H

/* KNKC chapter 15 Programming Project 5
 * Sundeep Kolli 30-june-2014
 * Program: pp5.c
*/

/* external variables */
extern int contents[];
extern int top;

/* prototypes */
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int c);
int pop(void);

#endif
