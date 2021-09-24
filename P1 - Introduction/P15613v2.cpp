//
// Created by arnxxau on 24/09/2021.
//
#include "iostream"
using namespace std;

int main() {
    int temp;
    cin >> temp;

    if (10 > temp) {
        cout << "it's cold" << endl;
        if (0 >= temp) cout << "water would freeze" << endl;
    }
    else if (temp <= 30) {
        cout << "it's ok" << endl;
    }
    else {
        cout << "it's hot" << endl;
        if (temp >= 100) cout << "water would boil" << endl;
    }
}
