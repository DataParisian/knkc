/* KNKC chapter 7 programming project 12
 * Sundeep Kolli 26-01-2014
 * Program: pp12.c
 * Purpose: program to evaluate an expression with floating-point numbers
 * and operators +, -, *, /. No operator has higher precedence than other.
*/

#include <stdio.h>

int main(void){

	typedef int bool;	
	
	char c, currOperator;
	bool inNumber = 0, inFloat = 0;
	int i, decimalCount = 0;
	float currMantissa = 0.0f, currExponent = 0.0f, tempExponent = 1.0f;
	float prevOperand = 0.0f, currOperand = 0.0f, result = 0.0f;
	
	printf ("Enter an expression: ");

	while ((c = getchar()) != '\n'){		
		
			if (c == '.'){	
				currOperand = currMantissa;
				inNumber = 1;
				inFloat = 1;
				
			}else if (c == '+' || c == '-' || c == '/' || c == '*'){

				prevOperand = result;
				inNumber = 0;
				inFloat = 0;
				decimalCount = 0;
				currMantissa = currExponent = 0.0f;
				tempExponent = 1.0f;								
				currOperator = c;
				
			}else{				
				
				inNumber = 1;
				
				if (inNumber && inFloat){
					decimalCount++;
					
					for (i = 0; i < decimalCount; i++){
						tempExponent /= 10.0f;	
					}

					currOperand += (tempExponent * ((float)(c - '0')));
					tempExponent = 1.0f;
				}else{
				
					currMantissa = (currMantissa * 10) + (float) (c - '0');
					currOperand = currMantissa;
				}				
			}		

		switch (currOperator){
			case ('+'): result = prevOperand + currOperand; break;
			case ('-'): result = prevOperand - currOperand; break;
			case ('/'): result = prevOperand / currOperand; break;
			case ('*'): result = prevOperand * currOperand; break;
			default: result = prevOperand + currOperand; break;
		}
		
	}
	
	printf ("Value of expression: %0.2f\n", result);		

	return 0;
}		
