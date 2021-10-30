// P71753   Maximum of each sequence
// Created by arnxxau on 28/10/21.
//
#include <iostream>
using namespace std;

int main() {
    int input;
    int n_seq = 0, max = 0;
    bool first;
    while (cin >> input) {
        if (n_seq == 0) {
            n_seq = input;
            if (max != 0) cout << max << endl;
            first = true;
            max = 0;
        }
        else {
            if (input > max or first) max = input;
            --n_seq;
            first = false;
        }
    }
    cout << max << endl;
}
