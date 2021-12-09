// P27498   Transposed matrix
// Created by arnxxau on 09/12/21
//
#include<iostream>
#include<vector>

using namespace std;

typedef vector< vector<int> > Matrix;
    
void transpose(Matrix& m) {
    int n = m.size();
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int aux = m[i][j];
            m[i][j] = m[j][i];
            m[j][i] = aux;
        }
    }
}

Matrix create_matrix() {
    int n;
    cin >> n;
    Matrix mtrx(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
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
    Matrix mtrx = create_matrix();
    transpose(mtrx);
    print_matrix(mtrx);
}
