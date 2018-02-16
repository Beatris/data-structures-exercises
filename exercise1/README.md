### Задача 1 ###
Да се имплементира функцията ```swap``` 
```
#include <iostream>

using namespace std;

void swap(int* x, int* y) {
  // Implementation goes here
}

int main() {
  int x = 2;
  int y = 6;
  cout << "Result after swap:" << endl;
  swap(&x, &y);
  cout << "x: " << x << endl;
  cout << "y: " << y << endl;
  return 0;
}
```
Така че при изпълнение на програмата в конзолата да се изведе:
```
Result after swap:
x: 6
y: 2
```

### Задача 2 ###
Да се напише програма, която:
* прочита колко числа искаме да въведем;
* прочита числата и ги запазва в **динамичен масив**;
* извежда ги в обратен ред.