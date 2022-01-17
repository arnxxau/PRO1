// X36692   Seqüències extremes
// Created by arnxxau on 16/01/2022.
//
#include <iostream>
#include <vector>

using namespace std;

vector<int> read_seq(int n) {
    vector<int> v (n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    return v;
}

void compute_xtreme(const vector<int>& v) {
    int v_size = v.size();
    int i = 0;
    int j = v_size - 1;
    bool found = false;
    int left = v[0], right = v[v_size - 1];
    while (i < v_size and i <= j and not found) {
        if (right < left)
            right += v[--j];
        else if (left < right)
            left += v[++i];
        else
            found = true;
    }
    if (found) cout << i << ' ' << j << endl;
    else cout << "no" << endl;
}

int main() {
    int n;
    while (cin >> n) {
        vector<int> seq = read_seq(n);
        compute_xtreme(seq);
    }
}