//
// Created by arnxxau on 20/09/2021.
//
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    n %= 1000;
    cout << n%10 + ((n/10)%10) + n/100 << endl;
}