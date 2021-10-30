// P90620   Pica d'Estats
// Created by arnxxau on 28/10/21.
//
#include <iostream>
using namespace std;

int main() {
    int pre, n, succ;
    cin >> pre >> n >> succ;
    bool reached_peak = false;
    while (succ != 0 and not reached_peak) {
        if (n > pre and n > succ and n > 3143) reached_peak = true;
        pre = n;
        cin >> n;
        int aux;
        aux = n;
        n = succ;
        succ = aux;
    }
    if (reached_peak) cout << "YES" << endl;
    else cout << "NO" << endl;
}