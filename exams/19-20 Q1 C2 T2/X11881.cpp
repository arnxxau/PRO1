// X11881   Residual triplets
// Created by arnxxau on 11/01/2022.
//
#include <iostream>

using namespace std;

int main() {
    int n, n_total = 0;
    while (cin >> n) {
        int n_triplets = 0;
        int pre, current, post;
        cin >> pre >> current;
        for (int i = 0; i < n - 2; ++i) {
            cin >> post;
            if (pre % current == post)
                ++n_triplets;
            // window interchange
            pre = current;
            current = post;
        }
        n_total += n_triplets;
        cout << n_triplets << endl;
    }
    cout << "Total: " << n_total << endl;
}