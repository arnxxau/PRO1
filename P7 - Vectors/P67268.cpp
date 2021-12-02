// P67268   Reverse of sequences
// Created by arnxxau on 02/12/21
//
#include <vector>
#include <iostream>
using namespace std;

int main() {
    int size;
    while (cin >> size) {
        vector<int> v (size);
        int input;
        for (int i = 0; i < size; ++i) {
            cin >> input;
            v[i] = input;
        }

        for (int i = size - 1; i > 0; --i) {
             cout << v[i] << ' ';
        }
        if (size != 0) cout << v[0]; 
        cout << endl;
    }
}
