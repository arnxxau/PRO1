// X16146   Position of the last element less than the average of even values
// Created by arnxxau on 08/01/2022.
//
#include <iostream>
#include <vector>

using namespace std;

// Pre: --
// Post: returns the position of the last element in v smaller than x, -1 if that element does not exist
int last_position_of(const vector<int>& v, double x) {
    int v_size = v.size();
    int i = v_size - 1;
    while (i >= 0) {
        if (v[i] < x)
            return i;
        --i;
    }
    return -1;
}

double even_average(const vector<int>& v) {
    int v_size = v.size();
    int sum = 0, elements = 0;
    for (int i = 0; i < v_size; ++i) {
        if (v[i]%2 == 0) {
            sum += v[i];
            ++elements;
        }
    }
    return sum / double(elements);
}

vector<int> read_vector(int size) {
    vector<int> v (size);
    for (int i = 0; i < size; ++i) {
        cin >> v[i];
    }
    return v;
}

int main() {
    int n;
    while (cin >> n) {
        vector<int> v = read_vector(n);
        cout << last_position_of(v, even_average(v)) << endl;
    }
}