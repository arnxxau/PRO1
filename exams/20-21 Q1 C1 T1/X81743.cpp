// X81743   Number of letters
// Created by arnxxau on 6/11/21.
//
#include <iostream>
using namespace std;

int main() {
    int n;
    char c1, c2;
    cin >> n >> c1 >> c2;
    int nMatch = 0;
    char input;
    for (int i = 0; i < n; ++i) {
        cin >> input;
        if (c1 <= input and input <= c2) ++nMatch;
    }
    cout << nMatch << endl;
}
