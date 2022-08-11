/*
 * File:   main.c
 * Author: <Angie Tran>
 */


#include <stdio.h>
#include <stdlib.h>

 /*
  * Second project on User-Defined Data Type
  */
int main(int argc, char** argv)
{
	//Problem 1 - Define user-defined data type
	typedef struct GPSCoordinates GPSCoordinates;
	struct GPSCoordinates
	{
		float latitude;
		float longitude;
	};
	
	//Problem 2 - Declare and initialize variables: GPS of my location and place I want to visit
	GPSCoordinates CurrentLocation = { 39.735227, -104.885574 };
	GPSCoordinates Japan = { 35.682839,139.759455 };

	//Problem 3 - Calculate and output latitude and longitude differences
	printf("The Lat,Long GPS coordination of my current location: %f, %f.\n", 39.735227, -104.885574);
	printf("The Lat,Long GPS coordination of Japan (the place I want to visit): %f, %f.\n\n", 35.682839, 139.759455);
	
	printf("Latitude needs to change by %f to get from my location to Japan.\n",
		Japan.latitude - CurrentLocation.latitude);
	printf("Longitude needs to change by %f to get from my location to Japan.\n",
		Japan.longitude - CurrentLocation.longitude);



	return (EXIT_SUCCESS);
}
