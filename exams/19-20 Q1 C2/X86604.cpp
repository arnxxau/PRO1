// X86604   Rearranging the input
// Created by arnxxau on 11/1/22.
//
#include <iostream>

using namespace std;

void consonantes_vocales();


// Pre: c is a lowercase letter
// Post: returns  true when c is a vowel,  returns false otherwise
bool es_vocal(char c) {
    return c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u';
}

// Pre: a lowercase letter sequence in the input
// Post: in the output appears  first input consonants in the same order,
//       then vowels in reverse order
void consonantes_vocales() {
    char c;
    if (cin >> c) {
        if (not es_vocal(c)) {
            cout << c;
            consonantes_vocales();
        } else {
            consonantes_vocales();
            cout << c;
        }
    }
    // your code here
}

int main() {
    consonantes_vocales();
    cout << endl;
}