/* KNKC chapter 17 exercise 19
 * Sundeep Kolli 15-March-2015
 * Program: ex19.c
 * Purpose: Write a function that, when given a string as its argument, 
 * searches the following array of structures for a matching command name, then
 * calls the function associated with that name.
 *      struct {
 *      	char *cmd_name;
 *			void (*cmd_pointer)(void); 
 *      } file_cmd[] = 
 *		  {{"new", 			new_cmd},
 *		   {"open", 	    open_cmd},
 *		   {"close", 		close_cmd},
 *		   {"close_all",	close_all_cmd},
 *		   {"save", 		save_cmd},
 *		   {"save_as", 		save_as_cmd},
 *		   {"save_all", 	save_all_cmd},
 *		   {"print", 		print_cmd},
 *		   {"exit", 		exit_cmd},
 *		  };
*/

#include <stdio.h>
#include <string.h>

int run_cmd(char cmd[]);

void new_cmd(void);
void open_cmd(void);
void close_cmd(void);
void close_all_cmd(void);
void save_cmd(void);
void save_as_cmd(void);
void save_all_cmd(void);
void print_cmd(void);
void exit_cmd(void);

int main(void){
	
	char cmd[] = "";
	
	printf ("Enter the cmd to run: ");
	scanf ("%s", cmd);
	
	run_cmd(cmd);
	
	return 0;
}


int run_cmd(char cmd[]){

	  int i;
	  			
      struct {
      	char *cmd_name;
		void (*cmd_pointer)(void); 
      } file_cmd[] = 
		  {{"new", 			new_cmd},
		   {"open", 	    open_cmd},
		   {"close", 		close_cmd},
		   {"close_all",	close_all_cmd},
		   {"save", 		save_cmd},
		   {"save_as", 		save_as_cmd},
		   {"save_all", 	save_all_cmd},
		   {"print", 		print_cmd},
		   {"exit", 		exit_cmd},
		  };
	
	for (i = 0; i < 9; i++){
		
		if (strcmp(cmd, file_cmd[i].cmd_name) == 0){

			(*file_cmd[i].cmd_pointer)();
		}
	}
		  
	return 0;
}

void new_cmd(void){
	printf ("new_cmd\n");
}

void open_cmd(void){
	printf ("open_cmd\n");
}

void close_cmd(void){
	printf ("close_cmd\n");
}

void close_all_cmd(void){
	printf ("close_all_cmd\n");
}

void save_cmd(void){
	printf ("save_cmd\n");
}

void save_as_cmd(void){
	printf ("save_as_cmd\n");
}

void save_all_cmd(void){
	printf ("save_all_cmd\n");
}

void print_cmd(void){
	printf ("print_cmd\n");
}

void exit_cmd(void){
	printf ("exit_cmd\n");
}
