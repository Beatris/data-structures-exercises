#include <iostream>

using namespace std;

void swap(int* x, int* y) {
	int z = *x;
	*x = *y;
	*y = z;
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