// P27341   Control C202D
// Created by arnxxau on 7/10/21.
//
#include "iostream"
using namespace std;

int main() {
    int x, y;
    while(cin >> x >> y) {
        int sum = 0;
        for (int i = x; y >= i; ++i) sum += i*i*i;
        cout << "suma dels cubs entre " << x << " i " << y << ": " << sum << endl;
    }
}

