/* KNKC chapter 16 exercise 11
 * Sundeep Kolli 09-july-2014
 * Program: ex11.c
 * Purpose: Calculate structure size;
 * 
*/


/*
 * Suppose that s is the following structure:
 * 		struct {
 *			double a;
 *			union {
 *				char b[4];
 *				double c;
 *				int d;
 *			}e;
 *			char f[4];
 *		} s;
 * If char values occupy one byte, int values occupy four bytes and double 
 * values occupy eight bytes, how much space will a C compiler allocate for 
 * s? (Assume that the compiler leaves no "holes" between members.)
 *
 * Ans) The member a of s occupies 8 bytes. The union's size is the size of 
 * its largest member. So the size of the union e is 8 bytes. The character 
 * array occupies 4 bytes. In total, if there are no holes between members, 
 * this structure would occupy 20 bytes.
 */