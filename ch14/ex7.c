/* KNKC chapter 14 exercise 7
 * Sundeep Kolli 28-may-2014
 * Program: ex7.c
 * Purpose: Examine the GENERIC_MAX macro definition below and 
 * anwser the following questions.
 * #define GENERIC_MAX(type)         \
 * type type##_max(type x, type y)   \
 * {                                 \
 *    return x > y ? x : y;          \
 * }
*/

/* 
 * (a) Show the preprocessor's expansion of GENERIC_MAX(long)
 *  ANS: long long_max(long x, long y)    \
 *       {                                \
 *           return x > y ? x : y;        \
 *       }
*/

#define GENERIC_MAX(type)         \
type type##_max(type x, type y)   \
{                                 \
   return x > y ? x : y;          \
}

GENERIC_MAX(long)

/* 
 * (b) Explain why GENERIC_MAX doesn't work for basic types such as unsigned 
 * long.
 * ANS: When the parameter type has two words, the macro expansion will have 
 * these two words in the expansion. This will generate errors. For example,
 * when the parameter is unsigned long, the macro expansion will be as 
 * follows: 
 * unsigned long unsigned long_max(unsigned long x, unsigned long y)     \
 * {
 *     return x > y ? x : y;
 * }
*/

/* 
 * (c) Describe a technique that would allow us to use GENERIC_MAX with basic 
 * types such as unsigned long. Hint: Don't change the definition of 
 * GENERIC_MAX.
 * ANS: Just use a typedef statement to give a name with one word to mean 
 * types with more than one word and use this new name with the macro. 
 * For example, typedef unsigned long ULONG would work with the above macro 
 * as follows: GENERIC_MAX(ULONG)
*/

typedef unsigned long ULONG;

GENERIC_MAX(ULONG)
