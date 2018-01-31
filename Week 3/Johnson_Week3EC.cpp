// Jacob Johnson
// jejohnson8@dmacc.edu
// 515-231-5487

#include<iostream>

using namespace std;

int main()
{
 double celsius;
 double conversion;

 cout << "Please enter Celsius temperature: "; // asks user for celsius temp
 
 cin >> celsius; // gets celsius temp from user

 conversion = (1.8 * celsius) + 32; // calculates fahrenheit

 cout << celsius << " Celsius = " << conversion << " Fahrenheit \n\n"; // Displays conversion

 return 0;
}
