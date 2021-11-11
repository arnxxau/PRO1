// P95401   Function for leap years
// Created by arnxxau on 11/11/21.
//
#include <iostream>
using namespace std;

bool is_leap_year(int year) {
    return (year%4 == 0 and year%100 != 0)
    or (year%100 == 0 and (year/100)%4 == 0);
}

int main() {
    int y;
    cin >> y;
    cout << is_leap_year(y) << endl;
}
