/* KNKC chapter 6 programming project 9
 * Sundeep Kolli 21-dec-2013
 * Program: pp9.c
 * Purpose: program to calculate the remaining balance on a loan 
 * after a number of payments specified by the user
*/

#include <stdio.h>

int main(void){

	float loanAmount, interestRate;
    float monthlyPayment, numberOfPayments;
	float currentLoanAmount, loanBeforePayment, loanAfterPayment; 
	int i;

	printf ("Enter the amount of loan: ");
	scanf ("%f", &loanAmount);
	printf ("Enter the interest rate: ");
	scanf ("%f", &interestRate);	
	printf ("Enter the amount of monthly payment: ");
	scanf ("%f", &monthlyPayment);
	printf ("Enter the number of payments: ");
	scanf ("%f", &numberOfPayments);

	currentLoanAmount = loanAmount;

	for (i = 1; i <= numberOfPayments; i++){
		printf ("\n");
		printf ("Loan amount at the beginning of month %d: %.2f\n",
						i, currentLoanAmount);

		loanBeforePayment = currentLoanAmount * (1 + (interestRate / (12 * 100)));
		printf ("Loan amount before monthly payment ");
		printf ("at the end of month %d: %.2f\n",	i, loanBeforePayment);

		loanAfterPayment = loanBeforePayment - monthlyPayment;
		printf ("Loan amount after monthly payment ");
		printf ("at the end of month %d: %.2f\n",	i, loanAfterPayment);
		
		currentLoanAmount = loanAfterPayment;
		
	}

	return 0;
}
