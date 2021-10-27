// P87323   Rectangles diagonals
// Created by arnxxau on 26/10/21.
//
#include <iostream>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    for (int i = 0; h > i; ++i) {
        int c;
        for (int j = 0; w > j; ++j) {
            c = (i-j)%10;
            if (c < 0) c *= -1;
            cout << c;
        }
        cout << endl;
    }
}
