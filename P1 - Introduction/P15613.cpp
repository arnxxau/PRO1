// P15613   Temperatures
// Created by arnxxau on 13/9/21.
//
#include <iostream>
using namespace std;

int main(){
    int x;
    cin >> x;
    if(0<x and 10>x){
        cout<< "it's cold\n";
    }else if (10<=x && x<=30){
        cout<< "it's ok\n";
    }else if(x>30 && x<100){
        cout<< "it's hot\n";
    }
    else if(x >= 100){
        cout<< "it's hot\n"
               "water would boil\n";
    } else{
        cout<< "it's cold\n"
               "water would freeze\n";
    }
}