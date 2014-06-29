/* KNKC chapter 14 exercise 15
 * Sundeep Kolli 17-june-2014
 * Program: ex15.c
 * Purpose: Suppose that a program needs to displays messages in either English, 
 * French or Spanish. Using conditional compilation, write a program fragment 
 * that displays one of the following three messages, depending on whether or 
 * not the specified macro is defined.
 * 	Insert Disk 1           (if ENGLISH is specified)
 *  Inserez Le Disque 1     (if FRENCH is specified)
 *  Inserte El Disco 1      (if SPANISH is specified) 
*/

#define SPANISH

#if defined(ENGLISH)
	printf("Insert Disk 1\n");
#elif defined(FRENCH)
	printf("Inserez Le Disque 1\n");
#else
	printf("Inserte El Disco 1\n");
#endif
