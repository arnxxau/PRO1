// P97969   Counting a's (1)
// Created by arnxxau on 30/9/21.
//
#include <iostream>
using namespace std;

int main() {
    char x;
    cin >> x;
    int c = 0;
    while (x != '.') {
        if (x == 'a') ++c;
        cin >> x;
    }
    cout << c << endl;
}