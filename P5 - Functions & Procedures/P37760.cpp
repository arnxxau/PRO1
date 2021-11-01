// P37760   Trigonometry
// Created by arnxxau on 1/11/21.
//
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double input;
    cout.setf(ios::fixed);
    cout.precision(6);
    while (cin >> input) {
        double radians = (M_PI/180) * input;
        cout << sin(radians) << ' ' << cos(radians) << endl;
    }
}

