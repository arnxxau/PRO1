// P12675   Common elements
// Created by arnxxau on 01/12/21
//
#include <iostream>
#include <vector>

using namespace std;

int common_elements(const vector<int>& X, const vector<int>& Y) {
    int count = 0;
    int i = 0, j = 0;
    int x_size = X.size(), y_size = Y.size();
    while (i < x_size and j < y_size) {
        if (X[i] == Y[j]) {
            ++count;
            ++i;
            ++j;
        }
        else if (X[i] < Y[j]) ++i;
        else ++j;
    }
    return count;
}

void read_data(vector<int>& v) {
    int v_size = v.size();
    for (int i = 0; v_size > i; ++i) {
        cin >> v[i];
    }
}

int main() {
    vector<int> X(4);
    read_data(X);
    vector <int> Y(5);
    read_data(Y);
   cout << common_elements(X, Y) << endl;
}
