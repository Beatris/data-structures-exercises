### Задача 1 ###
Да се имплементира функция ```fact``` 
```
#include <iostream>

using namespace std;

int fact(int n){
  // Code
}

int main() {
  cout << "5! = " << fact(5) << endl;
  cout << "6! = " << fact(6) << endl;
  return 0;
}
```
Така че при изпълнение на програмата в конзолата да се изведе:
```
5! = 120
6! = 720
```

### Задача 2 ###
Да се имплементира функция ```reverse_print```  която принтира подаден непразен null-terminated низ в обратен ред
```
#include <iostream>

using namespace std;

void reverse_print(char* arr){
  // Code
}

int main() {
  char myword[] = { 'o', 'l', 'l', 'e', 'H', '\0' }; 
  cout << reverse_print(myword) << endl;
  char myword2[] = { 'a', 'l', 'u', 'l', 'a', '\0' }; 
  cout << reverse_print(myword2) << endl;
  return 0;
}
```
Така че при изпълнение на програмата в конзолата да се изведе:
```
Hello
alula
```

