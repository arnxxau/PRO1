// X19753   First power of two
// Created by arnxxau on 11/01/2022.
//
#include <iostream>

using namespace std;

bool is_power_2(int n) {
    if (n == 1) return true;
    else if (n == 0 or n%2 != 0) return false;
    else return is_power_2(n / 2);
}

int main() {
    int n;
    bool match = false;
    cin >> n;
    int idx = 0;
    while (n != -1 and not match) {
        match = is_power_2(n);
        ++idx;
        cin >> n;
    }
    cout << idx * match << endl;
}