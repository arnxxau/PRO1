// P45829   Fields
// Created by arnxxau on 07/01/2022.
//
#include <iostream>
#include <vector>

using namespace std;

typedef vector< vector<int> > Matrix;

Matrix read_field(const int& row, const int& clm) {
    Matrix mtrx (row, vector<int>(clm));
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < clm; ++j) {
            cin >> mtrx[i][j];
        }
    }
    return mtrx;
}

void delete_sub_field(const int& pinned_row, const int& pinned_clm, Matrix& field) {
    int i = pinned_row, j = pinned_clm;
    int row = field.size(), clm = field[0].size();
    // we then iterate through the sub-field 'cleaning' it with 0 (or false)
    while (i < row and field[i][pinned_clm]) {
        while (j < clm and field[i][j]) {
            field[i][j] = 0;
            ++j;
        }
        ++i;
        // pinned_clm will be our reset point as it's the start of the sub-field
        j = pinned_clm;
    }
}

int main() {
    int row, clm;
    while(cin >> row >> clm) {
        Matrix field = read_field(row, clm);
        int count = 0;
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < clm; ++j) {
                // if the element is equal to true it means that we have found a sub-field
                if (field[i][j]) {
                    delete_sub_field(i, j, field);
                    ++count;
                }
            }
        }
        cout << count << endl;
    }
}