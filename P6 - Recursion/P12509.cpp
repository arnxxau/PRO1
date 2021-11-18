// P12509   Recursive factorial
// Created by arnxxau on 18/11/21.
//
#include <iostream>
using namespace std;


int factorial(int n) {
    if (n > 0) return n*factorial(n - 1);
    return 1;
}

int main() {
    int n;
    cin >> n;
    cout << factorial(n) << endl;
}
