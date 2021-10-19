// X80452   Stamps - INEFFICIENT SOLUTION DO NOT TRY
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
        int q = 0, to_completeq = 0, p = 0, to_completep = 0, i = 0;
        while (7*p+to_completep*4 != n and 4*q+to_completeq*7 != n) {
            p = n/7 - i;
            to_completep = (n - (p*7))/4;
            q = n/4 - i;
            to_completeq = (n - (q*4))/7;
            ++i;
        }
        if (7*p+to_completep*4 == n) cout << p << ' ' << to_completep << endl;
        else cout << to_completeq << ' ' << q << endl;
    }
}