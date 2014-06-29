# KNKC chapter 15 exercise 6
# Sundeep Kolli 24-june-2014
# Program: ex6.c
# Purpose: Answer the following questions referring to the program described 
# in ex5.c.

/*
	a) Which files need to be compiled when the program is built for the 
	first time?
	Ans: All source files need to be compiled the first time.
	
	b) If f1.c is changed after the program has been built, which files need 
	to be recompiled?
	Ans: Assuming f1.h is not impacted, f1.o needs to be rebuilt by 
	recompiling f1.c. Next demo program needs to be rebuilt by linking the 
	new f1.o with main.o and f2.o
	
	c) If f1.h is changed after the program has been built, which files need 
	to be recompiled?
	Ans: main.o, f1.o and f2.o need to be rebuilt by recompiling the 
	corresponding source files. Next demo program needs to be rebuilt by 
	linking the new object files.
	
	d) If f2.h is changed after the program has been built, which files need 
	to be recompiled?
	Ans: f1.o and f2.o need to be rebuilt by recompiling the 
	corresponding source files. Next demo program needs to be rebuilt by 
	linking the new object files f1.o and f2.o.
*/
