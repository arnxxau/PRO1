// P71398   Procediment per al dígit màxim i mínim
// Created by arnxxau on 30/11/21.
//
#include <iostream>
using namespace std;

void digit_maxim_i_minim(int n, int& maxim, int& minim) {
    // base case -> n < 10
    if (n < 10) {
        minim = n;
        maxim = n;
    }
    else
        digit_maxim_i_minim(n/10, maxim, minim);
    if (n%10 > maxim) maxim = n%10;
    else if (n%10 < minim) minim = n%10;
}

int main() {
    int n, max, min;
    cin >> n;
    digit_maxim_i_minim(n, max, min);
    cout << max << ' ' << min << endl;
}