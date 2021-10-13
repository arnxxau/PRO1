// P78142   Average
// Created by arnxxau on 30/9/21.
//
#include <iostream>
using namespace std;

int main() {
    double x, sum = 0, c = 0;
    while (cin >> x)  {
        sum += x;
        ++c;
    }
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << sum / c << endl;
}
