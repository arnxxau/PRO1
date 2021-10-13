// P39308   Divisors in order
// Created by arnxxau on 13/10/21.
//
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x;
    while (cin >> x) {
        cout << "divisors of " << x << ": ";
        for (int i = 1; i < sqrt(x) and x != 1; ++i) if (x%i == 0) cout << i << ' ';
        for (int i = sqrt(x); 1 <= i; --i) {
            if (x%i == 0) {
                cout << x/i;
                if (i != 1) cout << ' ';
            }
        }
        cout << endl;
        }
    }
