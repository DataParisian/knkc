/* KNKC chapter 13 programming project 9
 * Sundeep Kolli 27-apr-2014
 * Program: pp9.c
 * Purpose: Modify pp10.c from ch7 so that it includes the following function:
 * 		int compute_vowel_count(const char *sentence);
 * The function returns the number of vowels in the string pointed to by the 
 * sentence parameter.
*/

#include <stdio.h>
#include <ctype.h>

#define N 100

int compute_vowel_count(const char *sentence);

int main(void)
{
	int vowels;
	char inputSentence[N];
	
	printf ("Enter a sentence with less that %d characters: ", N);
	gets(inputSentence);
	
	vowels = compute_vowel_count(inputSentence);
			
	printf ("Your sentence has %d vowels.\n", vowels);
	
	return 0;
}

int compute_vowel_count(const char *sentence){
	
	char c;
	
	int aCount = 0;
	int eCount = 0;
	int iCount = 0;
	int oCount = 0;
	int uCount = 0;
	int vowelCount = 0;	
		
	while (*sentence){		
		c = toupper(*sentence);		
		if (c == 'A'){
			aCount++;
		}else if (c == 'E'){
			eCount++;
		}else if (c == 'I'){
			iCount++;
		}else if (c == 'O'){
			iCount++;
		}else if (c == 'U'){
			iCount++;
		}		
		sentence++;
	}
	
	vowelCount = aCount + eCount + iCount + oCount + uCount;

	return vowelCount;
}

