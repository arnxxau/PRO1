// P43260   Cruz recursiva
// Created by arnxxau on 13/01/2022.
//
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

typedef vector<vector<char> > Cross;

void draw_cross(Cross& c, int i, int j, int n) {
    if (n == 1) {
        c[i - 1][j] = '|';
        c[i][j] = 'O';
        c[i][j - 1] = '-';
        c[i][j + 1] = '-';
        c[i + 1][j] = '|';
    }
    else {
        // upper part
        draw_cross(c, i + pow(3, n - 1), j, n - 1);
        // bottom part
        draw_cross(c, i - pow(3, n - 1), j, n - 1);
        // right part
        draw_cross(c, i, j + pow(3, n - 1), n - 1);
        // left part
        draw_cross(c, i, j - pow(3, n - 1), n - 1);
        // center part
        draw_cross(c, i, j, n - 1);
    }
}


int main() {

    int n;
    cin >> n;

    int row = pow(3, n);
    int clm = row + 2;

    Cross cross(row, vector<char>(clm, ' '));


    draw_cross(cross, row/2, row/2 + 1, n);
    for (int i = 0; i < row; ++i) {
        cross[i][0] = '|';
        cross[i][clm - 1] = '|';
        for (int j = 0; j < clm; ++j) {
            cout << cross[i][j];
        }
        cout << endl;
    }
}
