// P11141   Students
// Created by arnxxau on 13/01/2022.
//
#include <iostream>
#include <vector>

using namespace std;

struct Student {
    int idn;
    string name;
    double mark;        // The mark is a value between 0 and 10, or -1 that represents NP
    bool repeater;
};

void information(const vector<Student>& stu, double& min, double& max, double& avg) {
    double n = 0;
    int v_size = stu.size();
    max = 0, min = 10, avg = 0;

    for (int i = 0; i < v_size; ++i) {
        if (not stu[i].repeater and stu[i].mark != -1) {
            if (stu[i].mark > max) max = stu[i].mark;
            if (stu[i].mark < min) min = stu[i].mark;
            avg += stu[i].mark;
            ++n;
        }
    }

    if (n == 0) {
        max = min = avg = -1;
    } else {
        avg /= n;
    }
}
