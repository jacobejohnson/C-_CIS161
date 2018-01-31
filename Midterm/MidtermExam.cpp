// Jacob Johnson
// jejohnson8@dmacc.edu
// 10/17/2017
// This program will determine the cost for a 7 night trip to Paris for a group of 1-100
// at a hotel per night cost of 50-500 using a series of while and if/else statements.
#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
	double FLIGHT = 750.00;
	int people;
	double hotel;
	double discount = .80;
	
	cout << "How many people are going (1-100): ";
	cin >> people;
	// input validation for number of people in group
	while (people < 1 || people > 100)
	{
		cout << "Error! You did not enter a group size from 1-100." << endl;
		cout << "How many people are going (1-100): ";
		cin >> people;	
	}
	
	cout << "How much per person do you want to spend on hotel per night (50-500EU): ";
	cin >> hotel;
	// input validation for cost of hotel per night
	while (hotel < 50 || hotel > 500)
	{
		cout << "Error! Hotel cost must be between 50-500EU." << endl;
		cout << "How much per person do you want to spend on hotel per night (50-500): ";
		cin >> hotel;
	}
	// calculations for non discounted trip
	if (people < 50)
	{
		double total = ((people * FLIGHT) + people * (hotel*7));
		cout << "The total cost of the trip will be " << fixed << setprecision(2)<< total << "EU." << endl;
	}
	else if (people <= 50 && people <= 100) // calculations for discounted trip
	{
		double total = ((people * FLIGHT) + people * (hotel*7))* discount;
		cout << "The total cost of the trip will be " << fixed << setprecision(2) << total << "EU." << endl;
	}
	
	return 0;	
}
