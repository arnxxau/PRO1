// X72571   Coins on the chessboard (R)
// Created by arnxxau on 7/11/21.
//
#include <iostream>
using namespace std;

int main() {
    int row, clm;
    cin >> row >> clm;
    int total = 0, odd = 0;
    for (int i = 1; row >= i; ++i) {
        for (int j = 0; j < clm; ++j) {
            char coin;
            cin >> coin;
            int value = coin-'0';
            if (i%2 != 0) odd += value;
            total += value;
        }
    }
    cout << total << ' ' << odd << endl;
}
