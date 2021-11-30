// P26041   Reversing a list of words (1)
// Created by arnxxau on 30/11/21.
//
#include <iostream>
using namespace std;

void reverse() {
    string p;
    if (cin >> p) {
        reverse();
        cout << p << endl;
    }
}

int main() {
    reverse();
}