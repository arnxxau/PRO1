// P32533   Control C202E
// Created by arnxxau on 8/10/21.
//
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; n > i; ++i) {
        for (int j = 1; n > j+i; ++j) cout << '+';
        cout << '/';
        for (int j = 0; n > n-i+j; ++j) cout << '*';
        cout << endl;
    }
}
