// X09467   Ramps
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

vector<bool> ramps_pos(const vector <int>& v) {
    int v_size = v.size();
    vector<bool> v_pos (v_size, false);
    for (int i = 0; i + 2 < v_size; ++i) {
        if ((v[i] > v[i + 1] and v[i + 1] > v[i + 2])
            or (v[i] < v[i + 1] and v[i + 1] < v[i + 2]))
            v_pos[i] = true;
    }
    return v_pos;
}

int pot_conflictive(const vector <bool>& b) {
    int b_size = b.size();
    int pot = 0;
    for (int i = 0; i + 2 < b_size; ++i) {
            if (b[i])
                pot += b[i + 1] + b[i + 2];
    }
    return pot;
}


int main() {
    int n;
    while (cin >> n) {
        vector<int> v = create_vector(n);
        vector<bool> b = ramps_pos(v);
        cout << "positions with a ramp:";
        for (int i = 0; i < n; ++i) {
            if (b[i])
                cout << ' ' <<  i;
        }
        cout << endl;
        cout << "potentially conflictive: " << pot_conflictive(b) << endl;
        cout << "---" << endl;
    }
}
