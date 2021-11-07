// X97193   Perimeter and area of triangles
// Created by arnxxau on 7/11/21.
//
#include <iostream>
using namespace std;

int main() {
    string type;
    cin >> type;
    while (type != "acabar") {
        if (type == "perimetro") {
            double a, b, c;
            cin >> a >> b >> c;
            cout.setf(ios::fixed);
            cout.precision(2);
            cout << a + b + c << endl;
        }
        else {
            double b, h;
            cin >> b >> h;
            cout.setf(ios::fixed);
            cout.precision(2);
            cout << (b*h)/2 << endl;
        }
        cin >> type;
    }
}
