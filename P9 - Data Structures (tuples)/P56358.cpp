// P56358   Add and subtract one second
// Created by arnxxau on 13/01/2022.
//
#include <iostream>

using namespace std;

struct Time {
    int hour, minute, second;
};


void one_second(const Time& t, Time& t1, Time& t2) {
    int s = t.second + t.minute*60 + t.hour*60*60 + 1;
    t1.hour = (s/3600)%24;
    t1.minute = (s%3600)/60;
    t1.second = (s%3600)%60;
    s -= 2;
    if (s < 0)
        s += 24*60*60;
    t2.hour = (s/3600)%24;
    t2.minute = (s%3600)/60;
    t2.second = (s%3600)%60;
}

int main() {
    int h, m, s;
    while (cin >> h >> m >> s) {
        Time t1, t2;
        one_second(Time{h, m, s}, t1, t2);
        cout << t1.hour << ' ' << t1.minute << ' ' << t1.second << endl;
        cout << t2.hour << ' ' << t2.minute << ' ' << t2.second << endl;
    }
}