// X08783   How many digits?
// Created by arnxxau on 8/10/21.
//
#include "iostream"
using namespace std;

int main() {
    int b, x;

    while (cin >> b >> x) {
        int pow = b, c = 1;
        while (pow <= x) {
            pow *= b;
            ++c;
        }
        cout << c << endl;
    }
}
