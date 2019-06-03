// TRAFFIC IMPLEMENTATION FILE - MADI SLOCUM

#include <iostream>
#include <fstream>
#include "traffic.h"

using namespace std;

const int MAX_CARS = 10000;
const int MAX_PEOPLE = 30000;


// The Enter function simulates entry of people/cars into
// the park and displays a warning if capacity is exceeded. Cars represents the number of cars entering the park.
// People represents the number of people entering the park.
void traffic::Enter(int Cars, int People, ofstream &file)
{
	CarsInPark += Cars;
	PeopleInPark += People;

	if ((CarsInPark > MAX_CARS) || (PeopleInPark > MAX_PEOPLE))
	{
		file << "***Warning, park capacity exceeded!***" << endl;
		Display(file);
	}
} //end
//The Exit function simulates the amount of people that are exiting to be updated with entering function
void traffic::Exit(int Cars, int People, ofstream &file)
{
	CarsInPark -= Cars;
	PeopleInPark -= People;
	if ((CarsInPark < MAX_CARS) && (PeopleInPark < MAX_PEOPLE))
	{
		file << "***Good news... there are no longer too many people or too many cars at the park***" << endl;
		Display(file);
	}
	else if (CarsInPark < MAX_CARS)
	{
		file << "***Good news... there are no longer too many cars in the parking lot***" << endl;

		Display(file);
	}

}//end

void traffic::Display(ofstream &file)
{
	file << "Cars In Park: " << CarsInPark << endl;
	file << "People In Park: " << PeopleInPark << endl;

}//end
