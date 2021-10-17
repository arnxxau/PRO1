// X98097   Related odd and even positions
// Created by arnxxau on 15/10/21.
//
#include <iostream>
using namespace std;

int main() {
    int i = 1, sum_of_even = 0, sum_of_odds = 0, input;
    cin >> input;
    while (input != 0) {
        int number = input%10;
        if (i%2 == 0) sum_of_even += number;
        else sum_of_odds += number;
        input /= 10;
        ++i;
    }
    cout << sum_of_odds << ' ' << sum_of_even << endl;
    int dividend = max(sum_of_even, sum_of_odds), divisor = min(sum_of_even, sum_of_odds);
    if (sum_of_odds == 0 or sum_of_even == 0) cout << 0 << " = " << 0 << " * " << sum_of_odds+sum_of_even << endl;
    else if (dividend%divisor == 0) cout << dividend << " = " << dividend/divisor << " * " << divisor << endl;
    else cout << "nothing" << endl;
}

