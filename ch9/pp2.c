/* KNKC chapter 9 programming project 2
 * Sundeep Kolli 22-feb-2014
 * Program: pp2.c
 * Purpose: Modify the programming project 5 from chapter 5 so that 
 * it uses a function to compute the amount of income tax. When passed 
 * an amount of taxable income, this function will return the tax due.
*/

#include <stdio.h>

double getTaxDue(double income);

int main(void){
	
	double income = 0.0;
	
	printf ("Enter the amount of income before tax: ");
	scanf ("%lf", &income);
	
	printf ("Tax due: %.2f\n", getTaxDue(income));
	
	return 0;
}

double getTaxDue(double income){
	double tax = 0.0;
	
	if (income <= 750.0){
		tax = income * 0.01;
	}else if (income <= 2250){
		tax = 7.50 + ((income - 750) * 0.02);
	}else if (income <= 3750){
		tax = 37.50 + ((income - 2250) * 0.03);
	}else if (income <= 5250){
		tax = 82.50 + ((income - 3750) * 0.04);
	}else if (income <= 7000){
		tax = 142.50 + ((income - 5250) * 0.05);
	}else{
		tax = 230.00 + ((income - 7000) * 0.06);
	}
	
	return tax;
}

