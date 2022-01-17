// X13529   Última posició del primer element repetit
// Created by arnxxau on 16/01/2022.
//
#include <iostream>
#include <vector>

using namespace std;

bool is_number_in(const vector<int>& v, const int& n) {
    int v_size = v.size();
    for (int i = 0; i < v_size; ++i) {
        if (v[i] == n) return true;
    }
    return false;
}

vector<int> read_vector(const int& n) {
    vector<int> v (n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    return v;
}

int first_rep(const vector<int>& v) {
    int v_size = v.size();

    for (int i = 0; i < v_size; ++i) {
        vector<int> already;
        for (int j = v_size - 1; j >= 0; --j) {
            if (is_number_in(already, v[i])) return i;
            if (j != i) already.push_back(v[j]);
        }
    }
    return -1;
}

int last_rep(const vector<int> v, const int& n) {
    int v_size = v.size();
    for (int i = v_size - 1; i >= 0 ; --i) {
        if (v[i] == v[n]) return i;
    }
    return -1;
}

int main() {
    int n;
    while (cin >> n) {
        vector<int> seq = read_vector(n);
        int rep = first_rep(seq);
        if (rep == -1) cout << "NO" << endl;
        else cout << seq[rep] << ' ' << last_rep(seq, rep) << endl;
    }
}
