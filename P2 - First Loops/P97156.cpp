// P97156   Numbers in an interval
// Created by arnxxau on 21/9/21.
//
#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    while (x <= y){
        cout << x++;
        if (x <= y) cout << ",";
    }
    cout << endl;
}