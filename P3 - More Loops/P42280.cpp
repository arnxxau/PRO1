// P42280   Chess board (1)
// Created by arnxxau on 8/10/21.
//
#include "iostream"
using namespace std;

int main() {
    int row, clm;
    cin >> row >> clm;
    int sum = 0;
    char n;
    for (int i = 0; row*clm > i; ++i) {
        cin >> n;
        sum += n-'0';
    }
    cout << sum << endl;
}

