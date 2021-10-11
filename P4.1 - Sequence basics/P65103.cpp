// P65103   I-th (3)
// Created by arnxxau on 11/10/21.
//
#include "iostream"
using namespace std;

int main() {
    int x, y, z, i = 1;
    bool error = true;
    cin >> x;
    while (cin >> y) {
        if (i == x) {
            error = false;
            z = y;
        }
        ++i;
    }
    if (not error) cout << "At the position " << x << " there is a(n) " << z << '.' << endl;
    else cout << "Incorrect position." << endl;
}

