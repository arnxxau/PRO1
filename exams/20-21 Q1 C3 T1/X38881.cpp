// X38881   Prefixes
// Created by arnxxau on 15/01/2022.
//
#include <iostream>

using namespace std;
// Pre: p, pref are strings of lowercase letters
// Post: returns true if pref is a prefix of p, false otherwise
bool prefix (const string & p, const string & pref) {
    int pref_size = pref.size();
    bool is_prefix = true;
    int i = 0;
    while (i < pref_size and is_prefix) {
        is_prefix = p[i] == pref[i];
        ++i;
    }
    return is_prefix;
}

int main() {
    int n_lines = 0;
    int n;
    while (cin >> n) {
        ++n_lines;
        string main_word;
        cin >> main_word;
        int count = 0;
        for (int i = 0; i < n - 1; ++i) {
            string pref;
            cin >> pref;
            if (prefix(main_word, pref)) ++count;
        }
        cout << "Linea " << n_lines << ": " << count + 1 << " - " << main_word << endl;
    }
}