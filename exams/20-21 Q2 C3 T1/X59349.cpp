// X59349   Flag columns
// Created by arnxxau on 15/01/2022.
//

/*
 * W G W Y
 * W G W Y
 * W G W Y
 * W G W Y
 */

#include <iostream>
#include <vector>

using namespace std;

typedef vector<vector<char> > Flag;

Flag read_flag(int n) {
    Flag flag (n, vector<char>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> flag[i][j];
        }
    }
    return flag;
}

int column_count(const Flag& flag) {
    int n = flag.size();
    int n_clms = 0;
    bool under_diagonal = true;

    int i = n - 1;
    int j = 0;
    while (j < n) {
        // storing the last character of the column
        char pre_color = flag[n - 1][j];
        int n_color_changes = 0;
        while (i >= 0 and under_diagonal) {
            // if the previous character is not equal to the current
            // that will mean that we have found a color change
            if (flag[i][j] != pre_color) {
                ++n_color_changes;
                // if i + j == n - 1 we are on the second diagonal
                under_diagonal = n_color_changes <= 1 and i + j + 1 >= n - 1;
            }
            pre_color = flag[i][j];
            --i;
        }
        if (under_diagonal and n_color_changes == 1)
            ++n_clms;
        under_diagonal = true;
        // we set the iterator to -2 as we already get the previous character at the begging of each iteration
        i = n - 2;
        ++j;
    }
    return n_clms;
}

int main() {
    int n;
    while (cin >> n) {
        Flag flag = read_flag(n);
        cout << column_count(flag) << endl;
    }
}