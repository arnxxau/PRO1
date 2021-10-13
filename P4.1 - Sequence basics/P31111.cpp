// P31111   Parentheses
// Created by arnxxau on 12/10/21.
//
#include <iostream>
using namespace std;

int main() {
    char p;
    int left = 0, right = 0;
    bool incohesion = false;
    while (cin >> p) {
        if (p == '(') ++left;
        else ++right;
        if (right > left) incohesion = true;
    }
    if ((right == left and not incohesion) or p == 0) cout << "yes" << endl;
    else cout << "no" << endl;
}