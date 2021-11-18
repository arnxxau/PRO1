#include <iostream>
using namespace std;

void infoSequence(int& max, int& lpos) {
    int input;
    cin >> input;
    int i = 1;
    max = input, lpos = 1;
    while (input != 0) {
       if (input >= max) {
            max = input;
            lpos = i;
       }
       cin >> input;
       ++i;
    }
}

int main() {
    int max, lpos;
    infoSequence(max, lpos);
    cout << max << ' ' << lpos << ' ';
    int i = 0, input;
    cin >> input;
    bool match = false;
    while (input != 0 and not match) {
        if (input == max) match = true;
        cin >> input;
        ++i;
    }
    if (match) cout << i << endl;
    else cout << '-' << endl;
}
