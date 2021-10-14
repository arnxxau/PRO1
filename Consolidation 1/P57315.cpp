// P57315   ABC
// Created by arnxxau on 15/10/21.
//
#include <iostream>
using namespace std;

int main() {
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    int C = x1, B = x2;
    if (x2 > x1) {
        C = x2;
        B = x1;
    }
    int A = x3, aux;
    if (x3 > C) {
        aux = C;
        C = x3;
        A = aux;
    }
    if (A > B) {
        aux = A;
        A = B;
        B = aux;
    }
    char input;
    for (int i = 0; 3 > i; ++i) {
        cin >> input;
        if (input == 'A') cout << A;
        else if (input == 'B') cout << B;
        else cout << C;
        if (i != 2) cout << ' ';
    }
    cout << endl;
}
