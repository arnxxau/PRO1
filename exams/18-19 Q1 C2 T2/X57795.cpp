// X57795   Divisors located in odd positions
// Created by arnxxau on 10/1/22.
//
#include <iostream>

using namespace std;


bool divisors_odd(int x, int y) {
    if (y % (x%10) != 0) return false;
    else if (x / 100 == 0) return true;
    else return divisors_odd(x/100, y);
}

int main() {
    int x, y;
    while (cin >> x >> y) {
        if(divisors_odd(x, y))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

