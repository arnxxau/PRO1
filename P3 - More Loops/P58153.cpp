// P58153   Harmonic numbers (2)
// Created by arnxxau on 9/10/21.
//
#include "iostream"
using namespace std;

int main() {
    int n, m;
    cout.setf(ios::fixed);
    cout.precision(10);
    while (cin >> n >> m) {
        double sum = 0;
        for (int i = m+1; n >= i; i++) sum += 1/double(i);
        cout << sum << endl;
    }
}

