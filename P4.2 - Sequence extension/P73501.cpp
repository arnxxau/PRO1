// P73501   Increasing pairs
// Created by arnxxau on 30/10/21.
//
#include <iostream>
using namespace std;

int main() {
    int n_seq;
    cin >> n_seq;
    for (int i = 0; i < n_seq; ++i) {
        int current = 1, pre, pairs = 0;
        cin >> pre;
        while (current != 0 and pre != 0) {
            cin >> current;
            if (current > pre) ++pairs;
            pre = current;
        }
        cout << pairs << endl;
    }
}
