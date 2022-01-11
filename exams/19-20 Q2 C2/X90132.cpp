// X90132   Simple Calculator
// Created by arnxxau on 10/1/22.
//
#include <iostream>
using namespace std;

int main() {
    int x, y;
    char type;
    cin >> x >> type >> y;
    while (x != -1) {
        int result;
        if (type == '+')
            result = x + y;
        else if (type == '-')
            result = x - y;
        else
            result = x * y;
        cout << result << endl;
        cin >> x >> type >> y;
    }
}