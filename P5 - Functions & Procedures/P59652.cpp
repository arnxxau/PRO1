// P59652   Read a simplify number (1)
// Created by arnxxau on 11/11/21.
//
#include <iostream>
using namespace std;

int get_mcd(int a, int b) {
    while (a != b) {
        if (a > b) a -= b;
        else b -= a;
    }
    return a;
}

void read_rational(int& num, int& den) {
    char slash;
    cin >> num >> slash >> den;
    int mcd = get_mcd(num, den);
    num /= mcd;
    den /= mcd;
}

int main() {
    int num, den;
    read_rational(num, den);
    cout << num << ' ' << den << endl;
}