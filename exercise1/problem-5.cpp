#include <iostream>

using namespace std;

int* filter(int* x, int* n, bool (*p)(int)) {
	int matchingNumbersCount = 0;
	int size = *n;

	// Count the even numbers in the array
	for(int i = 0 ; i < size; i++) {
		if(p(x[i])) {
			matchingNumbersCount++;
		}
	}

	// Create new array only for the even numbers
	int* newArr = new int[matchingNumbersCount];
	int newArrCount = 0;
	for(int i = 0 ; i < size; i++) {
		if(p(x[i])) {
			newArr[newArrCount] = x[i];
			newArrCount++;
		}
	}
	*n = newArrCount;
	return newArr;
}

bool isOdd(int x){
	return x % 2 != 0;
}

int main(){
	// Enter the input array:
	int size; cin >> size;
	int *arr = new int[size];

	for(int i = 0 ; i < size; i++) {
		cin >> arr[i];
	}

	// Create new array with the filtered elements
	// and delete the old one:
	int *pointerToSize = &size;
	int *newArr = filter(arr, pointerToSize, isOdd);
	delete[] arr;

	for(int i = 0 ; i < *pointerToSize; i++) {
		cout << newArr[i] << " ";
	}
	cout << endl;
	delete[] newArr;
	return 0;
}
