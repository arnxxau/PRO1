//
// Created by arnxxau on 12/11/21.
//
#include <iostream>
using namespace std;

void n_print_space_and_char(int n_spaces, int n_char, char c) {
    for (int i = 0; i < n_spaces; ++i) cout << ' ';
    for (int i = 0; i < n_char; ++i) cout << c;
}

void cross(int n, char c){
    for (int i = 0; i < n/2; ++i) {
        n_print_space_and_char(n/2, 1, c);
        cout << endl;
    }
    n_print_space_and_char(0, n, c);
    cout << endl;
    for (int i = 0; i < n/2; ++i) {
        n_print_space_and_char(n/2, 1, c);
        cout << endl;
    }
}

int main(){
    cross(7, 'X');
}