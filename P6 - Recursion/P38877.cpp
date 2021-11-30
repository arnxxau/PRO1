// P38877   Girant una llista de paraules (4)
// Created by arnxxau on 30/11/21.
//
#include <iostream>
using namespace std;

void reverse(int& limit) {
    string p;
    // base case -> no new entries
    if (cin >> p) {
        reverse(limit);
        if (limit-- > 0)
            cout << p << endl;
    }
}

int main() {
    int limit;
    cin >> limit;
    reverse(limit);
}
