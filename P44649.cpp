// P44649   F012A. La vaca miop
// Created by arnxxau on 14/01/2022.
//
#include <iostream>
#include <vector>

using namespace std;

typedef vector<vector<char> > field;

field create_field(const int& wall_size, const int& s_pos, const int& cow_pos) {
    field f (wall_size, vector<char>(100, '.'));
    for (int i = 0; i < wall_size; ++i) {
        f[i][0] = '|';
    }
    f[s_pos][0] = '=';
    f[cow_pos][1] = 'V';
    return f;
}

void mark_field(field& f, int& i, int& j, const int& move, const int& s_pos) {
    int n = move;
    if (move > 0) {
        while (n != 0 and i != s_pos) {
            ++i; ++j;
            f[i][j] = 'V';
            --n;
        }
    } else {
        while (n != 0 and i != s_pos) {
            --i; ++j;
            f[i][j] = 'V';
            ++n;
        }
    }
}

void print_field(const field& f, const int& limit) {
    int f_size = f.size();

    for (int i = 0; i < f_size; ++i) {
        for (int j = 0; j < limit; ++j) {
            cout << f[i][j];
        }
        cout << endl;
    }
}

field move_cow(field& f, const int& s_pos, int& cow_pos, int& j) {
    int to_move = 1;
    while (cow_pos != s_pos) {
        mark_field(f, cow_pos, j, to_move, s_pos);
        to_move *= -2;
    }
    f[s_pos][++j] = 'V';
    return f;
}

int main() {
    int wall_size, s_pos, cow_pos;
    cin >> wall_size >> s_pos >> cow_pos;
    field f = create_field(wall_size, s_pos, cow_pos);
    int j = 1;
    move_cow(f, s_pos, cow_pos, j);
    print_field(f, j);
}