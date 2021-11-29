// P35537   Increasing numbers
// Created by arnxxau on 25/11/21
//
#include <iostream>
using namespace std;

bool is_increasing(int n) {
    if (n != 0 and n%10 >= (n/10)%10) return is_increasing(n/10);
    else if (n%10 < (n/10)%10) return false;
    else return true; 
}

int main() {
    int n;
    cin >> n;
    cout << is_increasing(n) << endl;
}
