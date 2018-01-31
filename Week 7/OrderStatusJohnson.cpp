// Chapter 6, Programming Challenge 14
// Jacob Johnson
// jejohnson8@dmacc.edu
// 10/16/2017
#include <iostream>
#include <iomanip>
using namespace std;

double getData(double spools, double stock, double shipping);
void displayData(double spools, double shipping, double stock);

int main()
{
	double spools;
	double stock;
	double shipping;
	
	spools, stock, shipping = getData(spools, stock, shipping);
	
	getData(spools, stock, shipping);
	displayData(spools, stock, shipping);
	
	
	return 0;
}

double getData(double spools, double stock, double shipping)
{
	char special;
	
	cout << "Please enter the number of spools ordered: ";
	cin >> spools;
	return spools;
	
	while (spools < 1)
	{
		cout << "Please enter a number greater than 0: ";
		cin >> spools;
	}
	
	cout << "Please enter the number of spools in stock: ";
	cin >> stock;
	return stock;
	
	while (stock < 0)
	{
		cout << "Please enter a number greater than 0: ";
		cin >> stock;
	}
	
	cout << "Are there special shipping and handling charges? Enter Y for yes and N for no: ";
	cin >> special;
	
	if ((special == 'Y') || (special == 'y'))
	{
		cout << "Please enter special charge per spool: ";
		cin >> shipping;
		return shipping;
	}
	else
	{
		shipping = 10.00;
		return shipping;
	}
}
void displayData(double spools, double stock, double shipping)
{
	double backorder = 0;
	double subtotal;
	double totalShipping;
	
	
	cout << "Spools in stock and ready to ship: " << spools << endl;
	cout << "Spools on backorder: " << spools - stock;
	
	cout << fixed << showpoint << setprecision(2);
	subtotal = (spools - backorder) * 100;
	
	cout << "Subtotal for portion ready to ship: $" << subtotal << endl;
	
	totalShipping = shipping * (spools-backorder);
	cout << "Shipping and handling charges for portion ready to ship: $" << totalShipping << endl;
	
	cout << "Total for order ready to ship: $" << subtotal + totalShipping;
	
	
}


