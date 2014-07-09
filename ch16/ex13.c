/* KNKC chapter 16 exercise 13
 * Sundeep Kolli 09-july-2014
 * Program: ex13.c
 * Purpose: Suppose that s is the following structure (point is a structure 
 * tag declared in ex10):
 * 		struct shape {
 *			int shape_kind;				/* RECTANGLE or CIRCLE */
/*			struct point center;        /* coordinates of center */
/*			union{
 *				struct {
 *					int height, width;
 *				} rectangle;
 *				struct {
 *					int radius;
 *				} circle;
 *			} u;
 *		} s;
 * If the value of shape_kind is RECTANGLE, the height and width members 
 * store the dimensions of the dimensions of a rectangle. If the value of 
 * shape_kind is CIRCLE, the radius member stores the radius of a circle. 
 * Indicate which of the following statements are legal and show how to 
 * repair the ones that aren't: 
*/
 
/*
 * a) s.shape_kind = RECTANGLE;
 * Ans) Legal if RECTANGLE is a macro expanding into an integer value or 
 * a enumerated variable.
*/

/* b) s.center.x = 10;
 * Ans) Legal
*/

/* c) s.height = 25;
 * Ans) Ilegal since s has no member called height. The correct statement is 
 * 		s.u.rectangle.height = 25;
*/

/* d) s.u.rectangle.width = 8;
 * Ans) Legal
*/

/* e) s.u.circle = 5;
 * Ans) Illegal since the u member of s is a structure and not of integer 
 * type. The correct statement is 
 * 		s.u.circle.radius = 5;
*/

/* f) s.u.radius = 5;
 * Ans) Illegal since the u member of s has no member called radius. The 
 * correct statement is 
 * 		s.u.circle.radius = 5;
*/
