// P93090   F008B. Addition of fractions
// Created by arnxxau on 14/01/2022.
//
#include <cmath>
#include <iostream>

using namespace std;

struct Fraction  {
    int num, den;
};

int gcd(int a, int b) {
    if (b == 0) return a;
    else return gcd(b, a % b);
}

Fraction simplify(int n, int d) {
    int num = abs(n), den = abs(d);
    int value_gcd = gcd(num, den);
    num /= value_gcd;
    den /= value_gcd;
    return Fraction{num, den};
}

Fraction addition(const Fraction& x, const Fraction& y) {
    return simplify(x.num*y.den + y.num*x.den, x.den*y.den);
}

void print_rational(const Fraction& r) {
    cout << r.num << '/' << r.den << endl;
}

int main() {
    int n, d;
    char c;
    cin >> n >> c >> d;
    Fraction f_pre = {n, d};
    cin >> c;
    while (c != '=') {
        cin >> n >> c >> d;
        f_pre = addition(f_pre, Fraction{n, d});
        cin >> c;
    }
    print_rational(simplify(f_pre.num, f_pre.den));
}
