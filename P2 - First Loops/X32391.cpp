// X32391   Allowance (2)
// Created by arnxxau on 28/9/21.
//
#include "iostream"
using namespace std;

int main() {
    int fixed, savings, n_weeks, allowance;
    cin >> fixed >> savings >> n_weeks;
    int p = 0;
    for (int i = 0; i < n_weeks; i++) {
        cin >> allowance;
        savings += allowance - fixed;
        if (savings > 0) p++;
        else if (savings <= 0) i = n_weeks;
    }
    cout << p << endl;
}