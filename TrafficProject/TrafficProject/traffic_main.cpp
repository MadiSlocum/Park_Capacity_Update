//TRAFFIC MAIN FILE
#include <iostream>
#include "traffic.h"
#include <fstream>
using namespace std;


int main()
{
	ofstream file;
	file.open("yosemite.txt");

	if (!file)
	{
		cout << "Error!" << endl;
	}


	traffic yosemite(0, 0); 
	file << "Yosemite Test Program. This test will consist of 7 test cases. " << endl;
	file << "TEST CASE 1: Cars/People enter park. No thresholds are crossed. Note that the program should not produce any output messages." << endl;
	file << "Prior to the test: " << endl;
	yosemite.Display(file);
	yosemite.Enter(9990, 29975, file);
	file << endl;
	yosemite.Display(file);
	file << endl;

//////////////////////////////////////

	file << "Test Case #2: Cars/People enter park. People threshold is exceeded but car threshold is not." << endl;
	file << "Prior to the test: " << endl;
	yosemite.Display(file);
	file << endl;
	yosemite.Enter(7, 30, file);
	file << endl;


/////////////////////////////////////
	file << "Test Case #3: Cars/People leave park. No thresholds are crossed. " << endl;
	file << "Prior to the test: " << endl;
	yosemite.Display(file);
	file << endl;
	yosemite.Exit(2, 4, file);
	file << endl;


///////////////////////////////////////
	file << "Test Case #4: Cars / People leave park. Only people drop below threshold. " << endl;
	file << "Prior to the test: " << endl;
	yosemite.Display(file);
	file << endl;
	yosemite.Exit(5, 16, file); //9990 / 29985
	file << endl;


///////////////////////////////////
	file << "Test #5: Cars/People leave park. Cars & people are both above before hand, and this call leaves people above, but cars drops below." << endl;
	file << "Prior to the test: " << endl;
	file << endl;
	yosemite.Enter(11, 16, file);//10001 / 30001
	yosemite.Exit(5, 0, file); //9996 // 30001
	file << endl;

///////////////////////////////////////

	file << "Test #6: Cars/People leave park. Cars & people are both above before hand, and this call leaves both above. " << endl;
	file << "Prior to the test: " << endl;
	yosemite.Display(file);
	file << endl;
	yosemite.Enter(8, 6, file);  //10004 / 30007
	yosemite.Exit(3, 2, file);  //10001 // 30005
	file << endl;

///////////////////////////////////////

	file << "Test #7: Cars/People leave park. Cars & people are both above before hand, and this call causes both to fall below their thresholds." << endl;
	file << "Prior to the test: " << endl;
	yosemite.Display(file);
	file << endl;
	yosemite.Exit(4, 10, file); //9997 / 29995
	file << endl;

	
	char letter;
	cin >> letter;
	

	return 0;
}