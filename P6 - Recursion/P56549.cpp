// P56549   Changes of base
// Created by arnxxau on 19/11/21.
//
#include <iostream>
using namespace std;

void  change_base(int n, int b){
    if (n != 0) {
        change_base(n/b, b);
        cout << hex << uppercase << n%b;
    }
}

int main() {
    int input;
    while (cin >> input) {
        cout << dec <<input << " = ";
        if (input == 0) cout << "0, 0, 0" << endl;
        else {
            change_base(input, 2);
            cout << ", ";
            change_base(input, 8);
            cout << ", ";
            change_base(input, 16);
            cout << endl;  
        }
    }
}
