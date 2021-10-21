// P72484   Rhombus
// Created by arnxxau on 22/10/21.
//
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    //top part and middle line
    for (int i = 0; (2*n-1)/2 >= i; ++i) {
        for (int j = 0; n-i-2 >= j; ++j) cout << ' ';
        for (int j = 0; 2*i >= j; ++j) cout << '*';
        cout << endl;
    }
    //bottom part
    for (int i = (2*n-1)/2; 0 < i; --i) {
        for (int j = 0; n-i-1>= j; ++j) cout << ' ';
        for (int j = 2; 2*i >= j; ++j) cout << '*';
        cout << endl;
    }
}

