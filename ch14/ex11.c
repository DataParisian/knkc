/* KNKC chapter 14 exercise 10
 * Sundeep Kolli 17-june-2014
 * Program: ex11.c
 * Purpose: Write a macro named ERROR that generates the call of fprintf 
 * shown below when given a format string and the items to be displayed:
 *    fprintf(stderr, "Range error: index = %d\n", index);
 *  ERROR("Range error: index = %d\n", index);
*/

#define ERROR(s, i) (fprintf(stderr, s , i))
 
 ERROR("Range error: index = %d\n", index);
 
