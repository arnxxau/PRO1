// P31111   Parentheses
// Created by arnxxau on 12/10/21.
//
#include <iostream>
using namespace std;

int main() {
    char p;
    int counter = 0;
    while (cin >> p and counter >= 0) {
        if (p == '(') ++counter;
        else --counter;
    }
    if (counter == 0) cout << "yes" << endl;
    else cout << "no" << endl;
}