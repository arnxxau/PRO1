// X25951   Parelles pitagòriques
// Created by arnxxau on 10/1/22.
//
#include <iostream>

using namespace std;

bool is_perfect_sqrt(int x) {
    int count = 1;
    while (count*count < x) {
        ++count;
    }
    return x == count*count;
}

bool is_ptg(int a, int b) {
    return is_perfect_sqrt(a * a + b * b);
}

int main() {
    int a = 0, b = 0, b_aux = 0;
    int pos = -1;
    bool match = false;
    while(not match and cin >> a) {
        b_aux = b;
        match = is_ptg(a, b) and pos != -1;
        ++pos;
        b = a;
    }
    if (match)
        cout << "First pythagorean pair "
            << b_aux << ' '  << a << " at position " << pos << endl;
    else
        cout << "No pythagorean pairs" << endl;
}