// P80660   The sequence of Collatz
// Created by arnxxau on 9/10/21.
//
#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int i = 0;
        while (n != 1) {
            if (n%2 == 0) n /= 2;
            else {
                n *= 3;
                ++n;
            }
            ++i;
        }
        cout << i << endl;
    }
}

