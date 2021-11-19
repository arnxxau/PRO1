// P96965   Reduction of digits
// Created by arnxxau on 18/11/21.
//
#include <iostream>
using namespace std;

int sum_of_digits(int x){
    if (x != 0) return x%10 + sum_of_digits(x/10);
    return 0;
}

int reduction_of_digits(int x){
    int re = sum_of_digits(x);
    while (re > 9) re = sum_of_digits(re);
    return re;
}

int main() {
    int n;
    cin >> n;
    cout << reduction_of_digits(n) << endl;
}
