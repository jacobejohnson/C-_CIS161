#include<iostream>
#include<string>
#include<iomanip>
//Jacob Johnson
//jejohnson8@dmacc.edu
//10/2/17

using namespace std;

main ()
{

	int numYears = 0;
	const int MONTHS = 12;
	float rainfall = 0.0f;
	float avgRainfall = 0.0f;
	float totalRainfall = 0.0f;
	
	
	cout << "Please enter the number of years: ";
	cin >> numYears; // number of years
	
	while (numYears < 1)
	{
		cout << "You must enter at least 1. Please enter the number of years: ";
		cin >> numYears;
	}
	
	for (int i = 1; i <= numYears; i++)
	{
		for (int month = 1; month <= MONTHS; month++)
		{
			cout << "Please enter the rainfall for month " << month << ": "; // rainfall for each month
			cin >> rainfall;
			
			while (rainfall < 0)
			{
				cout << "Error! Please enter a number greater than 0: ";
				cin >> rainfall;	
			}
			totalRainfall += rainfall; // calculate total rainfall during the period
		}
			
	}
	 cout << "Number of months: " << numYears * MONTHS << endl; // calculate total number of months
	 cout << "Total inches of rainfall: " << totalRainfall << endl;
	 cout << "Average inches of rainfall per month: " << totalRainfall/(numYears * MONTHS) << endl; // calculate the average rainfall
	 
	return 0;	
}
