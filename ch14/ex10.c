/* KNKC chapter 14 exercise 10
 * Sundeep Kolli 17-june-2014
 * Program: ex10.c
 * Purpose: Functions can often - but not always - be written as parametrized 
 * macros. Discuss what characteristics of a function would make it unsuitable 
 * as a macro.
*/

/*
 * Even though macros seem function like, we must be careful when using macros 
 * for the following reasons:
 *
 * 1) Macros do not perform type checking as they are generic.
 * 
 * 2) Macros can evaluate the parameters multiple times whereas a function 
 * evaluates its arguments only once. So, we must be mindful of side-effects.
 *
 * 3) Macros hugely increase the code size. So, when a macro is used multiple 
 * times, the expanded code could become easily bloated. For example, when a 
 * macro is used for a recursive function like purpose, the resulting code 
 * can easily become illegible.
 *
 * 4) Function pointer like concept does not exist in the context of macros 
 * since after the preprocessor phase, all macros are expanded.
 
