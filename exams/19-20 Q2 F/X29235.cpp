// X29235   El salt del cavall
// Created by arnxxau on 16/01/2022.
//
#include <iostream>
#include <vector>
using namespace std;

struct position {
    int i, j;
};
typedef vector<int> Fila;
typedef vector<Fila> Tablero;


//
//   UNA O MAS FUNCIONES O ACCIONES
//   SON NECESARIAS AQUI
//
//

// Pre: tab es configuracion del tablero cuando el caballo ha hecho k-1 saltos y
//      k >= 1 indica que se ha de simular el k-esimo salto.
//
// Post: tab es la configuracion  del tablero cuando se  ha hecho el k-esimo salto
//       testigo es true si tab ha cambiado y false en caso contrario


vector<position> find_k_pos(const Tablero& tab, const int& k) {
    vector<position> positions;
    int rows = tab.size(), clms = tab[0].size();
    for (int l = 0; l < rows; ++l) {
        for (int m = 0; m < clms; ++m) {
            if (tab[l][m] == k) {
                position pos;
                pos.i = l;
                pos.j = m;
                positions.push_back(pos);
            }
        }
    }
    return positions;
}

int abs(int x) {
    if (x < 0) return x * -1;
    else return x;
}

void escribir_tablero(const Tablero& tab) {
    int m = tab.size();
    int n = tab[0].size();
    for (int i = 0; i < m; ++i) {
        cout << tab[i][0];
        for (int j = 1; j < n; ++j) cout << ' ' << tab[i][j];
        cout << endl;
    }
}

void move_update(Tablero& tab, const int& k, bool& testigo) {
    vector<position> positions = find_k_pos(tab, k);
    int n_positons = positions.size();
    bool changed = false;
    int rows = tab.size(), clms = tab[0].size();
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < clms; ++j) {
            for (int l = 0; l < n_positons; ++l) {
                position pos = positions[l];
                int a = abs(i - pos.i);
                int b = abs(j - pos.j);
                if (a + b == 3 and a != 0 and b != 0 and tab[i][j] == 0) {
                    tab[i][j] = k + 1;
                    changed = true;
                }
            }
        }
    }
    testigo = changed;
}




//inicializa el tablero tab a cero
void set_zero(Tablero& tab) {
    int m = tab.size();
    int n = tab[0].size();
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            tab[i][j] = 0;
}


int main() {
    int m;
    while (cin >> m) {
        int n;
        cin >> n;
        Tablero tab(m, Fila(n));
        set_zero(tab);
        int i, j;
        cin >> i >> j;
        tab[i][j] = 1;
        bool testigo = true;
        int k = 1;
        while (testigo) {
            move_update(tab, k, testigo);
            ++k;
        }
        escribir_tablero(tab);
        cout << endl;
    }
}
