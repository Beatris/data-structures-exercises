#include <iostream>

using namespace std;

int factorial(int n) {
    if(n < 0)
        return -1; // Indicate error
    else if(n < 2)
        return 1;
    return n*factorial(n - 1);
}

int main() {
    int n; cin >> n;
    cout << "n! = " << factorial(n) << endl;
    return 0;
}