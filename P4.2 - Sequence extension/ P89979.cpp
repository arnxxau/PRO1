// P89979   Lines in order (1)
// Created by arnxxau on 30/10/21.
//
#include <iostream>
using namespace std;

int main() {
    int n_seq, n_line = 0;
    bool notLxgcOrder = true;
    while (cin >> n_seq and notLxgcOrder) {
        string pre;
        cin >> pre;
        string current;
        for (int i = 0; i < n_seq - 1; ++i) {
            cin >> current;
            if (current < pre) notLxgcOrder = false;
            pre = current;
        }
        ++n_line;
        if (notLxgcOrder) {
            cout << "The first line in increasing order is " << n_line << '.' << endl;
            notLxgcOrder = false;
        } else
            notLxgcOrder = true;
    }
    if (notLxgcOrder) cout << "There is no line in increasing order." << endl;
}

