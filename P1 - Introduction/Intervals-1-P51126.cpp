//
// Created by arnxxau on 15/9/21.
//
#include "iostream"
using namespace std;

int main(){
    int a1,b1,a2,b2;
    cin >> a1 >> b1 >> a2 >> b2;
    if(a1 >= a2 && a1 <= b2 && b1 <= b2 && b1 >= a2){
        cout << "[" << a1 << "," << b1 << "]" << endl;
    }else if(a1 <= a2 && a1 <= b2 && b1 >= b2 && b1 >= a2){
        cout << "[" << a2 << "," << b2 << "]" << endl;
    }else if(b1 == a2){
        cout << "[" << b1 << "," << b1 << "]" << endl;
    }else if(a1 == b2){
        cout << "[" << a1 << "," << a1 << "]" << endl;
    }else{
        cout<< "["<<"]"<<endl;
    }
}