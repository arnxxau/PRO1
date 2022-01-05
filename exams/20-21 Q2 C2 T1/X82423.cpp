// X82423   Constant chains
// Created by arnxxau on 05/01/2022.
//
#include <iostream>
#include <vector>

using namespace std;

vector<int> get_freq_vector() {
    int x;
    vector<int> freq;
    cin >> x;
    int value = x, chain_idx = 0;
    freq.push_back(0);
    while(x != -1) {
        if (x == value) ++freq[chain_idx];
        else {
            freq.push_back(1);
            ++chain_idx; value = x;
        }
        cin >> x;
    }
    return freq;
}

void compute_vector_max(vector<int> v, int& max, int& max_idx) {
    max = 0, max_idx = 0;
    int v_size = v.size();
    for (int i = 0; i < v_size; ++i) {
        if (v[i] > max) {
            max = v[i]; max_idx = i + 1;
        }
    }
}

int main() {
    int n;
    cin >> n;
    for (int k = 0; k < n; ++k) {
        // compute frequency vector while reading input
        vector<int> freq = get_freq_vector();
        int max, max_idx;
        compute_vector_max(freq, max, max_idx);

        // fixing position value
        if (max_idx != 1) {
            int sum = 0;
            for (int i = 0; i < max_idx - 1; ++i) {
                sum += freq[i];
            }
            max_idx = 1 + sum;
        }
        cout << max_idx << ' ' << max << endl;
    }
}