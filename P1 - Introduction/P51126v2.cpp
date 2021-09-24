// P51126   Intervals (1) -  OPTIMISED
// Created by arnxxau on 24/09/2021.
//
#include "iostream"
using namespace std;

int main() {
    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;

    if (a1 > b2 or a2 > b1) cout << "[]" << endl;
    else cout << "[" << max(a1, a2) << "," << min(b1, b2) << "]" << endl;
}
