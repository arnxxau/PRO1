// X80452   Stamps - OPTIMISED
// Created by arnxxau on 18/10/21.
//
#include <iostream>
using namespace std;

/*
20 -> 2,6 - 5,0 = 0 5
31 -> 4,3 - 7,3 = 1 6
53 -> 7,4 - 13,1 = 7 1
127 -> 18,1 - 31, 3 = 17 2
 */
int main() {
    int n;
    while (cin >> n) {
        int p = 0, q = 0;
        while (n > 0) {
            if (n%7 != 0) {
                ++q;
                n -= 4;
            } else {
                ++p;
                n -= 7;
            }
        }
        cout << p << ' ' << q << endl;
    }
}