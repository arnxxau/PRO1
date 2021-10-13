// P37297   Control C101A
// Created by arnxxau on 20/09/2021.
//
#include <iostream>
using namespace std;

int charToInt(char c) {
    if (c == '1') return 1;
    else if (c == '2') return 2;
    else if (c == '3') return 3;
    else if (c == '4') return 4;
    else if (c == '5') return 5;
    else if (c == '6') return 6;
    else if (c == '7') return 7;
    else if (c == '8') return 8;
    else if (c == '9') return 9;
    else return 0;
}
int main() {
    int x;
    cin >> x;
    string n = to_string(x);
    cout << charToInt(n[n.size()-1]) + charToInt(n[n.size()-2]) + charToInt(n[n.size()-3]) << endl;
}
