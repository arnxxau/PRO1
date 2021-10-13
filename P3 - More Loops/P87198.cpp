// P87198   Easy octagons
// Created by arnxxau on 9/10/21.
//
#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int b_size = n*3 - 2, c_size = n, space = n-1;
        for (int i = 0; i < b_size; ++i) {
            for (int e = 0; e < space; ++e) cout << ' ';
            for (int j = 0; j < c_size; ++j) cout << 'X';
            if (i+1 < n) {
                c_size += 2;
                --space;
            }
            else if (b_size-n < i+1) {
                c_size -= 2;
                ++space;
            }
            cout << endl;
        }
        cout << endl;
    }
}
