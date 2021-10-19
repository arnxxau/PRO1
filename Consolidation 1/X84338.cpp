// X84338   Related sum of the halves of a number
// Created by arnxxau on 19/10/21.
//
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int size = 0;
    int n_aux = n;
    while (n_aux != 0) {
        n_aux /= 10;
        ++size;
    }

    if (size%2 == 0 and n != 0){
        int right_sum = 0;
        for (int j = 0; size / 2 > j; ++j) {
            right_sum += n%10;
            n /= 10;
        }
        int left_sum = 0;
        for (int j = 0; size / 2 > j; ++j) {
            left_sum += n%10;
            n /= 10;
        }

        cout << left_sum << ' ';
        if (left_sum == right_sum) cout << '=';
        else if (left_sum > right_sum) cout << '>';
        else cout << '<';
        cout << ' ' << right_sum << endl;
    }
    else cout << "nothing" << endl;
}

