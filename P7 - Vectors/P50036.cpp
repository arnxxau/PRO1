// P50036   Horner scheme
// Created by arnxxau on 5/12/21.
//
#include <iostream>
#include <vector>

using namespace std;

int evaluate(const vector<int>& p, int x) {
    int p_size = p.size();
    int result = 0;
    for (int i = p_size - 1; i > 0; --i) {
        result += p[i];
        result *= x;
    }
    result += p[0];
    return result;
}

int main() {
    vector<int> v = {-1, -10};
    cout << evaluate(v, 3) << endl;
}

