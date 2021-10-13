// P39057   Computing areas
// Created by arnxxau on 28/9/21.
//
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout.setf(ios::fixed);
    cout.precision(6);
    for (int i = 0; i < n; i++) {
        string type;
        cin >> type;
        if (type == "rectangle") {
            double b, h;
            cin >> b >> h;
            cout << b * h << endl;
        }
        else {
            double r;
            cin >> r;
            cout << r * r * M_PI << endl;
        }
    }
}
