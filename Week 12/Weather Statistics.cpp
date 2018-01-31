//Jacob Johnson
//jejohnson8@dmacc.edu
//11/26/17

#include <iostream>
#include <iomanip>
using namespace std;

const int NUM_MONTHS = 12;

struct WeatherData
{
	
	double rain; // total rainfall for the year
	double high; // high temp
	double low; // low temp
	double averageTemp; //Average Temperature
	
};

int main()
{

	WeatherData year[NUM_MONTHS];	
	cout << "Please enter the weather statistics:\n";
	for (int index = 0; index < NUM_MONTHS; index++)
	{
		// gets rainfall
		cout << "Month " << (index+1) << endl;
		cout << "Total rainfall: ";
		cin >> year[index].rain;	
		
		//gets high temp
		cout << "High temperature: ";
		cin >> year[index].high;
		while (year[index].high < -100 || year[index].high > 140)
		{
		cout << "ERROR! Temperature must be between -100 and 140.\n";
		cout << "High temperature: ";
		cin >> year[index].high;
		}
	
		//gets low temp
		cout << "Low temperature: ";
		cin >> year[index].low;
		while (year[index].low < -100 || year[index].low > 140)
		{
		cout << "ERROR! Temperature must be between -100 and 140.\n";
		cout << "High temperature: ";
		cin >> year[index].low;
		}
		
		//calc average temp
		year[index].averageTemp = (year[index].high + year[index].low)/2.0;
		
		// Calc total annual rainfall
		double totalRain = 0;
		for (index = 0; index < NUM_MONTHS; index++)
		{
		totalRain += year[index].rain;
		}
		 
		// Calc avg monthly rainfall
		double aveMonthRain = totalRain / NUM_MONTHS;

		// Calculate the average monthly average temperature
		double aveTotal = 0, aveAve;
		for (index = 1; index < NUM_MONTHS; index++)
		{
		aveTotal += year[index].averageTemp;
		aveAve = aveTotal / NUM_MONTHS;
		}
		
		// Find the highest & lowest temperatures
		double highest, lowest, highMonth = 0, lowMonth = 0;
		highest = year[0].high;
		lowest = year[0].low;
		
		for (index = 1; index < NUM_MONTHS; index++)
		{
		if (year[index].high > highest)
		{
		highest = year[index].high;
		highMonth = index;
		}
		if (year[index].low < lowest)
		{
		lowest = year[index].low;
		lowMonth = index;
		}
		}
		// display all info	
		cout << "\nTotal Rainfall: " << totalRain << endl;
		cout << "Average Monthly Rain: " << aveMonthRain << endl;
		cout << "Average Monthly Temperature: " << fixed << setprecision(2) << aveAve << endl;
		cout << "Highest Temperature: " << highest << endl;
		cout << " (Month " << fixed << setprecision(0) << (highMonth + 1) << ")\n";
		cout << "Lowest Temperature: " << fixed << setprecision(2) << lowest << endl;
		cout << " (Month " << fixed << setprecision(0) << (lowMonth + 1) << ")\n\n";
		
	}
	

	
	
	return 0;
}
