// P38045   Computing square roots and squares
// Created by arnxxau on 1/11/21.
//
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int input;
    cout.setf(ios::fixed);
    while (cin >> input) {
        cout.precision(0);
        cout << pow(input, 2) << ' ';
        cout.precision(6);
        cout << sqrt(input) << endl;
    }
}

