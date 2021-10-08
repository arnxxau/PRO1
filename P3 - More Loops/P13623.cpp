// P13623   Chess board (2)
// Created by arnxxau on 8/10/21.
//
#include "iostream"
using namespace std;

int main() {
    int row, clm;
    cin >> row >> clm;
    int sum = 0;
    for (int i = 0; row > i; ++i) {
        for (int j = 0; clm > j; ++j) {
            char n;
            cin >> n;
            if ((i%2 == 0 and j%2 == 0) or
                (i%2 != 0 and j%2 != 0)) sum += n-'0';
        }
    }
    cout << sum << endl;
}


