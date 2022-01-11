// X41188   Univariate numbers
// Created by arnxxau on 10/1/22.
//
#include <iostream>
using namespace std;

bool is_univariate(int n) {
    if (n < 9) return true;
    else if ((n/10)%10 != n%10) return false;
    else return is_univariate(n/10);
}

int main() {
    int n;
    int idx = 1, uni_idx = 0;
    cin >> n;
    bool found = false;
    while (n != -1 and not found) {
        if (is_univariate(n)) {
            uni_idx = idx;
            found = true;
        }
        cin >> n;
        ++idx;
    }
    cout << uni_idx << endl;
}