// P67454   Counting a's (2)
// Created by arnxxau on 9/10/21.
//
#include "iostream"
using namespace std;

int main() {
    char c = ' ';
    int i = 0;
    while (c != '.') {
        cin >> c;
        if (c == 'a') ++i;
    }
    cout << i << endl;
}
