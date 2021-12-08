// P71310   Scalar product
// Created by arnxxau on 5/12/21.
//
#include <iostream>
#include <vector>

using namespace std;

double scalar_product(const vector<double>& u, const vector<double>& v) {
    double sum = 0;
    int v_size = v.size();

    for (int i = 0; i < v_size; ++i) {
        sum += u[i] * v[i];
    }
    return sum;
}