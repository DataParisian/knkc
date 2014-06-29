/* KNKC chapter 5 programming project 3
 * Sundeep Kolli 16-dec-2013
 * Program: pp3.c
 * Purpose: calculates a broker's commission
*/

#include <stdio.h>

int main (void)
{
	float shareCount, sharePrice;
	float value, commission, rivalCommission;
		
	printf ("Enter number of shares: ");
	scanf ("%f", &shareCount);
	printf ("Enter price of each share: ");
	scanf ("%f", &sharePrice);

	value = shareCount * sharePrice;

	if (value < 2500.00f)
		commission = 30.00f + 0.017f * value;
	else if (value < 6250.00f)
		commission = 56.00f + 0.0066f * value;
	else if (value < 20000.00f)
		commission = 76.00f + 0.0034f * value;
	else if (value < 50000.00f)
		commission = 100.00f + 0.0022f * value;
	else if (value < 500000.00f)
		commission = 155.00f + 0.0011f * value;
	else
		commission = 255.00f + 0.0009f * value;

	if (commission < 39.00f)
		commission = 39.00f;
	
	if (shareCount < 2000.00f)
		rivalCommission = 33.00f + 0.03f * shareCount;
	else 
		rivalCommission = 33.00f + 0.02f * shareCount;


	printf ("Commission of original broker: $%.2f\n", commission);
	printf ("Commission of rival broker: $%.2f\n", rivalCommission);

	return 0;
}
