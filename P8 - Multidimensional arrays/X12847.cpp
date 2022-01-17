// X12847   Battleship (1)
// Created by arnxxau on 13/01/2022.
//
#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<bool> > Board;

void position_interpreter(int& i, int& j) {
    char c;
    cin >> c;
    i = c - 'a';
    j = -1;
    cin >> j;
}

int abs_max(const int& x, const int& y) {
    int a = x, b = y;
    if (a < 0) a *= -1;
    if (b < 0) b *= -1;
    int max = a;
    if (max < b) max = b;
    return max;
}

void print_board(const Board& b) {
    cout << "  12345678910" << endl;
        for (int i = 0; i < 10; ++i) {
            cout << char('a' + i) << ' ';
            for (int j = 0; j < 10; ++j) {
                if (b[i][j])
                    cout << 'X';
                else
                    cout << '.';
            }
            cout << endl;
        }
        cout << endl;
}

void closest_distance(Board& b, const int& start_i, const int& start_j) {
    int i_max = 0, j_max = 0;
    int max_diff;
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            max_diff = abs_max(start_i - i_max, start_j - j_max);
            if (b[i][j] and abs_max(start_i - i, start_j - j) < max_diff) {
                i_max = i; j_max = j;
            }
        }
    }
    cout << " closest ship at distance " << max_diff << endl;
}

void command_interpreter(Board& b) {
    int i, j;
    position_interpreter(i, j);
    int size;
    cin >> size;
    char type;
    cin >> type;
    if (type == 'h') {
        for (int k = 0; k < size; ++k) {
            b[i][j + k - 1] = true;
        }
    } else {
        for (int k = 0; k < size; ++k) {
            b[i + k][j - 1] = true;
        }
    }
}

Board get_board() {
    Board b (10, vector<bool>(10));
    for (int i = 0; i < 10; ++i) {
        command_interpreter(b);
    }
    return b;
}

int main() {
    Board b = get_board();
    print_board(b);

    char x;
    int y;
    while (cin >> x >> y) {
        int i = x - 'a';
        int j = y - 1;
        if (b[i][j]) {
            cout << x << y << " touched!" << endl;
        } else {
            cout << x << y << " water!";
            closest_distance(b, i, j);
        }
    }
}