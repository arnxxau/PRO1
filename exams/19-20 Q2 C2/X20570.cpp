// X20570   Sum of even digits
// Created by arnxxau on 10/1/22.
//
#include <iostream>

using namespace std;


// Pre: n >= 0
// Post: returns the sum of n's even digits
int even_digits(int n) {
    if (n == 0) return 0;
    else if (n%2 != 0) return even_digits(n/10);
    return n%10 + even_digits(n/10);
    // ...
}

int main() {
    int x;
    while (cin >> x)
        cout << even_digits(x) << endl;
}