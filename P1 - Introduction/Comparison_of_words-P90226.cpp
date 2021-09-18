//
// Created by arnxxau on 15/9/21.
//
#include "iostream"
using namespace std;

int main(){
    string a, b;
    cin >> a >> b;
    if (a > b) cout << a <<" > " << b << endl;
    else if (a < b) cout << a <<" < " << b << endl;
    else cout << a << " = " << b << endl;
}