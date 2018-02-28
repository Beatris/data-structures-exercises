### Задача 1 ###
Да се имплементира функция `factorial`, която връща **n!** по подаден аргумент от тип `int`.

### Задача 2 ###
Да се имплементира функция `reversePrint`  която принтира подаден непразен null-terminated низ в обратен ред:
```
#include <iostream>

using namespace std;

void reversePrint(char* arr, int position = 0){
    // Code
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
```
Така че при изпълнение на програмата в конзолата да се изведе:
```
Hello
alula
```
### Задача * ###
Да се имплементира функцията `equal`, която приема 2 динамични масива и техните размери и връща дали са равни или не:
```
#include <iostream>

using namespace std;

bool equal(int* first, int firstSize, int* second, int secondSize) {
    // Code
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
```
