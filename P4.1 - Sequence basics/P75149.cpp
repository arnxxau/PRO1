// P75149   Looking for an a
// Created by arnxxau on 11/10/21.
//
#include <iostream>
using namespace std;

int main() {
    char c = ' ';
    while (c != '.' and c != 'a') {
        cin >> c;
    }
    if (c == 'a') cout << "yes" << endl;
    else cout << "no" << endl;
}


