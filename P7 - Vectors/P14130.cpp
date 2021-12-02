// P14130   Equal to the last one
// Created by arnxxau on 02/12/21.
//
#include <iostream>
#include <vector>
using namespace std;

int main() { 
    int size;
    cin >> size;
    vector<int> v (size);
    int input;
    for (int i = 0; i < size; ++i) {
        cin >> input;
        v[i] = input;
    }
    int count = 0;
    for (int i = 0; i < size - 1; ++i) {
        if (v[i] == v[size - 1])
            ++count;
    }

    cout << count << endl;
}
