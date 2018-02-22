#include <iostream>

using namespace std;

int* filterEvens(int* x, int n) {
	int numberOfEvens = 0;

	// We count how many evens number are there in the array
	for(int i = 0 ; i < n ; ++i){
		if(x[i] % 2 == 0){
			numberOfEvens++;
		}
	}

	// Now create new array only for the even numbers
	int* newArr = new int[numberOfEvens];
	int positionInNewArray = 0;
	for(int i = 0 ; i < n ; ++i){
		if(x[i] % 2 == 0){
			newArr[positionInNewArray] = x[i];
			positionInNewArray++;
		}
	}
	return newArr;
}

int main(){
	int *arr = new int[5];

	for(int i = 0 ; i < 5 ; ++i)
		arr[i] = i;

	int *saver = arr;
 	arr = filterEvens(arr, 5);
	delete[] saver;

	for(int i = 0 ; i < 3 ; ++i)
		cout << arr[i] << " ";
	cout << endl;
	
	return 0;
}