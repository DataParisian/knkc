#ifndef QUICKSORT_H
#define QUICKSORT_H


/* KNKC chapter 15 Programming Project 3
 * Sundeep Kolli 29-June-2014
 * Program: pp3.c 
*/


/*****************************************************************************
 * quicksort: Recursive quicksort function to sort an array. Calls the split 
 *			 function to find the middle value of the array. The function then
 *           recursively calls itself on the lower and upper halves of the 
 *      	 original array.
 *****************************************************************************/
void quicksort (int a[], int low, int high);

/*****************************************************************************
 * split:    Returns the middle value of the array. 
 *****************************************************************************/
int split (int a[], int low, int high);

#endif

