// P74398   Número de cifras
// Created by arnxxau on 25/9/21.
//
#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    for (int i = 2; i <= 16; i++) {
        int n = i;
        int digits = 1;
        while (n <= x) {
            n *= i;
            digits++;
        }
        cout << "Base " << i << ": " << digits << " cifras." << endl;
    }
}