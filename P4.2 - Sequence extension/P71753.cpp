// P71753   Maximum of each sequence
// Created by arnxxau on 28/10/21.
//
#include <iostream>
using namespace std;

int main() {
    int input, n_seq, max;
    while (cin >> input) {
        n_seq = input;
        cin >> max;
        for (int i = 0; n_seq - 1 > i; ++i) {
            cin >> input;
            if (input > max) max = input;
        }
        cout << max << endl;
    }

}
