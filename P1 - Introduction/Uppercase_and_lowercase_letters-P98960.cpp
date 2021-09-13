//
// Created by arnxxau on 13/9/21.
//

//ASCII value of lowercase char from 97 to 122
//ASCII value of uppercase char from 65 to 90

#include "iostream"
using namespace std;

int main(){
    unsigned char x;
    cin >> x;
    if(x>=97 && x<=122)x=x-32;
    else x=x+32;
    cout << x << endl;
}
