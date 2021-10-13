// P56559   Intervals (2)
// Created by arnxxau on 17/09/2021.
//
#include <iostream>
using namespace std;

//input: 4 ints representing two intervals e.g; [1,2] [0,4]
//output: "=" if equal, "1" if 1 is inside 2, "2" if 2 is inside 1
//check "type_of_intersections.pdf" for reference
int main() {
    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;

    if (a1 == a2 and b1 == b2) cout << "=" << endl;
    else if (a2 >= a1 and b1 >= b2) cout << "2" << endl; //2 inside 1
    else if (a1 >= a2 and b2 >= b1) cout << "1" << endl; //1 inside 2
    else cout << "?" << endl;
}