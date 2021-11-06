// X12568   Draw a right triangle
// Created by arnxxau on 6/11/21.
//
#include <iostream>
using namespace std;

/*
 ***** - 5*
  *  * - 1w, 1*, 2w, 1* (i = 0)
   * * - 2w, 1*, 1w, 1* (i = 1)
    ** - 3w, 1*, 0w, 1* (i = 2)
     * - 4w
 */
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) cout << '*';
    cout << endl;
    for (int i = 0; i < n - 2; ++i) {
        for (int j = 0; j < i+1; ++j) cout << ' ';
        cout << '*';
        for (int j = 0; j < (n-3)-i; ++j) cout << ' ';
        cout << '*' << endl;
    }
    for (int j = 0; j < n-1; ++j) cout << ' ';
    cout << '*' << endl;
}
