/* KNKC chapter 7 programming project 12
 * Sundeep Kolli 30-dec-2013
 * Program: pp12.c
 * Purpose: program to evaluate an expression with floating-point numbers
 * and operators +, -, *, /. No operator has higher precedence than other.
*/

#include <stdio.h>

int main(void){

	typedef int bool;	
	
	char c, currentOperator;
	bool isParsing = 0, isPrevCharOperator = 0, inFloat = 0;
	int i = 0, j, charCount;
	long placeHolder;
	float previousOperand = 0.0f, currentOperand = 0.0f, result = 0.0f;
	
	printf ("Enter an expression: ");

	while ((c = getchar()) != '\n'){

		if (!isParsing){

			if (c == '*' || c == '/'){
				printf ("Error: Expression can't begin with '*' or '/'.\n");
				return 0;

			}else{

  				 isParsing = 1;
				 previousOperand = 0.0f;
                 charCount++;

				 if (c == '+' || c == '-'){
					inFloat = 0;					
					isPrevCharOperator = 1;
					currentOperand = 0.0f;
					currentOperator = c;
				}else if (c == '.'){
					inFloat = 1;
					currentOperand = 0.0f;	
					currentOperator = '+';
					i++;			
				}else if (c >= '0' && c <= '9'){
					inFloat = 0;
					isPrevCharOperator = 0;
					currentOperand = (float)(c - '0');
					currentOperator = '+';
					i++;
				}		

			}
						
		}else{
			
			if (isPrevCharOperator){

				if (c == '+' || c == '-' || c == '*' || c == '/'){
					printf ("Error: Expression can't contain ");
					printf ("adjacent operators.\n");
					return 0;
				}else if (c == '.'){
					inFloat = 1;
					isPrevCharOperator = 0;
					currentOperand = 0.0f;
					i++;			
				}else if (c >= '0' && c <= '9'){
					if (!inFloat){
						inFloat = 0;
					}
					isPrevCharOperator = 0;
					currentOperand = (float)(c - '0');					
					i++;
				}

			}else{				

				if (c == '+' || c == '/' || c == '*' || c == '/'){
					inFloat = 0;
					currentOperator = c;
					isPrevCharOperator = 1;
					currentOperand = 0;
					i = 0;
				}else if (c == '.'){
					inFloat = 1;
					currentOperator = '+';
					currentOperand = 0;
					i++;				
				}else if (c >= '0' && c <= '9'){
					if (!inFloat){
						inFloat = 0;
					}
					currentOperand = (float)(c - '0');
					i++;
				}	

			}

		}

		if (isPrevCharOperator){

			for (j = 0; j < i; j++){
				placeHolder *= 10;
			}
			placeHolder /= 10;

		}



		switch (currentOperator){
			case ('+'): result = previousOperand + currentOperand; break;
			case ('-'): result = previousOperand - currentOperand; break;
			case ('*'): result = previousOperand * currentOperand; break;
			case ('/'): result = previousOperand / currentOperand; break;
		}
		
		if (charCount == 1 && (isPrevCharOperator || c == '.')){
			printf ("Error: Expression contains no or ambiguous operands.\n");
		}else{
			printf ("isParsing: %d\n", isParsing);
			printf ("inFloat: %d\n", inFloat);
			printf ("Is previvous char ooperator: %d\n", isPrevCharOperator);
			printf ("Previous operand: %f\n", previousOperand);
			printf ("Current operand: %f\n", currentOperand);
			printf ("Current operator: %c\n", currentOperator);
			printf ("Result: %f\n", result);
		}
				
	}	

	return 0;
}
