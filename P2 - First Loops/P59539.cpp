// P59539   Harmonic numbers (1)
// Created by arnxxau on 21/9/21.
//
#include "iostream"
using namespace std;

int main() {
    int x;
    double sum = 0;
    cin >> x;
    for (int i = 1; x >= i; i++) sum += 1.0/i;
    cout.setf(ios::fixed);
    cout.precision(4);
    cout << sum << endl;
}