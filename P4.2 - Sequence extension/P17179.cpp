// P17179   Statistical measures
// Created by arnxxau on 28/10/21.
//
#include <iostream>
using namespace std;

int main() {
    int n_sequences;
    cin >> n_sequences;
    for (int i = 0; n_sequences > i; ++i) {
        int n_elements;
        cin >> n_elements;
        double  min = 0, max = 0, sum = 0, value;
        for (int j = 0; n_elements > j; ++j) {
            cin >> value;
            sum += value;
            if (max < value or max == 0) max = value;
            if (value < min or min == 0) min = value;
        }
        cout.setf(ios::fixed);
        cout.precision(4);
        cout << min << ' '  << max << ' ' << sum/n_elements <<endl;
    }
}
