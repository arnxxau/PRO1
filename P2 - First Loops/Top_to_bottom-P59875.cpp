//
// Created by arnxxau on 21/9/21.
//
#include "iostream"
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    if (y > x) {
        int b = x;
        x = y;
        y = b;
    }
    while (x >= y) cout << x-- << endl;
}
