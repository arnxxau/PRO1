// P67340   F010B. Threatening bishops
// Created by arnxxau on 13/01/2022.
//
#include <iostream>
#include <vector>

using namespace std;

typedef vector<vector<bool> > Chessboard;

Chessboard read_chessboard() {
    int row, clm;
    cin >> row >> clm;
    Chessboard c (row, vector<bool>(clm));
    char ch;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < clm; ++j) {
            cin >> ch;
            c[i][j] = ch == 'X';
        }
    }
    return c;
}

bool find_diagonal(const Chessboard& c, const int& i, const int& j, const int& i_par, const int& j_par) {
    int row = c.size(), clm = c[0].size();
    int k = i, l = j;
    bool found = false;
    k += i_par; l += j_par;
    while (row > k and k >= 0 and clm > l and l >= 0 and not found) {
        found = c[k][l];
        k += i_par; l += j_par;
    }
    k -= i_par; l -= j_par;

    if (found) {
        cout << '(' << i + 1 << ',' << j + 1 << ')'
                << "<->" << '(' << k + 1 << ',' << l + 1 << ')' << endl;
    }

    return found;
}

int main() {
    Chessboard c = read_chessboard();
    int row = c.size(), clm = c[0].size();
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < clm; ++j) {
            if (c[i][j]) {
                find_diagonal(c, i, j, 1, 1);
                find_diagonal(c, i, j, -1, -1);
                find_diagonal(c, i, j, 1, -1);
                find_diagonal(c, i, j, -1, 1);
            }
        }
    }
}
