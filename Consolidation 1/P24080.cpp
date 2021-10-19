// P24080	Squares (1)
// Created by arnxxau on 18/10/21.
//
#include <iostream>
using namespace std;

int main() {
    int n;
    bool first = true;
    while (cin >> n) {
        if (not first) cout << endl;
        for (int i = 0; n > i; ++i) {
            for (int j = 0; n > j; ++j) {
                cout << n;
            }
            cout << endl;
        }
        first = false;
    }
}