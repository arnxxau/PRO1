// X74981   Breakeven
// Created by arnxxau on 11/01/2022.
// NOT FINISHED
#include <iostream>
#include <vector>

using namespace std;

int compute_total_sum(const vector<int>& v) {
    int v_size = v.size();
    int total_sum = 0;
    for (int i = 0; i < v_size; ++i) {
        total_sum += v[i];
    }
    return total_sum;
}

int abs(int x, bool& negative) {
    if (x > 0) return x;
    else {
        negative = true;
        return x * -1;
    }
}

int compute_breakeven(const vector<int>& v) {
    int v_size = v.size();
    int breakeven = compute_total_sum(v);
    int i = 0;
    int sum = 0;
    bool match = false;
    bool negative = false;
    while (i < v_size and not match) {
        sum += abs(v[i], negative);
        breakeven -= abs(v[i], negative);
        //cout << breakeven << ' ' << sum << " i: " << i << endl;
        match = sum == breakeven;
        ++i;
    }
    if (match) return i + 1 * not negative;
    else return -1;
}

vector<int> read_vector(const int& n) {
    vector<int> v (n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    return v;
}

int main() {
    int n;
    cin >> n;
    vector<int> v = read_vector(n);
    cout << compute_breakeven(v) << endl;
}
