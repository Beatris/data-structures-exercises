#include <iostream>

using namespace std;

void filterEvens(int* x, int n, bool (p*)(int)) {
	int newArrSize = 0;

	// We count how many evens number are there in the array
	for(int i = 0 ; i < n ; ++i){
		if(p(x[i]))
			newArrSize++;
	}

	// Now create new array only for the even numbers
	int* newArr = new int[newArrSize];
	int positionInNewArray = 0;
	for(int i = 0 ; i < n ; ++i){
		if(p(x[i])){
			newArr[positionInNewArray] = x[i];
			positionInNewArray++;
		}
	}
	// We assume that x is also dynamic array!
	delete[] x;
	x = newArr;
}

int main(){

	return 0;
}