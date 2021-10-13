// P48713   Primality
// Created by arnxxau on 11/10/21.
//
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int p;

    for (int i = 0; n > i; ++i) {
        cin >> p;
        bool compound = p <= 1;
        int d = 2;
        while (p >= d*d and not compound) {
            if (p%d == 0 and p != d) compound = true;
            ++d;
        }
        if (not compound) cout << p << " is prime" << endl;
        else cout << p << " is not prime" << endl;
    }
}