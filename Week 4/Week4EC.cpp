#include <iostream>
#include<iomanip>
/* Jacob Johnson
jejohnson8@dmacc.edu
9/25/17
This program calculates the bank's 
service/monthly fees based on number of checks
and beginning balance */

int main() 
{
using namespace std;

 int checks;
 double beginningBalance; 
 double firstFee; 
 double secondFee; 
 double monthlyFee = 10;
 double totalFees;

 cout << "Please enter your beginning balance: $" << endl;
 
 cin >> beginningBalance;

 cout << setprecision(2) << fixed;
 
 if (beginningBalance < 0)
 
 cout << "Your account is currently overdrawn.";
 
 else
 {
 cout << "Enter number of checks written: ";
 
 cin >> checks;
 
 if (beginningBalance < 400)
 {
 	firstFee = 15.00;
 }
 else
 {
 	firstFee = 0.00;	
 }

 if (checks >= 0 && checks < 20)
 {
 	secondFee = checks * 0.10;	
 }
 
 if (checks >= 20 && checks <= 39)
 {
 	secondFee = checks * 0.08;
 }
 
 if (checks >= 40 && checks <= 59)
 {
 	secondFee = checks * 0.06;
 }
 
 if (checks >= 60)
 {
 	secondFee = checks * 0.04;
 }
 
 if (checks < 0)
 {
 	cout << "Invalid entry: You may not enter a negative number of checks." << endl;
 }

 totalFees = firstFee + secondFee + monthlyFee;

 
 cout << "Low balance fee: $" << firstFee << endl;
 cout << "Check fees: $" << secondFee << endl;
 cout << "Monthly fee: $" << monthlyFee << endl;
 cout << "Total Monthly fees: $" << totalFees << endl;
 }
	return 0;
}
