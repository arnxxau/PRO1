// X93037   Search in ordered list
// Created by arnxxau on 17/01/2022.
//
#include <iostream>
#include <vector>

using namespace std;

// some additional functions may be necessary here


//pre:  v is ordered according to string length first and then
//      by usual string order. All strings are different.
//post: returns the position of s in v.
//      If s  is not in v, returns -1
int effi_search(const vector<string>& v, const string& s) {
    int s_length = s.size();
    int left = 0, right = v.size() - 1;
    while (left <= right) {
        int i = (left + right) / 2;
        if (v[i].length() < s_length) left = i + 1;
        else if (v[i].length() > s_length) right = i - 1;
        else if (v[i] < s) left = i + 1;
        else if (v[i] > s) right = i - 1;
        else return i;
    }
    return -1;
}


int main() {
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];
    string s;
    while (cin >> s)
        cout << effi_search(v, s) << endl;
}