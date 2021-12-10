// X41120   Vector of mountains
// Created by arnxxau on 10/12/21.
//
#include <iostream>
#include <vector>

using namespace std;

vector<int> obtain_peaks(const vector<int>& v) {
    vector<int> peaks;
    int first, second, third;
    int i = 0;
    int v_size = v.size();
    while (i+2 < v_size) {
        first = v[i];
        second = v[i+1];
        third = v[i+2];
        if (first < second and second > third)
            peaks.push_back(second);
        ++i;
    }
    return peaks;
}

int main() {
    int n;
    cin >> n;
    vector<int> v (n);
    for (int i = 0; n > i; ++i) cin >> v[i];
    vector<int> peaks = obtain_peaks(v);
    int p_size = peaks.size();

    cout << p_size << ':';
    vector<int> filtered;
    for (int i = 0; i < p_size; ++i) {
        if (peaks[i] > peaks[p_size - 1])
            filtered.push_back(peaks[i]);
        cout << ' ' << peaks[i];
    }
    cout << endl;
    int f_size = filtered.size();
    for (int i = 0; i < f_size; ++i) {
        cout << filtered[i];
        if (i != f_size - 1)
            cout << ' ';
    }
    if (f_size == 0)
        cout << '-';
    cout << endl;
}
