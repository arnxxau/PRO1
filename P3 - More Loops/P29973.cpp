// P29973   Triangle
// Created by arnxxau on 8/10/21.
//
#include "iostream"
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; n > i; ++i) {
        for (int j = 0; j <= i; ++j) cout << '*';
        cout << endl;
    }
}