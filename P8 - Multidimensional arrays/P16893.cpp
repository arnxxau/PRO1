// P16893   Is it the solution of a Sudoku?
// Created by arnxxau on 13/01/2022.
//
#include <iostream>
#include <vector>


using namespace std;


typedef vector<vector<int> > SudokuBoard;

SudokuBoard read_table() {
    SudokuBoard s (9, vector<int>(9));
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            cin >> s[i][j];
        }
    }
    return s;
}

void check_block(const SudokuBoard& s, const int& start_i, const int& start_j, bool& incorrect) {
    int i = 0, j = 0;
    vector <bool> check_num (9, false);
    while (i < 3 and not incorrect) {
        while (j < 3 and not incorrect) {
            incorrect = check_num[s[i + start_i][j + start_j] - 1];
            check_num[s[i + start_i][j + start_j] - 1] = true;
            ++j;
        }
        j = 0;
        ++i;
    }
}

bool check_sudoku(const SudokuBoard& s) {
    int i = 0;
    int j = 0;


    bool incorrect = false;
    check_block(s, 0, 0, incorrect);
    check_block(s, 0, 3, incorrect);
    check_block(s, 0, 6, incorrect);
    check_block(s, 3, 0, incorrect);
    check_block(s, 3, 3, incorrect);
    check_block(s, 3, 6, incorrect);
    check_block(s, 6, 0, incorrect);
    check_block(s, 6, 3, incorrect);
    check_block(s, 6, 6, incorrect);


    // horizontal
    while (i < 9 and not incorrect) {
        vector <bool> check_num (9, false);
        while (j < 9 and not incorrect) {
            incorrect = check_num[s[i][j] - 1];
            check_num[s[i][j] - 1] = true;
            ++j;
        }
        j = 0;
        ++i;
    }

    // vertical
    i = 0;
    j = 0;
    while (j < 9 and not incorrect) {
        vector <bool> check_num (9, false);
        while (i < 9 and not incorrect) {
            incorrect = check_num[s[i][j] - 1];
            check_num[s[i][j] - 1] = true;
            ++i;
        }
        i = 0;
        ++j;
    }
    return not incorrect;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        SudokuBoard s = read_table();
        if (check_sudoku(s))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
}
