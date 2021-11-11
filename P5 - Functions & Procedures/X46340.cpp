// X46340   Function for the sum of the minimum and the maximum of three integers
// Created by arnxxau on 11/11/21.
//
#include <iostream>
using namespace std;

int sum_min_max(int x, int y, int z) {
    int max = x;
    int min = y;
    if (min > max) {
        max = y;
        min = x;
    }
    int mid_n = z;
    if (mid_n > max) {
        int aux;
        aux = mid_n;
        mid_n = max;
        max = aux;
    }
    if (min > mid_n) min = mid_n;
    return max + min;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << sum_min_max(a, b, c);
}
