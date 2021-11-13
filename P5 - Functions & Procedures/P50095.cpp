// P50095   Next prime number
// Created by arnxxau on 13/11/21.
//
#include <iostream>
using namespace std;

bool is_prime(int n) {
    bool compound = n <= 1;
    int d = 2;
    while (n >= d*d and not compound) {
        if (n%d == 0 and n != d) compound = true;
        ++d;
    }
    return not compound;
}

int main(){
    int n;
    while (cin >> n and is_prime(n)) {
        ++n;
        while (not is_prime(n)) ++n;
        cout << n << endl;
    }
}