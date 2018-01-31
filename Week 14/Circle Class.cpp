//Jacob Johnson
//jejohnson8@dmacc.edu
//11/28/17
//Chapter 13, Programming Challenge 8 - Circle Class

#include <iostream>
using namespace std;
//cirlc class declaration
class Circle{
	private:
		double radius;
		double pi = 3.14159;
		
	public:
		
		Circle(); // default constructor
		Circle(double r);
		void setRadius(double);
		void setPi(double);
		double getRadius() const;
		double getPi() const;
		double getArea() const;
		double getDiameter() const;
		double getCircumference() const;
		
};

Circle::Circle(){ //constructor
	radius = 0.0;
}
Circle::Circle(double r){ //constructor that accepts radius as an argument
	radius = r;
}

// set radius assigns a value to the radius member
void Circle::setRadius(double r){
	radius = r;
}
void Circle::setPi(double p){
	pi = p;
}
double Circle::getRadius() const{
	return radius;
}
double Circle::getPi() const{
	return pi;
}
double Circle::getArea() const{ // calculates area
	return pi * (radius * radius);
}
double Circle::getDiameter() const{ //calculates diameter
	return radius * 2;
}
double Circle::getCircumference() const{ //caclculates circumference
	return 2 * pi * radius;
}

int main(){
	
	Circle circ; //defines instance of circle class
	double circR; // local variable for radius
	
	cout << "Please enter the radius of the cirlce: ";
	cin >> circR;
	cout << endl;
	circ.setRadius(circR);
	cout << "The area of the circle is: " << circ.getArea() << endl;
	cout << "The diameter of the circle is: " << circ.getDiameter() << endl;
	cout << "The circumference of the circle is: " << circ.getCircumference() << endl;
	
	return 0;
	
}

