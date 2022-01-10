//
// Created by arnxxau on 09/01/2022.
//
#include <iostream>

using namespace std;

int main() {
    string s;
    bool c = false, o = false, g = false, done = false;
    while (cin >> s and not done) {
        if (s == "Catboy" and not c) {
            c = true;
            cout << s << endl;
        }
        else if (s == "Owlette" and not o) {
            o = true;
            cout << s << endl;
        }
        else if (s == "Gekko" and not g){
            g = true;
            cout << s << endl;
        }
        done = c and o and g;
    }
}

