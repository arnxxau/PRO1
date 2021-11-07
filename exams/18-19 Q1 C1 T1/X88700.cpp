// X88700   Slot Machines
// Created by arnxxau on 8/11/21.
//
#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    if (n1 != n2 or n1 != n3 or n2 != n3) cout << "Loss" << endl;
    else if (n1%3 == 0 and n2%3 == 0 and n3%3 == 0
        and n1%2 != 0 and  n2%2 != 0 and n3%2 != 0) cout << "Bananas" << endl;
    else if (n1%2 == 0 and n2%2 == 0 and n3%2 == 0) cout << "Apples" << endl;
    else cout << "Joker" << endl;
}
