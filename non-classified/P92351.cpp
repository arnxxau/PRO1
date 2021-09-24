// P92351   Integer division and remainder of an integer number by a natural number
// Created by arnxxau on 21/09/2021.
//
#include "iostream"
using namespace std;

int main() {
    int d, b;
    cin >> d >> b;
    if (d < 0 and d%b != 0) cout <<  d/b - 1 << " " << d%b+b << endl;
    else cout << d/b << " " << d%b << endl;
}
