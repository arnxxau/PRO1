// P50327   Reversed number
// Created by arnxxau on 25/9/21.
//
#include <iostream>
using namespace std;

int main() {
    string x, y;
    cin >> x;
    for (int i = 0; i < x.size(); i++) y += x[x.size() - 1 - i];
    cout << y << endl;
}

