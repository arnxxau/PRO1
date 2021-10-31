// P35957   Middle digits
// Created by arnxxau on 30/10/21.
//
#include <iostream>
using namespace std;

int getMiddleNumber(int x) {
    int n_digits = 0, b = x;
    while (b != 0) {
            b /= 10;
            ++n_digits;
    }
    if (n_digits % 2 == 0 and x != 0) return -1;
    for (int i = 0; i < n_digits/2; ++i) x /= 10;
    return x%10;
}

int main() {
    int n, selected_n;
    cin >> n >> selected_n;
    selected_n = getMiddleNumber(selected_n);
    int i = 0, input;
    bool finished = false;
    while (n*2 - 1 > i and not finished and selected_n != -1) {
        cin >> input;
        ++i;
        if (getMiddleNumber(input) != selected_n) finished = true;
    }
    if (n*2 - 1 == i and not finished) cout << '=' << endl;
    else if (i%2 != 0) cout << 'A' << endl;
    else cout << 'B' << endl;
}
