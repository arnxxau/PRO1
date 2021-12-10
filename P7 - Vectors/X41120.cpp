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
    for (auto x : obtain_peaks(v))
        cout << x << ' ';
    cout << endl;
}
