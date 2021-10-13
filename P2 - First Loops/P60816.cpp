// P60816   Reversed number in hexadecimal
// Created by arnxxau on 26/9/21.
//
#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    if (x == 0) cout << 0;
    while (0 < x) {
        cout << hex << uppercase << x % 16;
        x /= 16;
    }
    cout << endl;
}

