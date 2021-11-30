// P89336   Girant una llista de paraules (6)
// Created by arnxxau on 30/11/21.
//
#include <iostream>
using namespace std;

void reverse(int i, int& mid) {
    string p;
    if (cin >> p) {
        reverse(++i, mid);
        if (mid >= i)
            cout << p << endl;
    } else
        mid = i/2;
}

int main() {
    int mid = 0;
    reverse(0, mid);
}

