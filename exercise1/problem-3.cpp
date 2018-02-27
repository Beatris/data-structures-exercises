#include <iostream>

using namespace std;

/*
The zero element for
bool is false
char is 0
int is 0
*/

bool* getBoolArray(int size) {
	// We should not create an array with negative or zero size
	if(size <= 0) {
		return nullptr;
	}

	bool* boolArr = new bool[size];

	for(int i = 0 ; i < size ; ++i)
		boolArr[i] = false;
	return boolArr;
}

char* getCharArray(int size) {
	//We should not create an array with negative or zero size
	if(size <= 0) {
		return nullptr;
	}

	char* boolArr = new char[size];
	
	for(int i = 0 ; i < size ; ++i)
		boolArr[i] = 0;
	return boolArr;
}

int* getIntArray(int size) {
	//We should not create an array with negative or zero size
	if(size <= 0) {
		return nullptr;
	}

	int* boolArr = new int[size];
	
	for(int i = 0 ; i < size ; ++i)
		boolArr[i] = 0;
	return boolArr;
}

int main(){
	int size;
	cin >> size;

	bool* emptyBoolArray = getBoolArray(size);
	char* emptyCharArray = getCharArray(size);
	int* emptyIntArray = getIntArray(size);

	for(int i = 0; i < size; i++) {
		cout << "Index " << i << endl;
		cout << "bool: " << emptyBoolArray[i] << endl;
		cout << "char: " << emptyCharArray[i] << endl;
		cout << "int: " << emptyIntArray[i] << endl;
	}

	delete[] emptyBoolArray;
	delete[] emptyCharArray;
	delete[] emptyIntArray;
	return 0;
}