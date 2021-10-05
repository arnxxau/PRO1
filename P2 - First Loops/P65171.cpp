// P65171   Control C202B
// Created by arnxxau on 3/10/21.
//
#include "iostream"
using namespace std;

int main() {
    int n;
    cin >> n;
    cout.setf(ios::fixed);
    cout.precision(2);
    double sum1 = 0, sum2 = 0, x;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        sum1 += x*x;
        sum2 += x;
    }
    cout << ((1.0/(n-1)) * sum1) - ((1.0/(n*(n-1))) * sum2*sum2) << endl;
}