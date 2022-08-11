/*
 * File:   main.c
 * Author: <Angie Tran>
 */


#include <stdio.h>
#include <stdlib.h>

//Constant for Problem 2
#define MAX_SCORE 100000

 /*
  * Practice Program on FLoating Point Variable and Operations
  */
int main(int argc, char** argv)
{
	//Problem 1: Save and display score
	int score = 63421;
		printf("Score: %d\n", score);
		printf("Max Score: %d\n", MAX_SCORE);

	//Problem 2: Calculate and display percentage
	float percentage = ((float)score / MAX_SCORE) * 100;
	printf("Score Percentage: %.2f\n", percentage);

	//Problem 3: Output a rounded percentage percentage
	printf("Rounded Score Percentage: %.0f\n", percentage);

	return (EXIT_SUCCESS);
}
