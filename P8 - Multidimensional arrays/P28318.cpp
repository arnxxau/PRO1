// P28318   Rows and columns
// Created by arnxxau on 12/9/21.
//
#include <iostream>
#include <vector>

using namespace std;


vector<vector<int> > fill_matrix() {
    int row, clm;
    cin >> row >> clm;
    vector<vector<int> > mtrx(row, vector<int>(clm));
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < clm; ++j) {
            cin >> mtrx[i][j];
        }
    }
    return mtrx;
}

void print_row(const vector<vector<int> >& mtrx) {
    int row;
    cin >> row;
    cout << "row " << row << ':';
    int r_size = mtrx[0].size();
    for (int i = 0; i < r_size; ++i) {
        cout << ' ' << mtrx[row - 1][i];
    }
    cout << endl;
}

void print_clm(const vector<vector<int> >& mtrx) {
    int clm;
    cin >> clm;
    int clm_size = mtrx.size();
    cout << "column " << clm << ':';
    for (int i = 0; i < clm_size; ++i) {
        cout << ' ' <<mtrx[i][clm - 1];
    }
    cout << endl;
}

void print_element(const vector<vector<int> >& mtrx) {
    int row, clm;
    cin >> row >> clm;
    cout << "element " << row << ' ' << clm << ": "
        << mtrx[row - 1][clm - 1] << endl;
}


int main() {
    vector<vector<int> > matrix = fill_matrix(row, clm);
    string type;
    while(cin >> type) {
        if (type == "row") print_row(matrix);
        else if (type == "column") print_clm(matrix);
        else print_element(matrix);
    }
}
