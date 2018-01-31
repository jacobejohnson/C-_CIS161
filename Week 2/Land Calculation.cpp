// This program will caculate the number of acres in a tract of land

// Jacob Johnson
// jejohnson8@dmacc.edu
// 515-231-5487

#include <iostream>
using namespace std;

double ACRE = 43560;
double TRACT = 391876;

int main()
{
	double ACRE = 43560; // sq ft in one acre of land
    double TRACT = 391876; // sq ft in the tract of land
	
	double totalAcres = TRACT / ACRE;

	cout << "The total number of acres in the tract of land is: " << totalAcres << endl;

	return 0;
}
