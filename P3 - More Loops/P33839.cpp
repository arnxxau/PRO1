// P33839   Sum of digits
// Created by arnxxau on 8/10/21.
//
#include "iostream"
using namespace std;

int main() {
    int x;
    while (cin >> x) {
        int t = 0;
        cout << "The sum of the digits of " << x << " is ";
        while (x != 0) {
            t += x%10;
            x /= 10;
        }
        cout << t << '.' << endl;
    }
}

