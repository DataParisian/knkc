/* KNKC chapter 8 programming project 8
 * Sundeep Kolli 01-feb-2014
 * Program: pp8.c
 * Purpose: write a program that reads 5 quiz scores for 5 students, then 
 * computes the total score and average score for each student, and the 
 * average score, high score and low score for each quiz.
*/

#include <stdio.h>

#define STUDENT_COUNT ((int) (sizeof(quizScore) / sizeof(quizScore[0])))
#define QUIZ_COUNT ((int) (sizeof(quizScore[0]) / sizeof(quizScore[0][0])))

int main(void){

	int i, j, quizScore[5][5] = {{0}};
	int studentTotal;
	int quizLowScore, quizHighScore;
	float studentAverage, quizAverage;
	
	for (i = 0; i < STUDENT_COUNT; i++){
		printf ("Enter scores for student %d: ", i + 1);
		for (j = 0; j < QUIZ_COUNT; j++){
			scanf("%d", &quizScore[i][j]);
		}
	}
	printf ("\n");
	
	printf ("Student		Total		Average\n");
	for (i = 0; i < STUDENT_COUNT; i++){
		studentTotal = 0;
		studentAverage = 0.0;
		for (j = 0; j < QUIZ_COUNT; j++){
			studentTotal += quizScore[i][j];
		}
		studentAverage = ((float)studentTotal / QUIZ_COUNT);
		printf ("%3d		%3d		  %.2f\n", 
				(i + 1) , studentTotal, studentAverage);
	}
	printf ("\n");
	
	
	printf ("Quiz    LowScore    HighScore    Average\n");
	for (i = 0; i < QUIZ_COUNT; i++){
		 quizAverage = 0.0;
		 quizLowScore = quizHighScore = quizScore[0][i];
		for (j = 0; j < STUDENT_COUNT; j++){
			quizAverage += quizScore[j][i];
			if(quizScore[j][i] < quizLowScore){
				quizLowScore = quizScore[j][i];
			}
			if(quizScore[j][i] > quizHighScore){
				quizHighScore = quizScore[j][i];
			}
		}
		quizAverage /= STUDENT_COUNT;
		printf ("%3d	%4d        %3d 	   %.2f\n",
			 (i + 1), quizLowScore, quizHighScore, quizAverage);
	}
	
	return 0;
}
