// P34279   Add one second
// Created by arnxxau on 24/09/2021.
//
#include <iostream>
using namespace std;

//"%" is used in order to not pass the value 60 in some variables
int main() {
    int h, m, s;
    cin >> h >> m >> s;
    s = h*3600 + m*60 + s + 1;
    h = (s/3600) % 24;
    m = (s/60) % 60;
    s = s%60;

    cout << h/10 << h%10 << ":" << m/10 << m%10 << ":" << s/10 << s%10 << endl;
}
