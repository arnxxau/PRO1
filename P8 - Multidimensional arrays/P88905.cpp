// P88905   Products of matrices
// Created by arnxxau on 27/12/21.
//
#include <iostream>
#include <vector>

using namespace std;

typedef vector< vector<int> > Matrix;

Matrix product(const Matrix& a, const Matrix& b) {
    int sum = 0;
    int a_row = a.size(), a_clm = a[0].size(), b_clm = b[0].size();
    Matrix mtrx(a_row, vector<int>(b_clm));

    for (int i = 0; i < a_row; ++i) {
        for (int j = 0; j < b_clm; ++j) {
            for (int k = 0; k < a_clm; ++k) {
                sum += a[i][k] * b[k][j];
            }
            mtrx[i][j] = sum;
            sum = 0;
        }
    }
    return mtrx;
}

Matrix create_matrix() {
    int row, clm;
    cin >> row >> clm;
    Matrix mtrx(row, vector<int>(clm));
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < clm; ++j) {
            cin >> mtrx[i][j];
        }
    }
    return mtrx;
}

void print_matrix (const Matrix& m) {
    int n = m.size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << m[i][j] << ' ';
        }
        cout << endl;
    }
}

int main() {
    Matrix a = create_matrix();
    Matrix b = create_matrix();

    print_matrix(product(a, b));
}


