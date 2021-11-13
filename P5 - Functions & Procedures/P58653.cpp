// P58653   Classification of characters (2)
// Created by arnxxau on 12/11/21.
//
#include <iostream>
using namespace std;

void print_line(char c, string s, bool b) {
    cout << s << "('" << c << "') = ";
    if (b) cout << "true" << endl;
    else cout << "false" << endl;
}

int main() {
    char input;
    cin >> input;
    print_line(input, "letter", ('A' <= input and input <= 'Z') or ('a' <= input and input <= 'z'));
    bool is_vowel = input == 'a' or input == 'e' or input == 'i' or input == 'o' or input == 'u'
                or input == 'A' or input == 'E' or input == 'I' or input == 'O' or input == 'U';
    print_line(input, "vowel", is_vowel);
    print_line(input, "consonant", (('A' <= input and input <= 'Z') or ('a' <= input and input <= 'z')) and not is_vowel);
    print_line(input, "uppercase", 'A' <= input and input <= 'Z');
    print_line(input, "lowercase",  'a' <= input and input <= 'z');
    print_line(input, "digit", input >= '0' and input <= '9');
}