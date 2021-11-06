// X63529   Update arrival time
// Created by arnxxau on 6/11/21.
//
#include <iostream>
using namespace std;

int main() {
    int h, m, delay;
    cin >> h >> m >> delay;
    int translation = h*60 + m + delay;
    h = (translation/60)%24;
    m = translation%60;
    cout << h/10 << h%10 << ':' << m/10 << m%10 << endl;
}
