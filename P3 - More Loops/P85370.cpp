// P85370   Interest (1)
// Created by arnxxau on 11/10/21.
//
#include <iostream>
using namespace std;

int main() {
    double i_capital, a_rate, time;
    string type;
    cout.setf(ios::fixed);
    cout.precision(4);
    cin >> i_capital >> a_rate >> time >> type;


    double s_interest = i_capital * a_rate/100;
    if (type == "simple") cout << i_capital + time*s_interest << endl;
    else {
        double c_interest = s_interest;
        for (int i = 1; time > i; ++i) c_interest += c_interest * a_rate/100 + s_interest;
        cout << i_capital + c_interest << endl;
    }
}
