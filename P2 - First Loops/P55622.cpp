// P55622   Number of digits (1)
// Created by arnxxau on 24/09/2021.
//
#include <iostream>
using namespace std;

int main() {
    int number, n, original;

    cin >> number;
    original = number;
    n = 0;
    if (number == 0) n++;
    while (number != 0) {
        number/=10;
        n++;
    }

    cout << "The number of digits of " << original << " is " << n << "." << endl;
}
