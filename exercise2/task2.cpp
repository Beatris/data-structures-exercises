#include <iostream>

using namespace std;

void reversePrint(char* arr, int position = 0){
    if(arr[position] == '\0')
        return;
    reversePrint(arr, position + 1);
    cout << arr[position];
}

int main() {
    char myword[] = { 'o', 'l', 'l', 'e', 'H', '\0' }; 
    reversePrint(myword);
    cout << endl;
    char myword2[] = { 'a', 'l', 'u', 'l', 'a', '\0' }; 
    reversePrint(myword2);
    cout << endl;
    return 0;
}