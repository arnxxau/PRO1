// P15613   Temperatures
// Created by arnxxau on 24/09/2021.
//
#include "iostream"
using namespace std;

int main() {
    char x;
    cin >> x;
    bool is_lower_case = x>='a' and x<='z';
    bool is_vowel = x=='A' or x=='E' or x=='I' or x=='O' or x=='U'or x=='a' or x=='e' or x=='i' or x=='o' or x=='u';

    if (is_lower_case) cout << "lowercase" << endl;
    else cout << "uppercase" << endl;
    if (is_vowel) cout << "vowel" << endl;
    else cout << "consonant" << endl;
}
