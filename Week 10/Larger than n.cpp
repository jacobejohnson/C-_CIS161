/*Jacob Johnson
jejohnson8@gmail.com
11/5/17*/

#include <iostream>

using namespace std;
//function prototype
int larger(const int[], int, int);

int main(){
	const int SIZE = 20;
	int array[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
	int n = 10;
	int results;
	cout << "If n is equal to 10...\n";
	cout << "The numbers in the array that are larger than n are:\n";
	results = larger(array, SIZE, n);//calls function larger
	
	return 0;
}
// function that finds and returns numbers larger than n
int larger(const int arr[], int size, int value){
	int index = 0;
	int position;
	//searches through array to find elements with values larger than n
	while (index < size){
		if (arr[index] > value){
			cout << arr[index] << endl;
		}
		index++;
	}
	return position;//returns findings to main
}
