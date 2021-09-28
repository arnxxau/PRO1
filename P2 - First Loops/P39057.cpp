// P39057   Computing areas
// Created by arnxxau on 28/9/21.
//
#include "iostream"
#include "cmath"
using namespace std;

int main() {
    int n;
    cin >> n;
    cout.setf(ios::fixed);
    cout.precision(6);
    for (int i = 0; i < n; i++) {
        string type;
        double x1, x2;
        cin >> type;
        if (type == "rectangle") {
            cin >> x1 >> x2;
            cout << x1 * x2 << endl;
        }
        else if (type == "circle") {
            cin >> x1;
            cout << x1 * x1 * M_PI << endl;
        }
    }
}
