// P52926   Girant una llista de paraules (2)
// Created by arnxxau on 30/11/21.
//
#include <iostream>
using namespace std;

void reverse_with_limit(string limit_word) {
    string p;
    cin >> p;
    if (p != limit_word) {
        reverse_with_limit(limit_word);
        cout << p << endl;
    }

}

int main() {
    reverse_with_limit("end");
}
