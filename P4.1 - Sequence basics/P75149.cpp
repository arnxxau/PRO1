// P75149   Looking for an a
// Created by arnxxau on 11/10/21.
//
#include <iostream>
using namespace std;

int main() {
    char c = ' ';
    bool i = false;
    while (c != '.') {
        cin >> c;
        if (c == 'a') i = true;
    }
    if (i) cout << "yes" << endl;
    else cout << "no" << endl;
}


