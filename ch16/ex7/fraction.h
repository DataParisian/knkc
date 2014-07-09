#ifndef FRACTION_H
#define FRACTION_H

/* KNKC chapter 16 exercise 7
 * Sundeep Kolli 08-july-2014
 * Program: ex7.c
*/

struct fraction{int numerator, denominator;};

struct fraction reduce_fraction(struct fraction f);

struct fraction add_fractions(struct fraction f1, struct fraction f2);

struct fraction subtract_fractions(struct fraction f1, struct fraction f2);

struct fraction multiply_fractions(struct fraction f1, struct fraction f2);

struct fraction divide_fractions(struct fraction f1, struct fraction f2);

#endif
