// X10549   Number without zeros
// Created by arnxxau on 08/01/2022.
//
#include <iostream>
#include <vector>

using namespace std;

// Pre: x > 0
// Post: returns the value of x without 0 digits
int remove_zeros(int x) {
    if (x == 0) return 0;
    else if (x%10 != 0) return (x%10) + remove_zeros(x / 10) * 10;
    else return (x%10) + remove_zeros(x / 10);
}

int main() {
    int n;
    while (cin >> n) {
        cout << remove_zeros(n) << endl;
    }
}

