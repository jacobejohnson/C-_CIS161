// This program will caculate the miles per gallon experienced by a specific car

// Jacob Johnson
// jejohnson8@dmacc.edu
// 515-231-5487

#include <iostream>
using namespace std;

double miles = 375;
double gallons = 15;

int main()
{
	double miles = 375; // miles traveled
    double gallons = 15; // gallons per tank
	
	double MPG = miles / gallons; // miles per gallon

	cout << "This car gets " << MPG << " miles per gallon." << endl;

	return 0;
}
