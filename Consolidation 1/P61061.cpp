// P61061   Product of digits
// Created by arnxxau on 22/10/21.
//
#include <iostream>
using namespace std;

int productOfDigits(int x) {
    int result = x%10;
    x /= 10;
    while (x != 0) {
        result *= x%10;
        x /= 10;
    }
    return result;
}

int main() {
    int n;
    while (cin >> n) {
        int current_product = productOfDigits(n);
        while (current_product > 9) {
            cout << "The product of the digits of " << n << " is " << current_product << '.' << endl;
            n = current_product;
            current_product = productOfDigits(current_product);
        }
        if (current_product <= 9)
            cout << "The product of the digits of " << n << " is " << current_product << '.' << endl;
        cout << "----------" << endl;
    }
}
