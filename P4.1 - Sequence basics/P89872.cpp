// P89872   Second maximum word
// Created by arnxxau on 12/10/21.
//
#include <iostream>
using namespace std;

int main() {
    string input, max_2 = "", max_1 = "";
    while (cin >> input) {
        if (input != max_1 and input > max_2) {
            max_2 = input;
            if (max_2 > max_1) {
                input = max_1;
                max_1 = max_2;
                max_2 = input;
            }
        }
    }
    if (max_2 != "") cout << max_2 << endl;
}