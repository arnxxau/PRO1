// X58714   Secondary breakeven positions
// Created by arnxxau on 15/01/2022.
//
#include <iostream>
#include <vector>

using namespace std;

typedef vector<vector<int> > Matrix;

// Pre: f > 0, c > 0; there is an integer matrix in the input channel
// Post: returns the integer matrix read from the input channel
Matrix read_matrix(const int& f, const int& c) {
    Matrix matrix (f, vector<int>(c));
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> matrix[i][j];
        }
    }
    return matrix;
}

void compute_breakeven(const Matrix& matrix, const int& break_i, const int& break_j) {
    int upper_right = 0, lower_left = 0;
    int rows = matrix.size(), clms = matrix[0].size();
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < clms; ++j) {
            if (j >= break_j and i <= break_i and j <= clms - 1)
                upper_right += matrix[i][j];
            if (i >= break_i and i <= rows - 1 and j <= break_j)
                lower_left += matrix[i][j];
            }
        }
    if (upper_right == lower_left)
        cout << "si: " << upper_right << endl;
    else
        cout << "no: " << upper_right << ", " << lower_left << endl;
    }


int main() {
    int f, c;
    cin >> f >> c;
    Matrix mtrx = read_matrix(f, c);
    while (cin >> f >> c) {
        compute_breakeven(mtrx, f, c);
    }
}
