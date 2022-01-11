// X96982   Suffix sums
// Created by arnxxau on 10/1/22.
//
#include <iostream>
#include <vector>

using namespace std;
bool find_element(const vector<int>& v, int &e) {
    int v_size = v.size();
    int sum = 0;
    for (int i = v_size - 1; i >= 0; --i) {
        e = v[i];
        if (sum == v[i])
            return true;
        sum += v[i];
    }
    return false;
}

void fill_vector(vector<int>& v) {
    int v_size = v.size();
    for (int i = 0; i < v_size; ++i) {
        cin >> v[i];
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> seq(n);
    fill_vector(seq);

    // ADD YOUR CODE HERE

    int elem;
    if (find_element(seq, elem)) cout << elem << endl;
    else cout << "not found" << endl;
}
