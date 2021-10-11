// P39225   I-th (1)
// Created by arnxxau on 11/10/21.
//
#include "iostream"
using namespace std;

int main() {
    int x, y, i = 0;
    cin >> x;
    while (i != x) {
        cin >> y;
        ++i;
    }
    cout << "At the position " << x << " there is a(n) " << y << '.' << endl;
}
