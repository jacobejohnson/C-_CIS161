// Jacob Johnson
// 9/25/2017
// jejohnson8@dmacc.edu
// This program calculates the discount and total price for software programs sold by a company.


#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
	
	double package = 99.00;
	int quantity;
	
	cout << "Please enter the number of software packages purchased: "; // asks user for quantity
 
 	cin >> quantity; // gets package quantity from user
 	
 	double price = quantity * package;
 	// calculate price and discount based on quantity sold using if else statements
 	if (quantity < 10)
    {
    	cout << setprecision (2) << fixed << "Total cost for this purchase will be $" << quantity * package << "." << endl;
    	cout << "You did not purchase enough software packages to earn a discount." << endl;
    }
    else if (quantity >= 10 && quantity <= 19)
    {
    	cout << setprecision (2) << fixed << "Total cost for this purhcase will be $" << (quantity * package) * .80 << "." << endl;
    	cout << "You received a 20% discount." << endl;
	}
	else if (quantity >= 20 && quantity <= 49)
	{
		cout << setprecision (2) << fixed << "Total cost for this purhcase will be $" << (quantity * package) * .70 << "." << endl;
		cout << "You received a 30% discount." << endl;
	}
	else if (quantity >= 50 && quantity <= 99)
	{
		cout << setprecision (2) << fixed << "Total cost for this purhcase will be $" << (quantity * package) * .60 << "." << endl;
		cout << "You received a 40% discount." << endl;
	}
	else if (quantity >= 100)
	{
		cout << setprecision (2) << fixed << "Total cost for this purhcase will be $" << (quantity * package) * .50 << "." << endl;
		cout << "You received a 50% discount." << endl;
	}
	return 0;
}
