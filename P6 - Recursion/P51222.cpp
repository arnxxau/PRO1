// P51222   Recursive number of digits
// Created by arnxxau on 18/11/21.
//
#include <iostream>
using namespace std;

int number_of_digits(int n){
    if (n/10 !=  0) return 1 +  number_of_digits(n/10);
    return 1;
}

int main() {
    int n;
    cin >> n;
    cout << number_of_digits(n) << endl;
}
