// P29428   F002A. Infixes
// Created by arnxxau on 10/12/21.
//
#include <iostream>
#include <vector>

using namespace std;

bool is_contained(const string& s0, const string& s1) {
    int s0_size = s0.size(), s1_size = s1.size();
    if (s0_size < s1_size) return false;
    bool match = false;
    int i = 0;
    while (i < s0_size and not match) {
        match = false;
        if (s0[i] == s1[0] and s0_size - i >= s1_size) {
            match = true;
            int j = 0;
            while (j < s1_size and match) {
                match = s0[i + j] == s1[j];
                ++j;
            }
        }
         ++i;
    }
    return match;
}

vector<string> create_vector(int size) {
    vector<string> v (size);
    for (int i = 0; i < size; ++i) {
        cin >> v[i];
    }
    return v;
}

int main() {
    int n;
    cin >> n;
    vector<string> v = create_vector(n);
    for (int i = 0; i < n; ++i) {
        cout << v[i] << ':';
        for (int j = 0; j < n; ++j) {
            if (is_contained(v[i], v[j]))
                cout << ' ' << v[j];
        }
        cout << endl;
    }
}