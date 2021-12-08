// P99133   Reversing words (2)
// Created by arnxxau on 5/12/21.
//
#include <iostream>
#include <vector>
using namespace std;

void print_reverse(string s) {
    int s_length = s.length();
    for (int i = s_length - 1; i >= 0; --i) {
        cout << s[i];
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    vector<string> v (n);
    for (int i = n - 1; i >= 0; --i) {
        cin >> v[i];
    }
    for (int i = 0; i < n; ++i) {
        print_reverse(v[i]);
    }
}