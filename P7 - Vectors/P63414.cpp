// P63414   Counting frequences
// Created by arnxxau on 02/12/21
//
#include <iostream>
#include <vector>

using namespace std;




/* 
 * Fills the referenced vector with the user input.
 *
 * Pre -> a void vector of size 1001
 * Post -> the vector with the frequency of the data inputted by the user
 */
void read_data(vector<int>& v) {
    int size;
    cin >> size;
    int input;
    for (int i = 0; size > i; ++i) {
        cin >> input;
        ++v[input%10000];
    }
}

/*
 * Prints the elements of the vector which are not empty.
 *
 * Pre -> a vector of size 1001
 * Post -> .....
 */
void print_data(const vector<int>& v) {
    for (int i = 0; i < 1001; ++i) {
        if (v[i] != 0) 
            cout << 1000000000 + i << " : " << v[i] << endl;
    }
}

/*
 * Input -> a natural number n, followed by n natural numbers between 1000000000 and 1000001000
 * Output -> the frequency of each input
 */

int main () {
    vector<int>v (1001, 0);
    read_data(v);
    print_data(v);
}
