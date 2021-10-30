// P87523   Hello-bye
// Created by arnxxau on 28/10/21.
//
#include <iostream>
using namespace std;

int main() {
    bool found = false;
    char letter;
    cin >> letter;
    while (letter != '.' and !found) {
        if (letter == 'h') {
            cin >> letter;
            if (letter == 'e') {
                cin >> letter;
                if (letter == 'l') {
                    cin >> letter;
                    if (letter == 'l') {
                        cin >> letter;
                        if (letter == 'o') {
                            found = true;
                        }
                    }
                }
            }
        }
        else cin >> letter;
    }
    if (found) cout << "hello" << endl;
    else cout << "bye" << endl;
}

