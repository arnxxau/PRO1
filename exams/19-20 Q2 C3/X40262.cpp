// X40262   Robot simple de neteja
// Created by arnxxau on 16/01/2022.
//
#include <iostream>
#include <vector>

using namespace std;

typedef vector<vector<int> > Floor;


Floor read_floor() {
    int rows, clms;
    cin >> rows >> clms;
    Floor f (rows, vector<int>(clms));
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < clms; ++j) {
            cin >> f[i][j];
        }
    }
    return f;
}

void clean_floor(const Floor& floor) {
    // recorrido
    int i = 0;
    int j = 0;
    int rows = floor.size(), clms = floor[0].size();
    int iterative_factor = 1;
    int clm_total = 0;
    while (j < clms) {
        while (i < rows and i >= 0) {
            if (floor[i][j] == 0)
                cout << i << ' ' << j << endl;
            clm_total += floor[i][j];
            i += iterative_factor;
        }
        cout << "Total en columna " << j << ": " << clm_total << endl;
        iterative_factor *= -1;
        i += iterative_factor;
        ++j;
    }
}


int main() {
    Floor floor = read_floor();
    clean_floor(floor);
}