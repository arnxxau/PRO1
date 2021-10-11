// P79784   Movements on the ground
// Created by arnxxau on 11/10/21.
//
#include "iostream"
using namespace std;

int main() {
    char x;
    int c1 = 0, c2 = 0;
    while (cin >> x) {
        if (x == 'e') ++c1;
        else if (x == 'w') --c1;
        else if (x == 's') ++c2;
        else --c2;
    }
    cout << '(' << c1 << ", " << c2 << ')' << endl;
}