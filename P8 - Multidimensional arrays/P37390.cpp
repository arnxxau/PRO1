// P37390   Product of square matrices
// Created by arnxxau on 19/12/21.
//
#include <iostream>
#include <vector>

using namespace std;

typedef vector< vector<int> > Matrix;

Matrix product(const Matrix& a, const Matrix& b) {
    int size = a.size();
    Matrix mtrx (size, vector<int>(size));
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            for (int k = 0; k < size; ++k) {
                mtrx[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return mtrx;
}
