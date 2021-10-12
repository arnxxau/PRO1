// P12061   Words between two words
// Created by arnxxau on 12/10/21.
//
#include "iostream"
using namespace std;

int main() {
    string x;
    bool start = false, end = false;
    int i = 0;
    while(cin >> x and not end) {
        if (x == "end") end = true;
        else if (start) ++i;
        else if (x == "beginning") start = true;
    }
    if (start and end) cout << i << endl;
    else cout << "wrong sequence" << endl;
}
