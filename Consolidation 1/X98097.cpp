// X98097   Related odd and even positions
// Created by arnxxau on 15/10/21.
//
#include <iostream>
using namespace std;

int main() {
    char input;
    int i = 2, sum_of_even = 0, sum_of_odds = 0;
    while (cin >> input) {
        int number = input - '0';
        if (i%2 == 0) sum_of_even += number;
        else sum_of_odds += number;
        ++i;
    }
    if (i%2 != 0) {
        int b;
        b = sum_of_even;
        sum_of_even = sum_of_odds;
        sum_of_odds = b;
    }
    cout << sum_of_odds << ' ' << sum_of_even << endl;
    if (sum_of_odds == 0 or sum_of_even == 0) cout << 0 << " = " << 0 << " * " << sum_of_odds+sum_of_even << endl;
    else if (sum_of_even%sum_of_odds == 0) cout << sum_of_even << " = " << sum_of_even/sum_of_odds << " * " << sum_of_odds << endl;
    else if (sum_of_odds%sum_of_even == 0) cout << sum_of_odds << " = " << sum_of_odds/sum_of_even << " * " << sum_of_even << endl;
    else cout << "nothing" << endl;
}

