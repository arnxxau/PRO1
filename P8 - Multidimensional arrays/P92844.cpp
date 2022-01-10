// P92844   Bounding rectangle
// Created by arnxxau on 03/01/2022.
//
#include <iostream>
#include <vector>

using namespace std;

typedef vector<char> Row;
typedef vector<Row> Rectangle;

Rectangle read_rectangle() {
    int row, clm;
    cin >> row >> clm;
    Rectangle r (row, vector<char>(clm));
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < clm; ++j) {
            cin >> r[i][j];
        }
    }

    return r;
}


void minimal_dimensions(char c, const Rectangle& r, int& rows, int& cols) {
    int row = r.size(), clm = r[0].size();
    rows = 1, cols = 1;
    int i = 0, j = 0;
    int match = false;
    while (not match and i < row) {
        while (not match and j < clm) {
            cout << r[i][j] << endl;
            if (r[i][j] == c) {
                match = true;
                cout << i << ' ' << j <<  " 1" << endl;
                rows -= i;
                cols -= j;
            }
            ++j;
        }
        j = 0;
        ++i;
    }

    j = clm - 1, i = row - 1;
    match = false;
    while (not match and i >= 0) {
        while (not match and j >= 0) {
            if (r[i][j] == c) {
                cout << i << ' ' << j <<  " 2" << endl;
                match = true;
                rows += i;
                cols += j;
            }
            --j;
        }
        j = clm - 1;
        --i;
    }
}

int main() {
    Rectangle r = read_rectangle();
    char c;
    cin >> c;
    int rows, cols;
    minimal_dimensions(c, r, rows, cols);
    cout << rows << ' ' << cols << endl;
}