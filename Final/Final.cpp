//Jacob Johnson
//jejohnson8@dmacc.edu
//12/11/17

#include <iostream>
#include<string>
#include <iomanip>
using namespace std;

const int HOURS = 24;

double food[HOURS];
string hours[HOURS] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thriteen", "fourteen", "fifteen", 
						"sixteen", "seventeen", "eighteen", "nineteen", "twenty", "twenty one", "twenty two", "twenty three", "twenty four"};
//function prototypes
double getTotal(double[], int);
double getAverage(double[], int);
double getHighest(double [], int, int&);

int main(){
	
	//gets input from user
	for (int i = 0; i < HOURS; i++){
		cout << "Please enter the food consumption in grams for hour ";
		cout << hours[i] << ": ";
		cin >> food[i];
		cout << endl;
	}
	//displays input after calling pertinent functions
	cout << "The average food ate per hour was " << getAverage(food, HOURS) << " grams." << endl;
	int high;
	int highestHour;
	high = (getHighest(food, HOURS, highestHour) + 1);
	cout << "The hour during which the most food was ate was hour " << high << "." << endl;
	
	
	return 0;
}
//function to get the total food in grams for use in the getAverage function
double getTotal(double food[], int HOURS){
	
	double total = 0;
	for (int i = 0; i < HOURS; i++){
		total += food[i];
	}
	return total;
}
//calculates the average food ate per hour
double getAverage(double food[], int HOURS){
	double average = getTotal(food, HOURS)/HOURS;
	return average;
}
//sorts through array to find hour in which most food was ate
double getHighest(double food[], int HOURS, int &highestIndex){
	double highest = food[0];
	for (int i = 0; i < HOURS; i++){
		if (food[i] >= highest){
			highest = food[i];
			highestIndex = i;
		}
	}
	return highestIndex;
}
