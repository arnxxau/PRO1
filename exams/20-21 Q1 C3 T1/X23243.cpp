// X23243   Sum of digits and predecessor
// Created by arnxxau on 15/01/2022.
//
#include <iostream>

using namespace std;

int get_sum_digits(int n) {
    if (n / 10 == 0) return n;
    else return n%10 + get_sum_digits(n / 10);
}

int main() {
    int left, right;
    cin >> left;
    int count = 0;
    while (cin >> right) {
        if (left % get_sum_digits(right) == 0)
            ++count;
        left = right;
    }
    cout << count << endl;
}