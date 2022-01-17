// X28191   Deadline
// Created by arnxxau on 16/01/2022.
//
#include <iostream>

using namespace std;

int time_lapse(int time_1, int time_2) {
    int t = time_2 - time_1;
    if (t <= 0) t += 60;
    return t;
}

int main() {
    int k;
    cin >> k;
    int left, right;
    cin >> left;
    cin >> right;
    int i = 2;
    bool match = false;
    int lapse = 0;
    while (right != -1 and not match) {
        lapse += time_lapse(left, right);
        if (lapse > k) {
            match = true;
            cout << i << endl;
        }
        ++i;
        left = right;
        cin >> right;
    }
    if (not match)
         cout << 0 << endl;
}
