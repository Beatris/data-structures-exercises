#include <iostream>

using namespace std;

int main(){
	//Read the size of the dynamic array
	int arrSize;
	cin >> arrSize;

	//Allocate the dynamic array
	int *pointerToDynArray = new int[arrSize];

	for(int i = 0 ; i < arrSize ; ++i){
		cin >> pointerToDynArray[i];
	}

	//Print the array in reversed order
	for(int i = arrSize - 1 ; i >= 0 ; --i){
		cout << pointerToDynArray[i];
	}

	return 0;
}