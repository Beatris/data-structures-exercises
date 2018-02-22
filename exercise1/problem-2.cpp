#include <iostream>

using namespace std;

int main(){
	//Read the size of the dynamic array
	int arrSize;
	cin >> arrSize;

	//Allocate the dynamic array
	int *arr = new int[arrSize];

	for(int i = 0 ; i < arrSize ; ++i){
		cin >> arr[i];
	}

	//Print the array in reversed order
	for(int i = arrSize - 1 ; i >= 0 ; --i){
		cout << arr[i];
	}
	
	delete[] arr;

	return 0;
}
