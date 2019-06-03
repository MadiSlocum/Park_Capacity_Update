#pragma once
//TRAFFIC HEADER FILE - MADI SLOCUM
#include <iostream>
#include <fstream>
using namespace std;


class traffic
{

private:

	int CarsInPark;
	int PeopleInPark;


public:
	
	//Defaul constructor
	traffic(int Cars ,int People) {
		CarsInPark = 0;
		PeopleInPark = 0;
	}

	void Enter(int Cars, int People, ofstream &file);

	void Exit(int Cars, int People, ofstream &file);

	void Display(ofstream &file);


};