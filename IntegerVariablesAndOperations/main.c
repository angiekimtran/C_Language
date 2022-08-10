/*
* File:   main.c
* Author: Angie Tran
*/

#include <stdio.h>
#include <stdlib.h>

// constants for Problem 2
#define OLD_AGE_YEAR 1962
#define CURRENT_YEAR 2022

/*
* Learning Integer Variables and Operations
*/
int main(int argc, char** argv)
{
	// Problem 1: Output age
	int age = 22;
	printf("My age: %d\n", age);

	// Problem 2: Output old age
	int oldAge = CURRENT_YEAR - OLD_AGE_YEAR;
	printf("Old age: %d\n", oldAge);

	// Problem 3: Output difference in ages (with new variable)
	int ageDifference = oldAge - age;
	printf("Old age is %d years older than me\n", ageDifference);

	return (EXIT_SUCCESS);
}