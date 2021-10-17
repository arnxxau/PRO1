// P19991   Chess board (3)
// Created by arnxxau on 17/10/21.
//
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    char value;
    int d1 = 1, d2 = n, sum = 0;
    for (int row = 1; n >= row; ++row) {
        for (int clm = 1; n >= clm; ++clm) {
            cin >> value;
            if (clm == d1 or clm == d2) sum += value-'0';
        }
        ++d1;
        --d2;
    }
    cout << sum << endl;
}
