/* KNKC chapter 16 exercise 19
 * Sundeep Kolli 10-july-2014
 * Program: ex19.c
 * Purpose: Declare a structure with the following members whose tag is 
 * pinball_machine:
 *		name - a string of up to 40 characters
 *		year - an integer(representing the year of manufacture)
 *		type - an enumeration with the values EM (electromechanical) and SS(solid state)
 *		players - an integer (representing the maximum number of players)
*/
 
 #define LEN 40
 
 struct pinball_machine {
	char name[LEN + 1];
	int year;
	enum {EM, SS} type;
	int players;
 };
 