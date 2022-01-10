// X38406   Far from average
// Created by arnxxau on 09/01/2022.
//
#include <iostream>
#include <vector>

using namespace std;

double compute_average(const vector<double>& v) {
    int v_size = v.size();
    double average = 0;
    for (int i = 0; i < v_size; ++i) {
        average += v[i];
    }
    return average / v_size;
}

bool find_element(const vector<double>& v, double x, double &e) {
    int v_size = v.size();
    for (int i = v_size - 1; i >= 0; --i) {
        e = v[i];
        if (e <= x/2 or e >= x*2)
            return true;
    }
    return false;
}

void fill_vector(vector<double>& v) {
    int v_size = v.size();
    for (int i = 0; i < v_size; ++i) {
        cin >> v[i];
    }
}

int main() {
    cout.setf(ios::fixed);
    cout.precision(2);
    int n;
    cin >> n;
    vector<double> v(n);
    fill_vector(v);

    double mean;
    cin >> mean;

    double elem;
    if (find_element(v,compute_average(v),elem))
        cout << elem << endl;
    else cout << "not found" << endl;
}