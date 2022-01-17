// X58537   Tridiagonal matrix 1
// Created by arnxxau on 16/01/2022.
//
#include <iostream>
#include <vector>

using namespace std;

typedef vector<vector<int> > Matrix;

Matrix read_matrix(int n) {
    Matrix matrix (n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }
    return matrix;
}

// Pre: mat is an n*n square matrix, where n >= 2
// Post: it returns true if mat is a zero-sum tridiagonal matrix,
//       false otherwise
bool is_zerosum_tridiagonal(const Matrix& mat) {
    int n = mat.size();
    int main_diag = 0, sub_diag = 0, super_diag = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j) main_diag += mat[i][j];
            else if (i == j + 1) sub_diag += mat[i][j];
            else if (i + 1 == j) super_diag += mat[i][j];
            else if (mat[i][j] != 0) return false;
        }
    }
    return  main_diag == super_diag + sub_diag;
    // ADD YOUR CODE HERE
}


int main() {
    int n;
    while (cin >> n) {
        Matrix a = read_matrix(n);
        if (is_zerosum_tridiagonal(a)) cout << "TRUE" << endl;
        else cout << "FALSE" << endl;
    }
}