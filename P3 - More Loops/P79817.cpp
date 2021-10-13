// P79817   Powers
// Created by arnxxau on 8/10/21.
//
#include <iostream>
using namespace std;

int main() {
    int a, b;
    while (cin >> a >> b) {
        int t = a;
        for (int i = 1; b > i; ++i) t *= a;
        if (b == 0) t = 1;
        cout << t << endl;
    }
}
