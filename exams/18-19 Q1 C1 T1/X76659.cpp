// X76659   Two triangles make a square.
// Created by arnxxau on 8/11/21.
//
#include <iostream>
using namespace std;

int main() {
    int n;
    char ch1, ch2;
    while (cin >> n >> ch1 >> ch2) {
        for (int i = 0; n > i; ++i) {
            for (int j = 0; i > j; ++j) cout << ch1;
            for (int j = 0; n - i> j; ++j) cout << ch2;
            cout << endl;
        }
        cout << endl;
    }
}
