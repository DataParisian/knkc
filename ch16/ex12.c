/* KNKC chapter 16 exercise 12
 * Sundeep Kolli 09-july-2014
 * Program: ex12.c
 * Purpose: Calculate union size. 
*/


/*
 * Suppose that u is the following union:
 * 		union {
 *			double a;
 *			struct {
 *				char b[4];
 *				double c;
 *				int d;
 *			}e;
 *			char f[4];
 *		} u;
 * If char values occupy one byte, int values occupy four bytes and double 
 * values occupy eight bytes, how much space will a C compiler allocate for 
 * u? (Assume that the compiler leaves no "holes" between members.)
 *
 * Ans) The union's size is the size of its largest member. The member a of 
 * u occupies 8 bytes. The size of struct e is the sum of the size of the 
 * character array b, i.e., 4 bytes, size of the member c, i.e., 8 bytes and 
 * size of the member d, i.e., 4 bytes, in total 16 bytes. The character array 
 * f has a size of 4 bytes. So, in total, if there are no holes between members, 
 * this union would occupy 16 bytes.
 */