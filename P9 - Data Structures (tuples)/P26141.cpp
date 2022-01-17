// P26141   Rational numbers (4)
// Created by arnxxau on 14/01/2022.
//
#include <cmath>
#include <iostream>

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

void multiply(Rational& r1, Rational& r2) {
    r1 =  simplify(r1.num * r2.num, r1.den * r2.den);
}

void add(Rational& r1, Rational& r2) {
    r1 =  simplify(r1.num*r2.den + r2.num*r1.den, r1.den*r2.den);
}

void substract(Rational& r1, Rational& r2) {
    r1 = simplify(r1.num*r2.den - r2.num*r1.den, r1.den*r2.den);
}

void divide(Rational& r1, Rational& r2) {
    r1 =  simplify(r1.num * r2.den, r1.den * r2.num);
}

void print_rational(const Rational& r) {
    cout << r.num;
    if(r.den != 1) cout << '/' << r.den;
    cout << endl;
}

int main() {
    int n, d;
    cin >> n >> d;
    Rational pre = {n, d};
    print_rational(simplify(pre.num, pre.den));
    string type;
    while (cin >> type) {
        cin >> n >> d;
        Rational current = {n, d};
        if (type == "add") add(pre, current);
        else if (type == "substract") substract(pre, current);
        else if (type == "multiply") multiply(pre, current);
        else divide(pre, current);
        print_rational(pre);
    }
}