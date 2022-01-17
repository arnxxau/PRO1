// P45616   Clock
// Created by arnxxau on 13/01/2022.
//
#include <iostream>

using namespace std;

struct Clock {
    int h;      // hours (0<=h<24)
    int m;      // minutes (0<=m<60)
    int s;      // seconds (0<=s<60)
};

Clock midnight() {
    return Clock{0, 0, 0};
}

void increase(Clock& r) {
    int s = r.s + r.m*60 + r.h*60*60 + 1;
    r.h = (s/3600)%24;
    r.m = (s%3600)/60;
    r.s = (s%3600)%60;
}
void print(const Clock& r) {
    int h = r.h, m = r.m, s = r.s;
    cout << h/10 << h%10 << ':' << m/10 << m%10 << ':' << s/10 << s%10 << endl;
}

int main() {
    Clock clock = midnight();
    print(clock);
    clock = {22,4, 59};
    print(clock);
    increase(clock);
    print(clock);
}
