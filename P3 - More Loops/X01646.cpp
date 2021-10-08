//   X01646   Sum of digits (2)
// Created by arnxxau on 8/10/21.
//
#include "iostream"
using namespace std;

int main() {
    int b, n;
    cin >> b;
    while (cin >> n) {
        cout << n << ": ";
        int t = 0;
        while (n != 0) {
            t += n%b;
            n /= b;
        }
        cout << t << endl;
    }
}

