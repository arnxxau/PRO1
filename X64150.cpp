// X64150   The vegetable selling policy
// Created by arnxxau on 13/01/2022.
//
#include <iostream>

using namespace std;

int main() {
    string vegetable;
    int minimum, s_period;
    while (cin >> vegetable >> minimum >> s_period) {
        int n_seq = 1, monthly_sales = 0, total_sales = 0;
        bool policy = true;

        int input;
        cin >> input;
        while (input != -1) {
            monthly_sales += input;

            // cycle restart
            if (n_seq == s_period) {
                if (monthly_sales < minimum)
                    policy = false;
                monthly_sales = 0;
                n_seq = 0;
            }
            total_sales += input;
            ++n_seq;
            cin >> input;
        }

        cout << vegetable << ' ';
        if (policy)
            cout << total_sales << endl;
        else
            cout << "discontinued" << endl;
    }
}
