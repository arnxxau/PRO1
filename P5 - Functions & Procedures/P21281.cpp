// P21281   Most frequent factor
// Created by arnxxau on 12/11/21.
//
#include <iostream>
using namespace std;

void factor(int n, int& f, int& q) {
    q = f = 0;
    int i = 2;
    while (i*i <= n) {
        int current_q = 0;
        while (n%i == 0) {
            n /= i;
            ++current_q;
            if (current_q > q) q = current_q, f = i;
        }
        ++i;
    }
    if (q == 0 and f == 0) q = 1, f = n;
}

int main() {
    int n, f, q;
    cin >> n;
    factor(n, f, q);
    cout << f << ' ' << q << endl;
}
