// P33371   Caesar cipher
// Created by arnxxau on 13/11/21.
//
#include <iostream>
using namespace std;

char encode_char(char c, int k) {
    return ((c - 'a' + k) % ('z' - 'a' + 1)) + 'A';
}
int main() {
    int n;
    while (cin >> n) {
        char input;
        cin >> input;
        while (input != '.') {
            if (input == '_') cout << ' ';
            else if (input < 'a' or input > 'z') cout << input;
            else cout << encode_char(input, n);
            cin >> input;
        }
        cout << endl;
    }
}