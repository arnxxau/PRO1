// X59091   Rectangles (2)
// Created by arnxxau on 9/10/21.
//
#include "iostream"
using namespace std;

int main() {
    int n, m;
    bool first = true;
    while (cin >> n >> m) {
        int c = 9;
        if (not first) cout << endl;
        for (int i = 0; n*m > i; ++i) {
            if (i%m == 0 and i != 0) cout << endl;
            cout << c;
            if (c > 0) --c;
            else c = 9;
        }
        cout << endl;
        first = false;
    }
}
