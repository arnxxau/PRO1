// P28754   Reversed number in binary
// Created by arnxxau on 25/9/21.
//
#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    if (x == 0) cout << 0;
    while (0 < x) {
        cout << x % 2;
        x /= 2;
    }
    cout << endl;
}
