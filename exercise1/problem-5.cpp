#include <iostream>

using namespace std;

int* filterEvens(int* x, int n, bool (*p)(int)) {
	int newArrSize = 0;

	// We count how many numbers of the array satisfy p
	for(int i = 0 ; i < n ; ++i){
		if(p(x[i]))
			newArrSize++;
	}

	// Now create new array only for the numbers which satisfy p
	int* newArr = new int[newArrSize];
	int positionInNewArray = 0;
	for(int i = 0 ; i < n ; ++i){
		if(p(x[i])){
			newArr[positionInNewArray] = x[i];
			positionInNewArray++;
		}
	}

	return newArr;
}

bool isEven(int x){
	return x % 2 == 0;
}

int main(){

	int *arr = new int[5];

	for(int i = 0 ; i < 5 ; ++i)
		arr[i] = i;

	int *saver = arr;
 	arr = filterEvens(arr, 5, isEven);
	delete[] saver;

	for(int i = 0 ; i < 3 ; ++i)
		cout << arr[i] << " ";
	cout << endl;

	return 0;
}


