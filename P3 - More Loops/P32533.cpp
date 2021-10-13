// P32533   Control C202E
// Created by arnxxau on 8/10/21.
//
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int slash = n-1;
    for (int i = 0; n > i; ++i) {
        for (int j = 0; j < n; ++j) {
            if (j == slash) cout << '/';
            else if (j < slash) cout << '+';
            else cout << '*';
        }
        --slash;
        cout << endl;
    }
}
