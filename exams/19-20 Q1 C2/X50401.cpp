// X50401   Null triplets
// Created by arnxxau on 10/1/22.
//
#include <iostream>

using namespace std;

bool is_null(const int& a, const int& b, const int& c) {
    return b == a + c;
}

int main() {
    int n0;
    int total_triplets = 0;
    cin >> n0;
    for (int i = 0; i < n0; ++i) {
        int n;
        cin >> n;
        int a = 0, b = 0, c = 0;
        int n_triplets = 0;
        for (int k = 0; k < n; ++k) {
            c = b;
            b = a;
            cin >> a;
            if (is_null(a, b, c) and k > 1)
                ++n_triplets;
        }
        cout << n_triplets << endl;
        total_triplets += n_triplets;
    }
    cout << "Total: " << total_triplets << endl;
}