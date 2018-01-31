// Jacob Johnson
// 10/01/2017
// jejohnson8@dmacc.edu
// This program calculates the distance traveled.


#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{

	double speed = 0;
	int time = 0;
	int perHour = 1;
	
	cout << "Please enter the speed of the vehicle in miles per hour: ";
	cin >> speed;
	
	
	if (speed < 0.0)
	{
		cout << "Speed must not be a negative number." << endl;
		cout << "Please enter a positive number for speed: ";
		cin >> speed;	
	}
	
	cout << "Please enter how many hours the vehicle traveled: ";
	cin >> time;
	
	if (time < 1)
	{
		cout << "Hours traveled must be 1 or greater." << endl;
		cout << "Please enter how many hours the vehicle traveled: ";
		cin >> time;
	}
	
	cout << "Hour     Distance Traveled\n";
	cout << "----------------------------\n";
	
	while (perHour <= time)
	{
		cout << " " << setw(4) << left << ++perHour << " ";
		cout << setw(10) << right << ( speed * perHour ) << "\n";
		
	}
	return 0;
	
}
