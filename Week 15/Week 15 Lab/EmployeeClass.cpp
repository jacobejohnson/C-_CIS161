//Group 1
//Jacob Johnson
//MD Ahmed 
//Elizabeth Smith 
//Michael Harmon 

#include <iostream>
#include<string>
using namespace std;

class Employee{
	
	private:
		string name;
		int idNumber;
		string department;
		string position;
		
	public:
		Employee(string, string, string)
		{	name = "";
		 	department = "";
		 	position = "";
		 	idNumber = 0;
		}
		Employee(string en, int id, string, string){
			name = en;
			idNumber = id;
			position = "";
			department = "";	
		}
		Employee(string en, int id, string p, string dept){
			name = en;
			idNumber = id;
			position = p;
			department = dept;
		}
		string getName(){
			return name;
		}
		void setName(string en){
			name = en;
		}
		string getIdNumber(){
			return idNumber;
		}
		void setIdNumber(int id){
			idNumber = id;
		}
		string getDepartment(){
			return department;
		}
		void setDepartment(string dept){
			department = dept;
		}
		string getPosition(){
			return position;
		}
		void setPosition(string p){
			position = p;
		}
		
int main(){
	
	Employee first;
	string employeeName;
	int employeeIdNumber;
	string employeeDepartment;
	string employeePosition;
	
	cout << "Please enter the employee name: ";
	cin >> employeeName;
	first.setName(employeeName);
	cout << endl;
	cout << "Please enter the ID Number: ";
	cin >> employeeIdNumber;
	first.setIdNumber(EmployeeIdNumber);
	cout << endl;
	cout << "Please enter the department: ";
	cin >> employeeDepartment;
	first.setDepartment(employeeDepartment);
	cout << endl;
	cout << "Please enter a position: ";
	cin >> employeePosition;
	first.setPosition(employeePosition);
	cout << endl;
	cout << "Name: " << first.getName() << endl;
	cout << "Id Number: " << first.getIdNumber() << endl;
	cout << "Department: " << first.getDepartment() << endl;
	cout << "Position: " << first.getPosition() << endl;
	
	
}
		
		
		
	
};
