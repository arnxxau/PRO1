// X43191   Power pairs
// Created by arnxxau on 15/01/2022.
//
#include <iostream>

using namespace std;
// Pre: n >= 0, base > 1
// Post: returns true when n is a power of base.
//       returns false otherwise
bool is_power(int n, int base) {
    if (n == 1) return true;
    else if (n % base != 0) return false;
    else return is_power(n / base, base);
}

int main() {
    int left, right;
    while (cin >> left >> right) {
        int count = 0;
        while (right != 0) {

            int minimum = min(left, right);
            int sqrt = 2;
            bool power_pairs = minimum == 1;
            while (sqrt <= minimum and not power_pairs) {
                if (is_power(left, sqrt) and is_power(right, sqrt))
                    power_pairs = true;
                ++sqrt;
            }

            count += power_pairs;
            left = right;
            cin >> right;
        }
        cout << count << endl;
    }
}

