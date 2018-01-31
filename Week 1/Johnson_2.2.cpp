/*
Jacob Johnson
9/4/2017
jejohnson8@dmacc.edu

Sales Prediction:
The East Coast sales division of a company generates 58 percent of total sales.
Based on that percentage, write a program that will predict how much the East
Coast division will generate if the company has $8.6 million in sales this year.
*/

// This program Predicts the annual sales of the East Coast sales division.

#include <iostream>

using namespace std;



int main()

{

	double PoTS 		= .58,

		   CompSales 	= 8600000;

	int    ECSales		= CompSales * PoTS;



	cout << "The East Coast division is predicted to generate $";

	cout << ECSales << " in sales." << endl; 

	return 0;

}
