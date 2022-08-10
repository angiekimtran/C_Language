/*
 * File:   main.c
 * Author: <Angie Tran>
 */

 
#include <stdio.h>
#include <stdlib.h>

 /*
  * User-defined data type program
  */
int main(int argc, char** argv)
{
	typedef struct Student Student;
	struct Student
	{
		int studentID;
		float gradepercent;
		char gradeletter;
	};
	// initialize and print student 1 info
	Student student0 = { 109277914, 97.5, 'A' };
	printf("Name: Angie Tran\n");
	printf("----------\n");
	printf("Student ID: %d\n", student0.studentID);
	printf("Percent Grade: %f.1\n", student0.gradepercent);
	printf("Letter Grade: %c\n", student0.gradeletter);

	printf("\n");

	// initialize and print student 1 info
	Student student1 = { 108357016, 32.8, 'F' };
	printf("Name: John Doe\n");
	printf("----------\n");
	printf("Student ID: %d\n", student1.studentID);
	printf("Percent Grade: %f.1\n", student1.gradepercent);
	printf("Letter Grade: %c\n", student1.gradeletter);

	printf("\n");

	return (EXIT_SUCCESS);
}
