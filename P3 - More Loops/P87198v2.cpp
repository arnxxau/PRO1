// P87198   Easy octagons - NO IF VERSION
// Created by arnxxau on 9/10/21.
//
#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int b_size = n*3 - 2, top_bottom_size = n -1, space = n - 1;
        //top part
        for (int i = 0; top_bottom_size > i; ++i) {
            for (int j = 0; space > j+i; ++j) cout << ' ';
            for (int j = n - i; 2*n + i > j; ++j) cout << 'X';
            cout << endl;
        }
        //middle part
        for (int i = 0; n > i; ++i) {
            for (int j = 0; b_size > j; ++j) cout << 'X';
            cout << endl;
        }
        //bottom part
        for (int i = top_bottom_size; i > 0; --i) {
            for (int j = 0; space >= j + i; ++j) cout << ' ';
            for (int j = n - i ; 2*n + i - 2 > j; ++j) cout << 'X';
            cout << endl;
        }
        cout << endl;
    }
}
