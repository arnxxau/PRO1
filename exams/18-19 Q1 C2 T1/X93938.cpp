// X93938   Added pairs equal
// Created by arnxxau on 09/01/2022.
//
#include <iostream>

using namespace std;

bool pairwise_sum(int x, int y) {
    int last_two = x%10 + (x/10)%10;
    if (x/100 == 0 and last_two == y) return true;
    else if (last_two != y) return false;
    else return pairwise_sum(x/100, y);
}

int main() {
    int x, y;
    while (cin >> x >> y) {
        if (pairwise_sum(x, y))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}