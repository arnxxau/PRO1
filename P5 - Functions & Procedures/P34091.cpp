// P34091   Perfect numbers
// Created by arnxxau on 12/11/21.
//
#include <iostream>
using namespace std;

bool is_perfect(int n) {
    int sum = 1;
    for (int i = 2; n >= i*i; ++i) {
        if (n%i == 0) sum += i + n/i;
    }
    return n == sum and n != 0 and n != 1;
}

int main() {
    cout << is_perfect(1) << endl;
}