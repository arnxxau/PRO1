// X20419   Average length and most frequent letter
// Created by arnxxau on 10/12/21.
//
#include <iostream>
#include <vector>

using namespace std;

const int LENGTH_ALPHABET = 'z' - 'a' + 1;

vector<int> get_freq(const string& s) {
    vector<int> v (LENGTH_ALPHABET, 0);
    int s_length = s.length();
    for (int i = 0; i < s_length; ++i) {
        ++v[s[i] - 'a'];
    }
    return v;
}

char most_frequent_letter(const string& s) {
    vector<int> freq = get_freq(s);
    int max = freq[0], max_idx = 0;
    for (int i = 0; i < LENGTH_ALPHABET; ++i) {
        if (freq[i] > max) {
            max = freq[i];
            max_idx = i;
        }
    }
    return char('a' + max_idx);
}

int main() {
    int n;
    cin >> n;

    string s;
    vector<string> inputs (n);
    double average = 0;
    for (int i = 0; i < n; ++i) {
        cin >> s;
        inputs[i] = s;
        average += s.size();
    }


    cout.setf(ios::fixed);
    cout.precision(2);
    average /= n;
    cout << average << endl;

    for (int i = 0; i < n; ++i) {
        string input  = inputs[i];
        if (input.size() >= average)
            cout << input << ": " << most_frequent_letter(input) << endl;
    }
}

