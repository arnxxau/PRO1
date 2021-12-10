// P24301   Concatenation of vectors
// Created by arnxxau on 10/12/21.
//
#include <iostream>
#include <vector>

using namespace std;

vector<int> create_vector(int s) {
    vector<int> v (s);
    for (int i = 0; i < s; ++i) {
        cin >> v[i];
    }
    return v;
}

vector<int> concatenation(const vector<int>& v1, const vector<int>& v2) {
    int v1_size = v1.size(), v2_size = v2.size();
    vector<int> v_finale (v1_size + v2_size);
    for (int i = 0; i < v1_size; ++i) {
        v_finale[i] = v1[i];
    }
    for (int i = v1_size; i < v1_size + v2_size; ++i) {
        v_finale[i] = v2[i - v1_size];
    }
    return v_finale;
}

int main() {
    int n1;
    cin >> n1;
    vector<int> v1 = create_vector(n1);
    int n2;
    cin >> n2;
    vector<int> v2 = create_vector(n2);
    vector<int> v_res = concatenation(v1, v2);
    for (int i = 0; i < n1 + n2; ++i) {
        cout << v_res[i] << ' ';
    }
    cout << endl;
}