#include <iostream>

using namespace std;

bool equal(int* first, int firstSize, int* second, int secondSize) {
    if((firstSize == 0) && (secondSize == 0))
        return true;
    if((firstSize == secondSize) && (*first == *second))
        return equal(++first, firstSize - 1, ++second, secondSize - 1);
    return false;
}

int main(){
    int firstSize, secondSize;
    cin >> firstSize; cin >> secondSize;
    int* first = new int[firstSize];
    int* second = new int[secondSize];

    cout << "Enter first array elements:" << endl;
    for(int i = 0; i < firstSize; i++)
        cin >> first[i];
    
    cout << "Enter second array elements:" << endl;
    for(int i = 0; i < secondSize; i++)
        cin >> second[i];
    
    if(equal(first, firstSize, second, secondSize))
        cout << "The two lists are equal." << endl;
    else
        cout << "The two lists are NOT equal." << endl;

    delete[] first; delete[] second;
    return 0;
}