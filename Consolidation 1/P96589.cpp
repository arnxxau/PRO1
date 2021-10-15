// P96589   Control C101C
// Created by arnxxau on 15/10/21.
//
#include <iostream>
using namespace std;

int main() {
    char input;
    cin >> input;
    if ((input >= 'A' and input <= 'Z')
        or (input >= 'a' and input <= 'z')) cout << "lletra" << endl;
    else if (input >= '0' and input <= '9') cout << "digit" << endl;
    else cout << "res" << endl;
}

