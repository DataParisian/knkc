/* KNKC chapter 16 exercise 14
 * Sundeep Kolli 09-july-2014
 * Program: ex14.c
 * Purpose: Let shape be the structure tag declared in ex13. Write functions 
 * that perform the following operations on a shape structure s passed as an  
 * arguent: 
*/
 
/*
 * a) Compute the area of s.
*/
long area(struct shape s){
	long area;
	
	if (s.shape_kind == RECTANGLE){
		area = s.u.rectangle.height * s.u.rectangle.width;
	}else{
		area = s.u.circle.radius * s.u.circle.radius;
	}
	
	return area;
}

/*
 * b) Move s by x units in the x direction and y units in the y direction, 
 * returning the modified version of s. (x and y are additional arguments 
 * to the function.)
*/
struct shape moved_shape(struct shape s, int x, int y){	
	
	s.center.x += x;
	s.center.y += y;
	
	return s;
}

/*
 * c) Scale s by a factor c (a double value), returning the modified version. 
 * (c is an additional argument to the function.)
*/
struct shape scale_shape(struct shape s, double c){

	if (s.shape_kind == RECTANGLE){
		s.u.rectangle.height *= c;
		s.u.rectangle.width *= c;
	}else{
		s.u.circle.radius *= c;
	}
	
	return s;
}
