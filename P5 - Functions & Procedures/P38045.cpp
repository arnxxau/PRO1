// P38045   Computing square roots and squares
// Created by arnxxau on 1/11/21.
//
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int input;
    while (cin >> input) {
        cout << input*input << ' ';
        cout.setf(ios::fixed);
        cout.precision(6);
        cout << sqrt(input) << endl;
    }
}

