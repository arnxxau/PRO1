// X98837   A morning at the casino
// Created by arnxxau on 8/11/21.
//
#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3, sum = 0;
    while (cin >> n1 >> n2 >> n3) {
        if (n1 != n2 or n1 != n3 or n2 != n3) sum += 0;
        else if (n1%3 == 0 and n2%3 == 0 and n3%3 == 0
            and n1%2 != 0 and  n2%2 != 0 and n3%2 != 0) sum += 15;
        else if (n1%2 == 0 and n2%2 == 0 and n3%2 == 0) sum += 10;
        else sum += 5;
    }
    cout << sum << endl;
}
