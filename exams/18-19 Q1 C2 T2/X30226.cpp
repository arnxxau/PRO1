// X30226   Magical triplets
// Created by arnxxau on 10/1/22.
//
#include <iostream>

using namespace std;

bool is_magic(const int& pre, const int& current, const int& post, const int& n_iter) {
    return (pre%2 != 0 and current%2 == 0 and post != 0 and n_iter > 1)
    or (pre%2 == 0 and current%2 != 0 and post%2 == 0 and n_iter > 1);
}

int main() {
    int pre, current, post;
    int n_magic, seq_count = 0;
    bool found = false;
    while (cin >> pre and not found) {
        ++seq_count;
        n_magic = 0, current = 0, post = 0;
        int n_iter = 0;
        while (pre != 0 and not found) {
            if (is_magic(pre, current, post, n_iter))
                ++n_magic;
            ++n_iter;
            post = current;
            current = pre;
            cin >> pre;
            found = n_magic == 3;
        }

    }
    if (found)
        cout << seq_count << endl;
    else
        cout << "none" << endl;
}
