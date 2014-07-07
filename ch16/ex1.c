/* KNKC chapter 16 exercise 1
 * Sundeep Kolli 07-july-2014
 * Program: ex1.c
 * Purpose: Check whether the following declarations are legal on an 
 * individual basis:
 * 		struct {int x, y} x;
 * 		struct {int x, y} y;
 * Could both declarations appear as shown in a program? Justify your answer.
*/

/*
 * Ans: Yes, the declarations are legal. Each statement would declare a 
 * structure with two integer members x and y. Yes, both declarations could 
 * appear as shown in a program. There would be no conflict due to the 
 * similarity of the member names since each structure has a separate 
 * namespace.
*/
