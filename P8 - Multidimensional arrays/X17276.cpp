// X17276   Increasing diagonals
// Created by arnxxau on 03/01/2022.
//

#include <iostream>
#include <vector>

using namespace std;

typedef vector<vector <int> > Matrix;

Matrix create_matrix(const int& row, const int& clm) {
    Matrix mtrx (row, vector<int>(clm));
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < clm; ++j) {
            cin >> mtrx[i][j];
        }
    }
    return mtrx;
}

bool is_increasing(const int& s_row, const int& s_clm, Matrix mtrx, const int& par_row, const int par_clm) {
    int s_row_copy = s_row, s_clm_copy = s_clm;
    int row = mtrx.size(), clm = mtrx[0].size();
    int pre = mtrx[s_row_copy][s_clm_copy];
    s_row_copy += par_row; s_clm_copy += par_clm;
    bool increase = true;
    while (s_row_copy < row and increase and s_row_copy >= 0
                    and s_clm_copy < clm and s_clm_copy >= 0) {
        int current = mtrx[s_row_copy][s_clm_copy];
        s_row_copy += par_row; s_clm_copy += par_clm;
        if (pre >= current)
            increase = false;
        pre = current;
    }
    return increase;
}

int main() {
    int row, clm;
    while(cin >> row >> clm) {
        Matrix mtrx = create_matrix(row, clm);
        int s_row, s_clm;
        cin >> s_row >> s_clm;

        if (is_increasing(s_row, s_clm, mtrx, 1, 1)
            and is_increasing(s_row, s_clm, mtrx, -1, -1)
            and is_increasing(s_row, s_clm, mtrx, -1, 1)
            and is_increasing(s_row, s_clm, mtrx, 1, -1)) {

            cout << "yes" << endl;
        }
        else
            cout << "no" << endl;

    }
}