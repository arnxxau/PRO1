// P58459   Valid dates
// Created by arnxxau on 11/11/21.
//
#include <iostream>
using namespace std;

bool is_leap_year(int year) {
    return (year%4 == 0 and year%100 != 0)
    or (year%100 == 0 and (year/100)%4 == 0);
}

int get_number_of_days(int month, int year) {
    int days;
    if (month == 2 and is_leap_year(year)) days = 29;
    else if (month == 2) days = 28;
    else {
        if (month == 1 or month == 3 or month == 5 or month == 7
        or month == 8 or month == 10 or month == 12) days = 31;
        else days = 30;
    }
    return days;
}

bool is_valid_date(int d, int m, int y) {
    return get_number_of_days(m, y) >= d and d > 0
    and m > 0 and 12 >= m;
}

int main() {
    int d, m, y;
    cin >> d >> m >> y;
    cout << is_valid_date(d, m, y) << endl;
}

