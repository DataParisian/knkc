/* KNKC chapter 16 exercise 10
 * Sundeep Kolli 09-july-2014
 * Program: ex10.c
 * Purpose: The following structures store information about objects on a 
 * graphics screen:
 *		struct point {int x, y};
 *		struct rectangle {struct point upper_left, lower_right;};
 * A point structure stores the x and y coordinates of a point on the screen. 
 * A rectangle structure stores the coordinates of the upper left and lower 
 * right corners of a rectangle. Write functions that perform the following 
 * operations on a rectangle structure r passed as an argument: 
*/


/*
 * a) Compute the area of r.
 */
 long area_of_rectangle(struct rectangle r){
	
	int height, width;
	long area;
	
	height = r.lower_right.x - r.upper_left.x;
	width = r.upper_left.y - r.lower_right.y;
	
	area = height * width;
	
	return area;
 }
 
/*
 * b) Compute the center of r, returning it as a point value. If either the x 
 * or y coordinate of the center isn't an integer, store its truncated value 
 * in the point structure.
*/
 struct point center_of_rectangle(struct rectangle r){
	
	struct point center;
	int height, width;	
	
	height = r.lower_right.x - r.upper_left.x;
	width = r.upper_left.y - r.lower_right.y;
	
	center.x = r.upper_left.x + (width/2);
	center.y = r.lower_right.y + (height/2);
	
	return center;
 }

 /*
 * c) Move r by x units in the x direction and y units in the y direction, 
 * returning the modified version of r. (x and y are additional arguments to 
 * the function).
*/
 struct rectangle move_rectangle(struct rectangle r, int x, int y){
	
	r.upper_left.x = r.upper_left.x + x;
	r.lower_right.x = r.lower_right.x + x;
	
	r.upper_left.y = r.upper_left.y + y;
	r.lower_right.y = r.lower_right.y + y;
		
	return r;
 }
 
  /*
 * d) Determine whether a point p lies within r, returning true of false. 
 * (p is an additional argument of type struct point).
*/
 bool is_in_rectangle(struct rectangle r, struct point p){
	
	if (p.x > r.upper_left.x && p.x < r.lower_right.x 
			&& p.y > r.lower_right.y && p.y < r.upper_left.y)
		return true;
		
	return false;
 }
 