// P89872   Second maximum word
// Created by arnxxau on 12/10/21.
//
#include "iostream"
using namespace std;

int main() {
    string input, max, min;
    cin >> max;
    while (cin >> input) {
        if (input != max and input > min) {
            min = input;
            if (min > max) {
                input = max;
                max = min;
                min = input;
            }
        }
    }
    cout << min << endl;
}