/*
 * File:   main.c
 * Author: <Angie Tran>
 */

#define _CRT_SECURE_NO_WARNINGS
 
#include <stdio.h>
#include <stdlib.h>

 /*
  * Program that converts between Fahrenheit and Celsius temperatures
  */
int main(int argc, char** argv)
{
	// Problem 1: Convert between temperatures
	float Original_Fahrenheit;
	float Calculated_Celsius;
	float Calculated_Fahrenheit;

	// prompt for and get original Fahrenheit temperature
	printf("Enter Temperature (Fahrenheit): ");
	scanf("%f", &Original_Fahrenheit);


	//calculate and display temperature in Celsius
	Calculated_Celsius = (Original_Fahrenheit - 32) / 9 * 5;
	printf("Celsius Temperature: %.1f\n", Calculated_Celsius);

	//calculate and display temperature in Fahrenheit
	Calculated_Fahrenheit = (Calculated_Celsius * 9 / 5) + 32;
	printf("Fahrenheit Temperature : %.1f\n", Calculated_Fahrenheit);

	return (EXIT_SUCCESS);
}
