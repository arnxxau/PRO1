// X50286   How many hello?
// Created by arnxxau on 19/10/21.
//
#include <iostream>
using namespace std;

int main() {
    string input;
    int i = 0;
    while(cin >> input) if (input == "hello") ++i;
    cout << i << endl;
}

