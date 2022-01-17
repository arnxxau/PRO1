// P85696   Rational numbers (1)
// Created by arnxxau on 13/01/2022.
//
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

struct Rational {
    int num, den;
};

int gcd(int a, int b) {
    if (b == 0) return a;
    else return gcd(b, a % b);
}

Rational simplify(int n, int d) {
    bool neg = (n < 0 or d < 0) and (n >= 0 or d >= 0);
    int num = abs(n), den = abs(d);
    int value_gcd = gcd(num, den);
    if (n == 0) den = 1;
    else {
        num /= value_gcd;
        den /= value_gcd;
    }
    if (neg) num *= -1;
    return Rational{num, den};
}

int main() {
    int n, d;
    cin >> n >> d;

    Rational r = simplify(n, d);
    cout << r.num << '/' << r.den << endl;
}

