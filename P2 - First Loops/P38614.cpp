// P38614   Control C201A
// Created by arnxxau on 5/10/21.
//
#include <iostream>
using namespace std;

int main() {
    int x, sum = 0, i = 1;
    cin >> x;
    cout << x;
    while (x != 0) {
        if (i%2 != 0) sum += x%10;
        x /= 10;
        ++i;
    }
    if (sum%2 == 0) cout << " IS COOL" << endl;
    else cout << " IS NOT COOL" << endl;
}