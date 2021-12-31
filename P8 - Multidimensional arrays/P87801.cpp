// P87801   Word search puzzle
// Created by arnxxau on 30/12/2021.
//
#include <iostream>
#include <vector>

using namespace std;
typedef vector< vector<char> > Matrix;
typedef vector< vector<int> > IntMatrix;

Matrix create_char_matrix(const int& row, const int& clm) {
    Matrix mtrx(row, vector<char>(clm));
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < clm; ++j) {
            cin >> mtrx[i][j];
        }
    }
    return mtrx;
}

int max_of_3(const int& x, const int& y, const int& z) {
    int max3 = x;
    if (y > max3) max3 = y;
    if (z > max3) max3 = z;
    return max3;
}

IntMatrix create_int_matrix(const int& row, const int& clm) {
    IntMatrix mtrx(row, vector<int>(clm));
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < clm; ++j) {
            cin >> mtrx[i][j];
        }
    }
    return mtrx;
}

bool compute_max(const Matrix& char_mtrx, const IntMatrix& value_matrix, const string& s, int& max_sum) {
    int row  = char_mtrx.size(), clm = char_mtrx[0].size(), s_length = s.length();
    bool h_match, v_match, found = false;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < clm; ++j) {
            if (s[0] == char_mtrx[i][j]) {
                int h_sum = 0, v_sum = 0;
                // horizontal search
                h_match = clm - j >= s_length;
                int h = j, k = 0;
                while (s_length > k and h < clm and h_match) {
                    h_match = s[k] == char_mtrx[i][h];
                    h_sum += value_matrix[i][h];
                    ++h; ++k;
                }
                // vertical search
                v_match = row - i >= s_length;
                int v = i;
                k = 0;
                while (s_length > k and v < row and v_match) {
                    v_match = s[k] == char_mtrx[v][j];
                    v_sum += value_matrix[v][j];
                    ++v; ++k;
                }
                if (h_match or v_match)
                    found = true;
                max_sum = max_of_3(v_sum * v_match, h_sum * h_match, max_sum);
            }
        }
    }
    return found;
}

int main() {
    int row, clm;
    while (cin >> row >> clm) {
        Matrix c_mtrx = create_char_matrix(row, clm);
        IntMatrix i_mtrx = create_int_matrix(row, clm);
        int n;
        cin >> n;
        string s;

        for (int i = 0; i < n; ++i) {
            cin >> s;
            int max = 0;
            if (compute_max(c_mtrx, i_mtrx, s, max))
                cout << max << endl;
            else
                cout << "no" << endl;
        }
    }
}
