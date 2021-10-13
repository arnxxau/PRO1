// P37297   Control C101A
// Created by arnxxau on 20/09/2021.
//
#include <iostream>
using namespace std;

int main() {
    int x, a, b, c, d;
    cin >> x >> a >> b >> c >> d;

    if((x >= a and x <= b)  or (x >= c and x <= d)) cout << "yes" << endl;
    else cout << "no" << endl;
}