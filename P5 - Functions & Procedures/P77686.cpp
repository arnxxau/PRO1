// P77686   Palindromic numbers
// Created by arnxxau on 11/11/21.
//
#include <iostream>
using namespace std;

int reverse_number(int n) {
    int reversed = 0;
    while (n != 0) {
        reversed *= 10;
        reversed += n%10;
        n /= 10;
    }
    return reversed;
}

bool is_palindromic(int n) {
    return reverse_number(n) == n;
}

int main() {
    int n;
    cin >> n;
    cout << is_palindromic(n) << endl;
}
