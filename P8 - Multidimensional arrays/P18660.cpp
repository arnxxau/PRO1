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

void mark_soup(Matrix& mtrx_mod, const string& s) {
    Matrix mtrx = mtrx_mod;
    int row  = mtrx.size(), clm = mtrx[0].size(), s_length = s.length();
    bool h_match, v_match, d_match;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < clm; ++j) {
            if (s[0] == mtrx[i][j] or s[0] == mtrx[i][j] + 'a' - 'A') {
                // horizontal search
                h_match = clm + 1 - j >= s_length;
                int h = j, k = 0;
                while (s_length > k and h < clm and h_match) {
                    h_match = s[k] == mtrx[i][h] or s[k] == mtrx[i][h] + 'a' - 'A';
                    if (mtrx_mod[i][h] >= 'a' and mtrx_mod[i][h] <= 'z')
                        mtrx_mod[i][h] += 'A' - 'a';
                    ++h; ++k;
                }
                // start of the matrix filtering
                Matrix aux = mtrx_mod;
                if (not h_match) {
                    mtrx_mod = mtrx;
                    aux = mtrx;
                }

                // vertical search
                v_match = row + 1 - i >= s_length;
                int v = i;
                k = 0;
                while (s_length > k and v < row and v_match) {
                    v_match = s[k] == mtrx[v][j] or s[k] == mtrx[v][j] + 'a' - 'A';
                    if (mtrx_mod[v][j] >= 'a' and mtrx_mod[v][j] <= 'z')
                        mtrx_mod[v][j] += 'A' - 'a';
                    ++v; ++k;
                }
                // second filter
                if (not v_match)
                    mtrx_mod = aux;
                aux = mtrx_mod;

                // diagonal search
                d_match = row - i + 1 >= s_length and clm - j + 1>= s_length;
                h = j, v = i, k = 0;
                while (s_length > k and v < row and h < clm and d_match) {
                    d_match = s[k] == mtrx[v][h] or s[k] == mtrx[v][h] + 'a' - 'A';
                    if (mtrx_mod[v][h] >= 'a' and mtrx_mod[v][h] <= 'z')
                        mtrx_mod[v][h] += 'A' - 'a';
                    ++v; ++h; ++k;
                }
                // third filter
                if (not d_match)
                    mtrx_mod = aux;
                mtrx = mtrx_mod;
            }
        }
    }
}

int main() {
    int n, row, clm;
    bool first = true;
    while (cin >> n >> row >> clm) {
        if (not first)
            cout << endl;
        first = false;
        vector<string> names(n);
        for (int i = 0; i < n; ++i) {
            cin >> names[i];
        }
        Matrix mtrx = create_matrix(row, clm);
        for (int i = 0; i < n; ++i) {
            mark_soup(mtrx, names[i]);
        }
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < clm - 1; ++j) {
                cout << mtrx[i][j] << ' ';
            }
            cout << mtrx[i][clm - 1];
            cout << endl;
        }
    }
}