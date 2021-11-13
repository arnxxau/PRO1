// P57474   Iterative factorial
// Created by arnxxau on 12/11/21.
//
#include <iostream>
using namespace std;

int factorial(int n) {
    int fct = 1;
    for (int i = 1; i <= n; ++i) fct *= i;
    return fct;
}

 int main() {
    int input;
    cin >> input;
    cout << factorial(input) << endl;
}
