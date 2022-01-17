// X21943   Test
// Created by arnxxau on 15/01/2022.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Student {
    string name;
    int right;
    int wrong;
};

vector<int> read_right_answers(int n) {
    vector<int> v (n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    return v;
}

vector<Student> get_info_test(const vector<int>& answer, const int& n) {
    int n_answers = answer.size();
    vector<Student> students (n);
    for (int i = 0; i < n; ++i) {
        Student s;
        s.wrong = 0;
        s.right = 0;
        cin >> s.name;
        for (int j = 0; j < n_answers; ++j) {
            int stud_answer;
            cin >> stud_answer;
            if (stud_answer == answer[j])
                ++s.right;
            else if (stud_answer > 0)
                ++s.wrong;
        }
        students[i] = s;
    }
    return students;
}

int compute_mark(const Student& s) {
    return s.right * 2 - s.wrong;
}

bool cmp(const Student& stdu1, const Student& stdu2) {
    if (compute_mark(stdu1) == compute_mark(stdu2))
        return (stdu1.wrong < stdu2.wrong)
                    or (stdu1.wrong == stdu2.wrong and stdu1.name < stdu2.name);
    else return compute_mark(stdu1) > compute_mark(stdu2);
}

void write_results (const vector<Student>& s) {
    int s_size = s.size();
    for (int i = 0; i < s_size; ++i) {
        Student student = s[i];
        cout << student.name << ' ' << student.right << ' ' << student.wrong << endl;
    }
}

int main() {
    int m;
    cin >> m;
    vector<int> answer = read_right_answers(m);
    int n;
    cin >> n;
    vector<Student> v = get_info_test(answer, n);
    sort(v.begin(), v.end(), cmp);
    write_results(v);
}