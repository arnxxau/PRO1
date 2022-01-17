// X28106   Substring occurrences
// Created by arnxxau on 16/01/2022.
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Parst {
    int index;
    string sub, s;
    vector<int> vap;
};

// Pre: 0 <= k < y.size()
// Post: The result is the first position i>=k where substring x is found in y,
//       or -1 if no such position exists
int substring_from_k (const string& x, int k,  const string& y) {
    int i = k;
    int x_length = x.length(), y_length = y.length();
    while (i < y_length) {
        int i_copy = i;
        int j = 0;
        bool match = x[0] == y[i] and y_length - i >= x_length;
        while (i_copy < y_length and j < x_length and match) {
            match = x[j] == y[i_copy];
            ++i_copy; ++j;
        }
        if (match) return i;
        ++i;
    }
    return  -1;
    /// ADD YOUR CODE HERE
}

// Pre: x.size()>0 and y.size()>0
// Post: The result is a vector containing all the positions in y where
//       substring x occurs.
vector<int> substrings(const string& x, const string& y) {
    vector<int> idxs;
    int idx = substring_from_k(x, 0, y);
    while (idx != -1) {
        idxs.push_back(idx);
        idx = substring_from_k(x, idx + 1, y);
    }
    return idxs;
    /// ADD YOUR CODE HERE
}

// Comparison function to sort the output as required
bool comp (const Parst& psa, const Parst& psb) {
    if (psa.sub != psb.sub) return psa.sub < psb.sub;
    else return psa.index < psb.index;
    /// ADD YOUR CODE HERE
}

int main() {
    vector<Parst> vparst;
    Parst pst;
    pst.index = 1;
    while (cin >> pst.sub >> pst.s) {
        pst.vap = substrings(pst.sub,pst.s);
        vparst.push_back(pst);
        ++pst.index;
    }
    sort(vparst.begin(),vparst.end(),comp);
    int vpn = vparst.size();
    for (int i = 0; i < vpn;++i){
        cout << vparst[i].sub << " " << vparst[i].s;
        int n = vparst[i].vap.size();
        for (int j = 0; j < n; ++ j)
            cout << " " << vparst[i].vap[j];
        cout << endl;
    }
}