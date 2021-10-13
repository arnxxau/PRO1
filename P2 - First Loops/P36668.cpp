// P36668   Sum of squares
// Created by arnxxau on 21/9/21.
//
#include <iostream>
using namespace std;

int main() {
    int x, sum = 0;
    cin >> x;
    for (int i = 1; x >= i; i++) sum += i*i;
    cout << sum << endl;
}