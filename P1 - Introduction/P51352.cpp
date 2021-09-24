// P51352   Elementos
// Created by arnxxau on 20/09/2021.
//
#include "iostream"
using namespace std;

int main() {
    char a, b;
    cin >> a >> b;

    if (a == b) cout << "-" << endl;
    else if((a == 'V' and b == 'A') or (a == 'A' and b == 'P') or (a == 'P' and b == 'V')) cout << "1" << endl;
    else cout << "2" << endl;
}
