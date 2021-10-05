// P98960   Uppercase and lowercase letters
// Created by arnxxau on 13/9/21.
//
#include "iostream"
using namespace std;

int main() {
    char x;
    cin >> x;
    if (x >= 'a' and x <= 'z') x = x - ('a'-'A');
    else x = x + ('a'-'A');
    cout << x << endl;
}