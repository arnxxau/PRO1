// P51126   Intervals (1) -  OPTIMISEDv2
// Created by arnxxau on 24/09/2021.
//
#include "iostream"
using namespace std;

int main() {
    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;
    int max = a1;
    if (max < a2) max = a2;
    int min = b1;
    if (min > b2) min = b2;

    if (max > min) cout << "[]" << endl;
    else cout << '[' << max << ',' << min << ']' << endl;
}
