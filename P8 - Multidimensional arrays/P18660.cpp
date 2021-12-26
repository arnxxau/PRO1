// P18660   Word search
// Created by arnxxau on 26/12/2021.
//

#include <iostream>
#include <vector>

using namespace std;

typedef vector< vector<char> > Matrix;

Matrix create_matrix(int row, int clm) {
    Matrix mtrx(row, vector<char>(clm));
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < clm; ++j) {
            cin >> mtrx[i][j];
        }
    }
    return mtrx;
}


void check_soup(Matrix mtrx, string s) {
    int row  = mtrx.size();
    int clm = mtrx.size();
    int s_length = s.length();
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < clm; ++j) {
            if (s[0] == mtrx[i][j]) {
                // horizontal search
                bool h_match = false;
                int h = j;
                int k = 0;
                while (s.size() > h and h < clm) {
                    h_match = s[k] == mtrx[i][h];
                    ++h; ++k;
                }

                // vertical search
                bool v_match = false;
                int v = j;
                k = 0;
                while (s.size() > v and v < row) {
                    v_match = s[k] == mtrx[v][j];
                    ++v; ++k;
                }

                // diagonal search
                bool d_match = false;
                h = j;
                v = i;
                k = 0;
                while (s.size() > v and v < row) {
                    v_match = s[k] == mtrx[v][j];
                    ++v; ++h;
                }
            }
        }
    }
}


int main() {

}