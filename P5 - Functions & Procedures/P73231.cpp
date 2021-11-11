// P73231   Maximum of four integer numbers
// Created by arnxxau on 11/11/21.
//
#include <iostream>
using namespace std;

int max(int x, int y) {
    int max = x;
    if (y > max) max = y;
    return max;
}

int max4(int a, int b, int c, int d) {
    return max(max(a, b), max(c, d));
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << max4(a, b, c, d) << endl;
}
