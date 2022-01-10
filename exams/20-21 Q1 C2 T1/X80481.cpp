// X80481   Decreasing pits
// Created by arnxxau on 08/01/2022.
//
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int pre;
        cin >> pre;
        int count = 0;
        int current = 0, post = 0, n_chains = 0;
        int extra = false;
        while (pre != 0) {
            if(current < post or count == 1) post = current;
            current = pre;
            cin >> pre;
            bool down = pre > current and current < post;

            if (count == 1 and current > post)
                extra = true;

            if (down)
                ++n_chains;

            ++count;
        }
        cout << n_chains + extra << endl;
    }
}
