// X79308   Zeros counter
// Created by arnxxau on 17/01/2022.
//
#include <iostream>
#include <vector>

using namespace std;

vector<int> read_seq() {
    int n;
    cin >> n;
    vector<int> v (n + 1, 0);
    for (int i = 1; i < n + 1; ++i) {
        int element;
        cin >> element;
        if (element == 0) ++v[0];
        v[i] = element;
    }
    return v;
}

void print_vector_v(vector<int>& v) {
    int v_size = v.size();
    for (int i = 1; i < v_size; ++i) {
        cout << v[0] << endl;
        if (v[i] == 0) --v[0];
    }
}

int main() {
    vector<int> v = read_seq();
    print_vector_v(v);
}
