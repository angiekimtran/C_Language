/*
 * File:   main.c
 * Author: <Angie Tran>
 */

#define _CRT_SECURE_NO_WARNINGS
 
#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 2

/*
 * fgets() programming assignment
 */

int main(int argc, char** argv)
{
	
	char input[MAX_LENGTH];
	fgets(input, MAX_LENGTH, stdin);
	while (input[0] != 'q')
	{
		// First 10 Elements from the Periodic Table
		// To make the code run press the <Enter> key.
		// To stop running the code, type q (for quit).
		
		printf("H\n");
		printf("He\n");
		printf("Li\n");
		printf("Be\n");
		printf("B\n");
		printf("C\n");
		printf("N\n");
		printf("O\n");
		printf("F\n");
		printf("Ne\n");

		
		fgets(input, MAX_LENGTH, stdin);
	}

	return 0;
}
