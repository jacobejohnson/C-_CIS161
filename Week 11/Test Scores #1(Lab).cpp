/*Jacob Johnson
jejohnson8@dmacc.edu
11/7/17
Lab (Prog. Challenge 2 from Chapter 8. Only do the average part.  Sort is extra credit.)
*/

#include <iostream>
#include <iomanip>

using namespace std;

double getAverage(double, int);
void sortArray(double[], int);
void swap(int &, int &);

int main(){
	int size = 0;// to hold the number of tests
	double *iptr = nullptr; // to dynamically allocate an array
	double average; //to hold average score
	double total = 0.0;//accumulator
	cout << "How many test scores are there? ";
	cin >> size;
	//delcare array
	iptr = new double[size];
	// get scores and calculate total of all scores
	cout << "Enter the test amounts below.\n";
	for (int count = 0; count < size; count++){
		cout << "Test " << (count + 1) << ": ";
		cin >> iptr[count];
			while (iptr[count] <= 0){
        	cout << "Zero or negative numbers not accepted.\n";
        	cout << "Test Score #" << (count + 1) << ": ";
        	cin >> iptr[count];
    		}
    	total += iptr[count];

	}
	
	//display the average score
	
	cout << "Average score is " << fixed << showpoint << setprecision(2) << getAverage(total, size) << " percent." << endl;
	cout << "Array sorted in ascending order:\n";
	//call sort
	sortArray(iptr, size);
	
	
	delete [] iptr;
	iptr = nullptr;
		
	return 0;
}

double getAverage(double total, int size){
	double average = total/size;
	return average;
}

void sortArray(double array[], int size){
	int maxElement;
	int index;
	
	for (maxElement = size -1; maxElement > 0; maxElement--){
		for (index = 0; index < maxElement; index++){
			if (array[index] > array[index+1]){
				swap(array[index], array[index+1]);
			}
		}
	}
	for (index = 0; index < size; index++){
		cout << array[index] << "\n";
	}
}
void swap(double &a, double &b){
	double temp = a;
	a = b;
	b = temp;
}

