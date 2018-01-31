//Group 1
//Jacob Johnson
//MD Ahmed 
//Elizabeth Smith 
//Michael Harmon 

#include <iostream>
#include<string>
#include <iomanip>

using namespace std;

class Employee{
	
	private:
		string name;
		int idNumber;
		string department;
		string position;
		
	public:
		Employee()
		{	name = "";
		    idNumber = 0;
		 	department = "";
		 	position = "";
		 	
		}
		Employee(string ename, int id){
			name = ename;
			idNumber = id;
			position = "";
			department = "";	
		}
		Employee(string ename, int id, string pos, string dept){
			name = ename;
			idNumber = id;
			position = pos;
			department = dept;
		}
		
		void setName(string en){
			name = en;
		}
		string getName(){
			return name;
		}
		
		void setIdNumber(int idNo){
			idNumber = idNo;
		}
		int getIdNumber(){
			return idNumber;
		}
		
		void setDepartment(string dept){
			department = dept;
		}
		string getDepartment(){
			return department;
		}
		
		void setPosition(string pos){
			position = pos;
		}
		string getPosition(){
			return position;
		}
	
	};
		
int main(){
	
	// instance of the employee class 
	Employee info1;
	Employee info2;
	Employee info3;
	
    // local variable for input
	string employeeName;
	int employeeIdNumber;
	string employeeDepartment;
	string employeePosition;
	
	// here I have tried getline for string member but its not doing well when I enter the input
	// so now we can enter olny one word without space then it takes good
	  
	cout << "Please enter one word for each data input (no space)" << endl;
	cout << "Please enter the employee first name: "; 
	getline(cin, employeeName);
	info1.setName(employeeName);
	cout << endl;
	cout << "Please enter the ID Number: ";
	cin >> employeeIdNumber;
	info1.setIdNumber(employeeIdNumber);
	cout << endl;
	cout << "Please enter the department: ";
	cin >> employeeDepartment;
	info1.setDepartment(employeeDepartment);
	cout << endl;
	cout << "Please enter a position: ";
	cin >> employeePosition;
	info1.setPosition(employeePosition);
	cout << endl;
	
	cout << "Please enter the employee first name: ";
	cin >> employeeName;
	info2.setName(employeeName);
	cout << endl;
	cout << "Please enter the ID Number: ";
	cin >> employeeIdNumber;
	info2.setIdNumber(employeeIdNumber);
	cout << endl;
	cout << "Please enter the department: ";
	cin >> employeeDepartment;
	info2.setDepartment(employeeDepartment);
	cout << endl;
	cout << "Please enter a position: ";
	cin >> employeePosition;
	info2.setPosition(employeePosition);
	cout << endl;
	
	cout << "Please enter the employee first name: ";
	cin >> employeeName;
	info3.setName(employeeName);
	cout << endl;
	cout << "Please enter the ID Number: ";
	cin >> employeeIdNumber;
	info3.setIdNumber(employeeIdNumber);
	cout << endl;
	cout << "Please enter the department: ";
	cin >> employeeDepartment;
	info3.setDepartment(employeeDepartment);
	cout << endl;
	cout << "Please enter a position: ";
	cin >> employeePosition;
	info3.setPosition(employeePosition);
	cout << endl;
	
	
	cout << "-----------------------------------------------------------------" << endl;
	
		cout << setw (15) << "Name" << setw (15)
	      << setw (15) << "Id Number"
	      << setw (15) << "Department"
	      << setw (15) << "Position" << endl ;
	      
	cout << "-----------------------------------------------------------------" << endl;
	cout << setw (15) << info1.getName();
	cout << setw (15) << info1.getIdNumber();
	cout << setw (15) << info1.getDepartment();
	cout << setw (15) << info1.getPosition() << endl;
	cout << setw (15) << info2.getName();
	cout << setw (15) << info2.getIdNumber();
	cout << setw (15) << info2.getDepartment();
	cout << setw (15) << info2.getPosition() << endl;
	cout << setw (15) << info3.getName();
	cout << setw (15) << info3.getIdNumber();
	cout << setw (15) << info3.getDepartment();
	cout << setw (15) << info3.getPosition() << endl;
	
	
return 0;
}
		
		

