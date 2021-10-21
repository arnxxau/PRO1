// P12061   Words between two words
// Created by arnxxau on 12/10/21.
//
#include <iostream>
using namespace std;

int main() {
    string word;
    bool start = false;
    int i = 0;
    while(cin >> word and word != "end") {
        if (start) ++i;
        else if (word == "beginning") start = true;
    }
    if (start and word == "end") cout << i << endl;
    else cout << "wrong sequence" << endl;
}