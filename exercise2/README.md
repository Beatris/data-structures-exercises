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

