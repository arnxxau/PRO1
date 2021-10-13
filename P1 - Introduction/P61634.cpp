// P61634   Leap years
// Created by arnxxau on 20/09/2021.
//
#include <iostream>
using namespace  std;

int main() {
    int y;
    bool g = false;
    cin >> y;

    int c = y/100;
    if(y - c*100 == 0) {
        if(c%4 == 0) g = true;
        y = 1;
    }
    if(y%4 == 0) g = true;

    if (g) cout << "YES" << endl;
    else cout << "NO" << endl;
}