/* KNKC chapter 13 programming project 11
 * Sundeep Kolli 27-apr-2014
 * Program: pp11.c
 * Purpose: Modify pp13.c from ch7 so that it includes the following function:
 * 		double compute_average_word_length(const char *sentence);
 * The function returns the average length of the words in the string pointed 
 * to by sentence.
*/

#include <stdio.h>
#include <stdbool.h>

#define TRUE 1
#define FALSE 0

#define N 100

double compute_average_word_length(const char *sentence);

int main(void)
{
	char sentence[N];
	
	
	printf ("Enter a sentence with less than %d characters: ", N);
	gets(sentence);	
	
	printf ("Average word length: %.1f\n", 
			compute_average_word_length(sentence));
	
	return 0;
}

double compute_average_word_length(const char *sentence){
	
	double letterCount = 0.0;
	double wordCount = 0.0;
	double averageWordLength = 0.0;
	
	bool inWordFlag = FALSE;
	
	const char *c = sentence;	
	
	while (*c){
		if (inWordFlag == FALSE && *c == ' '){
			
		}else if (inWordFlag == FALSE && *c != ' '){
			inWordFlag = TRUE;
			letterCount++;
			wordCount++;			
		}else if (inWordFlag == TRUE && *c != ' '){
			letterCount++;
		}else if (inWordFlag == TRUE && *c == ' '){
			inWordFlag = FALSE;
		}
		c++;
	}
	averageWordLength = letterCount / wordCount;
	
	return averageWordLength;
}

