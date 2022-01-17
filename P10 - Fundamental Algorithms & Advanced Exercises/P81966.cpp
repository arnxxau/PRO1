// P81966   Dichotomic search
// Created by arnxxau on 16/01/2022.
//
#include <vector>

using namespace std;

int position(double x, const vector<double>& v, int left, int right) {
    int i = (left + right) / 2;
    if (left > right) return -1;
    if (v[i] < x) return position(x, v, i + 1, right);
    else if (v[i] > x) return position(x, v, left, i - 1);
    else return i;
}