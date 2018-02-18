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

### Задача 3 ###
Да се напише функция, която приема цяло число **n** и връща като резултат занулен масив от тип:
* bool;
* char;
* int;

с размер **n**

### Задача 4 ###
Да се имплементира функцията ```filterEvens```, която запазва само четните числа на подаден динамичен масив от цели числа и размерът му
```
#include <iostream>

using namespace std;

void filterEvens(int* x, int n) {
  // Implementation goes here
}
```

### Задача * ###
Да се имплементира функцията ```filter```, която връща като резултат указател към динамичен масив, който съдържа само четните числата на подаден динамичен масив от цели числа и размерът му, които удовлетворяват условието на подадения чрез указател предикат p.
```
#include <iostream>

using namespace std;

int* filter(int* x, int n, bool (p*)(int)) {
  // Implementation goes here
}
```
