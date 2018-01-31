// Week 7 Lab
// Jacob Johnson
// jejohnson8@dmacc.edu
// 10/10/2017
/*double result = kinetic (mass,velocity)
double function (double mass, double velocity)
double KE = 1/2 * (mass*velocity_squared)
return KE;
*/
#include <iostream>
#include <cmath>

using namespace std;


double getMass();
double getVelocity();
double getKinetic(double mass, double velocity);
void displayResult(double mass, double velocity, double kinetic);

int main()
{
	double mass,
		   velocity,
		   kinetic;
		   
	mass = getMass();
	velocity = getVelocity();
	kinetic = getKinetic(mass, velocity);
	displayResult(mass, velocity, kinetic);
	return 0;
}

double getMass()
{
	double mass;
	cout << "Please enter the mass: ";
	cin >> mass;
	return mass;
}

double getVelocity()
{
	double velocity;
	cout << "Please enter the velocity: ";
	cin >> velocity;
	return velocity;
}

double getKinetic(double mass, double velocity)
{
	return (0.5 * mass) * (velocity * velocity);
	
}

void displayResult(double mass, double velocity, double kinetic)
{
	cout << "The kinetic engery is " << kinetic << "." << endl;	
}


