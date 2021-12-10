// P42596   Control C401B
// Created by arnxxau on 12/9/21.
//
#include <iostream>
#include <vector>

using namespace std;

typedef vector<vector<int> > Matrix;

vector<vector<int> > fill_matrix(int row, int clm) {
    vector<vector<int> > mtrx(row, vector<int>(clm));
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < clm; ++j) {
            cin >> mtrx[i][j];
        }
    }
    return mtrx;
}

 void min_max(const Matrix& mat, int& minimum, int& maximum) {
    int n_row = mat.size(), n_clm = mat[0].size();
    minimum = mat[0][0]; maximum = mat[0][0];
    for (int i = 0; n_row > i; ++i) {
        for (int j = 0; n_clm > j; ++j) {
            int element = mat[i][j];
            if (element > maximum) maximum = element;
            else if (element < minimum) minimum = element;
        }
    }
 }

int main() {
    int n_rows, n_clms;
    int diff = 0, i = 1, idx = 1;
    while (cin >> n_rows >> n_clms) {
        Matrix mtrx = fill_matrix(n_rows, n_clms);
        int max, min;
        min_max(mtrx, min, max);
        if (max - min > diff) {
            diff = max - min;
            idx = i;
        }
        ++i;
    }

    cout << "la diferencia maxima es " << diff << endl;
    cout << "la primera matriu amb aquesta diferencia es la " << idx << endl;
}   
