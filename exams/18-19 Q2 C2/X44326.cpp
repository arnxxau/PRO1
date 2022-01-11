// X44326   Sum integers in each line
// Created by arnxxau on 11/01/2022.
//
#include <iostream>

using namespace std;

void update_sum(const char& c, int& num, bool& multiply) {
    if (multiply)
        num *= 10;
    num += c - '0';
}

bool is_digit(const char& c) {
    return '0' <= c and c <= '9';
}

int main() {
    char c;
    cin >> c;
    while (cin >> c) {
        int sum = 0;
        int num = 0;
        bool multiply = false;
        while (c != '.') {
            if (is_digit(c)) {
                update_sum(c, num, multiply);
                multiply = true;
            } else {
                sum += num;
                num = 0;
                multiply = false;
            }
            cin >> c;
        }
        cout << sum + num << endl;
    }
}
