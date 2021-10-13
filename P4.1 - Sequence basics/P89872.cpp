// P89872   Second maximum word
// Created by arnxxau on 12/10/21.
//
#include <iostream>
using namespace std;

int main() {
    string input, max_pivot, max;
    cin >> max_pivot;
    while (cin >> input) {
        if (input != max_pivot and input > max) {
            max = input;
            if (max > max_pivot) {
                input = max_pivot;
                max_pivot = max;
                max = input;
            }
        }
    }
    cout << max << endl;
}