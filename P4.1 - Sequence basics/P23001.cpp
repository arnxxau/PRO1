// P23001   Consecutive repeated words
// Created by arnxxau on 12/10/21.
//
#include <iostream>
using namespace std;

int main() {
    string x, y;
    int i = 1, b = 1;
    cin >> x;
    while (cin >> y) {
        if (x == y) ++i;
        else i = 0;
        if (i > b) b = i;
    }
    cout << b << endl;
}
