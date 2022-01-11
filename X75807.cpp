// X75807   Rearranging the input (2)
// Created by arnxxau on 10/1/22.
//
#include <iostream>

using namespace std;

// Pre: c is a character
// Post: returns true if c is a letter, false otherwise
bool es_letra(char c) {
    return ('a' <= c and c <= 'z') or ('A' <= c and c <= 'Z');
}

// Pre: a sequence of characters in the input
// Post: it prints the very same input characters but reordered.
//       First those that are not letters (in the same order in which
//       they appeared) and then the letters (in reverse order)
void signos_letras() {
    char c;
    while (cin >> c) {
        if (not es_letra(c))
            cout << c;
        else {
            signos_letras();
            cout << c;
        }
    }
}

int main() {
    signos_letras();
    cout << endl;
}


