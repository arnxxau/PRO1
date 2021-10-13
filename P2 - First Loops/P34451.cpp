// P34451   Control C201C
// Created by arnxxau on 5/10/21.
//
#include <iostream>
using namespace std;

int main() {
    int n, x, i = 0;
    cin >> n;
    while (cin >> x) if (x % n == 0) ++i;
    cout << i << endl;
}