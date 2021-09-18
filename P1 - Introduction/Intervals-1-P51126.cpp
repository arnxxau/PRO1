//
// Created by arnxxau on 17/09/2021.
//
#include "iostream"
using namespace std;

//input: 4 ints representing two intervals e.g; [1,2] [0,4]
//output: the intersection between the two intervals e.g; [1,2]
//check "type_of_intersections.pdf" for reference
int main() {
    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;

    if (a2 >= a1 && b1 >= b2) cout << "[" << a2 << "," << b2 << "]" << endl;
    else if (a1 >= a2 && b2 >= b1) cout << "[" << a1 << "," << b1 << "]" << endl;
    else if ((b1 > a2 && b2 > b1) || (b1 == a2)) cout << "[" << a2 << "," << b1 << "]" << endl;
    else if ((b2 > a1 && b1 > b2) || (a1 == b2)) cout << "[" << a1 << "," << b2 << "]" << endl;
    else cout << "[]" << endl;
}