// P76024   Sum of fractions
// Created by arnxxau on 17/10/21.
//
#include <iostream>
using namespace std;

int main() {
    int a, b, k;
    while (cin >> a >> b >> k) {
        double sum = 0;
        int i = 0;
        while ((a+(i*k)) <= b) {
            sum += 1/double(a+(i*k));
            ++i;
        }
        cout.setf(ios::fixed);
        cout.precision(4);
        cout << sum << endl;
    }
}
