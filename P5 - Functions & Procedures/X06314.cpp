// X06314   Similar sequences (2)
// Created by arnxxau and raulgilbert on 15/11/21.
//
#include <iostream>
using namespace std;

void info_sequence(int& sum, int& last) {
    int input;
    sum = 0;
    cin >> input;
    while (input != 0){
        sum += input;
        last = input;
        cin >> input;
    }
}

int main(){
    int sum, last, i = 1;
    info_sequence(sum, last);
    int current_sum = 1, current_last = 0;
    while (current_sum != 0){
        info_sequence(current_sum, current_last);
        if (sum == current_sum and last == current_last) ++i;
    }
    cout << i << endl;
}
