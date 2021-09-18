//
// Created by arnxxau on 20/09/2021.
//
#include "iostream"
using namespace std;

int main() {
    int x, a, b, c, d;
    cin >> x >> a >> b >> c >> d;

    if((x >= a && x <= b)  || (x >= c && x <= d)) cout << "yes" << endl;
    else cout << "no" << endl;
}