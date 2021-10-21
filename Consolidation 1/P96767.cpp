// P96767   Polynomial evaluation (1)
// Created by arnxxau on 19/10/21.
//
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x;
    cin >> x;
    double input, sum = 0;
    int i = 0;
    while (cin >> input) {
        sum += input*pow(x, i);
        ++i;
    }
    cout.setf(ios::fixed);
    cout.precision(4);
    cout << sum << endl;
}
