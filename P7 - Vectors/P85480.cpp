#include<iostream>
#include<vector>

using namespace std;

bool is_prime (int n, int d) {
    // base case
    if (n < 2) return false;
    else if (n%d == 0 and n != d) return false;
    else if (d*d > n) return true;
    // general case
    return is_prime(n, ++d);
}

vector<int> get_pair_sum(const vector<int>& v, int idx) {
    int v_size = v.size() - 1;
    vector<int> v_sums (v_size);
    int initial = v[idx];
    for (int i = 0; i < v_size; ++i) {
        if (i != idx) 
            v_sums[i] = initial + v[i];
        else { v_sums[i] = initial + v[i + 1];
            ++i;
        }
        }
    return v_sums;
}

void read_data(vector<int>& v) {
    int v_size = v.size();
    for (int i = 0; v_size > i; ++i) {
        cin >> v[i];
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> v (n);
    read_data(v);
    bool match = false;
   vector<int> sums = get_pair_sum(v, 0);
  for (auto x : sums) cout << x << ' '; 

    if (match) cout << "yes" << endl;
    else cout << "no" << endl;
}
