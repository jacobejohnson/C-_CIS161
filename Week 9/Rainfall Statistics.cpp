//Jacob Johnson
//jejohnson8@dmacc.edu
//10/30/17

#include <iostream>
#include <string>

using namespace std;

double getTotal(double[], int);
double getAverage(double[], int);
double getLowest(double [], int, int&);
double getHighest(double [], int, int&);

const int NUM_MONTHS = 12;
double rainFall[NUM_MONTHS];
string months[NUM_MONTHS] = { "January", "February", "March", "April", "May", "June",
"July", "August", "September", "October", "November", "December" };



int main(){
	
	cout << "Please enter the rainfall for: " << endl;
	for (int i = 0; i < NUM_MONTHS; i++){
		cout << months[i] << ": ";
		cin >> rainFall[i];
	}
	
	// output total and average
	cout << endl;
	cout << "The total rainfall is " << getTotal(rainFall, NUM_MONTHS) << " inches." << endl;
	cout << "The average rainfall is " << getAverage(rainFall, NUM_MONTHS) << " inches per month." << endl;
	
	double low;
	double high;
	int lowestMonth;
	int highestMonth;
	
	low = getLowest(rainFall, NUM_MONTHS, lowestMonth);
	high = getHighest(rainFall, NUM_MONTHS, highestMonth);
	// output highes and lowest months
	cout << months[lowestMonth] << " had the lowest rainfall at " << low << " inches." << endl;
	cout << months[highestMonth] << " had the highest rainfall at " << high << " inches." << endl;
	
	return 0;
}
// calc total rainfall
double getTotal(double rainFall[], int NUM_MONTHS){
	double total = 0;
	for (int i = 0; i < NUM_MONTHS; i++){
		total += rainFall[i];
	}
	return total;
}
// calc average monthly rainfall
double getAverage(double rainFall[], int NUM_MONTHS){
	double average = getTotal(rainFall, NUM_MONTHS)/NUM_MONTHS;
	return average;
}
// find lowerst rainfall month
double getLowest(double rainFall[], int NUM_MONTHS, int &lowestIndex){
	double lowest = rainFall[0];
	for (int i = 0; i < NUM_MONTHS; i++){
		if (rainFall[i] <= lowest){
			lowest = rainFall[i];
			lowestIndex = i;
		}
	}
	return lowest;	
}
// find highest rainfall month
double getHighest(double rainFall[], int NUM_MONTHS, int &highestIndex){
	double highest = rainFall[0];
	for (int i = 0; i < NUM_MONTHS; i++){
		if (rainFall[i] >= highest){
			highest = rainFall[i];
			highestIndex = i;
		}
	}
	return highest;
}



