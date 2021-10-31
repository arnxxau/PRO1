// P49603   Lines in order (2)
// Created by arnxxau on 30/10/21.
//
#include <iostream>
using namespace std;

int main() {
    int n_seq, n_line = 0, last_line = 0;
    while (cin >> n_seq) {
        string pre, current;
        bool lxgcOrder = true, first = true;
        for (int i = 0; i < n_seq; ++i) {
            cin >> current;
            if (current < pre and not first) lxgcOrder = false;
            pre = current;
            first = false;
        }
        ++n_line;
        if (lxgcOrder) last_line = n_line;
    }
    if (last_line != 0) cout << "The last line in increasing order is " << last_line << '.' << endl;
    else cout << "There is no line in increasing order." << endl;
}


