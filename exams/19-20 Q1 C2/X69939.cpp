// X69939   Metronome
// Created by arnxxau on 11/1/22.
//
#include <iostream>

using namespace std;

int time_lapse(int time_1, int time_2) {
    if (time_1 >= time_2) return (60 - time_1) + time_2;
    else return time_2 - time_1;
}

int main() {
    int time_1, time_2;
    cin >> time_1 >> time_2;
    int lapse = time_lapse(time_1, time_2);
    time_1 = time_2;
    bool metronome = true;
    while (cin >> time_2 and time_2 != -1 and metronome) {
        metronome = time_lapse(time_1, time_2) == lapse;
        time_1 = time_2;
    }
    if (metronome)
        cout << lapse << endl;
    else
        cout << 0 << endl;
}
