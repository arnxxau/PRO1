// X84724   Suma de temps
// Created by arnxxau on 10/1/22.
//
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int h, m, s;
    int suma_s = 0;
    for (int i = 0; i < n; ++i) {
        char c;
        cin >> h >> c >> m >> c >> s;
        suma_s += h*60*60 + m*60 + s;
    }
    h = suma_s/3600;
    m = (suma_s%3600)/60;
    s = (suma_s%3600)%60;
    cout << h << "H " << m << "M " << s << 'S' << endl;
}
