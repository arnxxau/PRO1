// P22467   Perfect primes
// Created by arnxxau on 25/11/21.
//
#include <iostream>
using namespace std;

bool is_prime(int n, int d) {
   // base cases
    if (n < 2) return false;
    else if (n%d == 0 and n != d) return false;
    else if (d*d > n) return true;
    // general case
    return is_prime(n, ++d);
}


int sum_of_digits(int x){
    if (x != 0) return x%10 + sum_of_digits(x/10);
    return 0;
}

bool is_perfect_prime(int n) {
    if (n/10 == 0) return is_prime(n, 2);
    return (is_prime(n, 2)) and (is_perfect_prime(sum_of_digits(n)));
}

int main() {
    int n;
    cin >> n;
    cout << sum_of_digits(n) << endl;
    cout << is_prime(n, 2) << endl;
    cout << is_perfect_prime(n) << endl;
}
