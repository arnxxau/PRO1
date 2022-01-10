// X93206   Different names
// Created by arnxxau on 08/01/2022.
//
#include <iostream>
#include <vector>

using namespace std;

bool is_contained(const vector<string>& v, const string& s) {
    int v_size = v.size();
    bool contained = false;
    for (int i = 0; i < v_size; ++i) {
        if (v[i] == s) contained = true;
    }
    return contained;
}

int main() {
    int n;
    while(cin >> n) {
        vector<string> names;
        string s;
        for (int i = 0; i < n; ++i) {
            cin >> s;
            if (not is_contained(names, s)) {
                cout << s << endl;
                names.push_back(s);
            }
        }
        cout << endl;
    }
}
