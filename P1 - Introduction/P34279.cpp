// P34279   Add one second
// Created by arnxxau on 20/09/2021.
//
#include "iostream"
using namespace std;

int main() {
    int h, m, s;
    cin >> h >> m >> s;

    s++;
    if(s >= 60){
        s = 0;
        m++;
    }
    if(m >= 60){
        m = 0;
        h++;
    }
    if(h == 24) h = 0;

    string output;
    if(h < 10) output +="0" + to_string(h);
    else output += to_string(h);
    if(m < 10) output += ":0" + to_string(m);
    else output += ":" + to_string(m);
    if(s < 10) output += ":0" + to_string(s);
    else output += ":" + to_string(s);

    cout << output << endl;
}
