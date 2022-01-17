// X31870   L'última posició
// Created by arnxxau on 15/01/2022.
//

#include <iostream>
#include <vector>
using namespace std;


///////////////////////////////////////////
//
// documentation and code of effi_last_pos
// function must be here
//
///////////////////////////////////////////


//gets vector v from input chanel
void read_vector(vector<int>& v) {
    int n = v.size();
    for (int i = 0; i < n; ++i) cin >> v[i];
}


int effi_last_pos(const vector<int>& v, const int& elem) {
    int v_size = v.size();
    int left = 0, right = v_size - 1;
    while (left <= right) {
        int i = (left + right) / 2;
        if (v[i] <= elem and v[i + 1] > elem)
            return i;
        else if (v[i + 1] <= elem) left = i + 1;
        else if (v[i] > elem and v[i - 1] <= elem)
            return i - 1;
        else right = i - 1;
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    read_vector(v);
    int z;
    while (cin >> z)
        cout << effi_last_pos(v, z) << endl;
}