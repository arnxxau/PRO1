//
// Created by arnxxau on 20/09/2021.
//
#include "iostream"
using namespace std;

int main() {
    char a, b;
    cin >> a >> b;

    if (a == b) cout << "-" << endl;
    else if((a == 'V' && b == 'A') || (a == 'A' && b == 'P') || (a == 'P' && b == 'V')) cout << "1" << endl;
    else cout << "2" << endl;
}
