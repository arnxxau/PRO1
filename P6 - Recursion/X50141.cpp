// X50141   Function to fatten numbers
// Created by arnxxau on 29/11/21.
//
#include <iostream>
using namespace std;

int max_of_2(int x, int y) {
    int max = x;
    if (y > max) max = y;
    return max;
}

int fatten(int x) {
    // base case
    if (x < 10) return x;
    int flatt = fatten(x/10);
    int max = max_of_2(flatt%10, x%10);
    return flatt * 10 + max;
}

int main() {
    cout << max_of_2(4, 9) << endl;
    cout << fatten(933) << endl;
}