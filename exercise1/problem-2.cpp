#include <iostream>

using namespace std;

int main(){
	//Read the size of the dynamic array
	int size;
	cin >> size;

	//Allocate the dynamic array
	int *arr = new int[size];

	for(int i = 0 ; i < size; ++i) {
		cin >> arr[i];
	}

	//Print the array in reversed order
	for(int i = size - 1; i >= 0 ; --i) {
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}