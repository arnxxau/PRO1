// P92613   Rounding
// Created by arnxxau on 13/9/21.
//
#include "iostream"
using namespace std;

int rnd (double x, int base){
    if (x-base >= 0.5){
        return base+1;
    } else{
        return base;
    }
}

int tp (double x, int base){
    if (x-base !=0){
        return base+1;
    } else{
        return base;
    }
}

int main(){
    double x;
    cin >> x;
    int base = int(x);
    int top = tp(x, base);
    int rounded = rnd(x, base);
    cout << base << " " << top << " " << rounded << endl;
}


