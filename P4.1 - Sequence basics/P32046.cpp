// P32046   Control C202F
// Created by arnxxau on 11/10/21.
//
#include <iostream>
using namespace std;

int main() {
    int x, y, i = 0;
    cin >> x;
    cout << "nombres que acaben igual que " << x << ':' << endl;
    x %= 1000;
    while (cin >> y) {
        if (x == y%1000) {
            ++i;
            cout << y << endl;
        }
    }
    cout << "total: " << i << endl;
}