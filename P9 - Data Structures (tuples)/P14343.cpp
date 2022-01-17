// P14343   Judge (1)
// Created by arnxxau on 14/01/2022.
//
#include <iostream>
#include <vector>

using namespace std;

struct Submission {
    string idn;
    string exer;
    int time;
    string res;
};

typedef vector<Submission> History;

struct Student {
    string idn;
    int n_submissions;
    int m_green;
    int last_subm;
    int green;
    int red;
    vector<string> problems;
};



History store_submissions(int n) {
    History h (n);
    for (int i = 0; i < n; ++i) {
        Submission s;
        cin >> s.idn >> s.exer >> s.time >> s.res;
        h[i] = s;
    }
    return h;
}

bool exists_problem_in(const vector<string> v, const string& s) {
    int v_size = v.size();
    for (int i = 0; i < v_size; ++i) {
        if (v[i] == s) return true;
    }
    return false;
}

bool exists_student_in(const vector<Student>& s, const string& idn) {
    int s_size = s.size();
    for (int i = 0; i < s_size; ++i) {
        if (s[i].idn == idn) return true;
    }
    return  false;
}

void fill_student(const Submission& s, Student& stdu) {
    if (not exists_problem_in(stdu.problems, s.exer)) {
        if (s.res == "green") ++stdu.green;
        else if (s.res == "red") ++stdu.red;
        ++stdu.n_submissions;
        stdu.problems.push_back(s.exer);
    }
    // type quantity
    if (s.res == "green") ++stdu.m_green;
    // decide last submission
    if (s.time > stdu.last_subm) stdu.last_subm = s.time;
}

vector<Student> compute_students(const History& h) {
    int h_size = h.size();
    vector<Student> students;
    Student s0 = {h[0].idn, 0, 0, 0, 0, 0, {}};
    students.push_back(s0);
    for (int i = 0; i < h_size; ++i) {
        for (int j = 0; j < students.size(); ++j) {
            if (h[i].idn == students[j].idn) {
                fill_student(h[i], students[j]);
            } else if (not exists_student_in(students, h[i].idn)) {
                students.push_back(Student{h[i].idn, 0, 0, 0, 0, 0, {}});
            }
        }
    }
    return students;
}


bool interchange(const int& current, const int& max, const string& name1, const string& name2) {
    return (current > max and current != 0) or (current == max and name1 < name2);
}

void get_stadistics(const vector<Student>& s, Student& max_green, Student& max_ex_green, Student& max_red, Student& max_ex, Student& last_sub) {
    int n_students = s.size();
    for (int i = 0; i < n_students; ++i) {
        Student student = s[i];
        string name1 = student.idn;
        if (interchange(student.m_green, max_green.m_green, name1, max_green.idn)) max_green = s[i];
        if (interchange(student.green, max_ex_green.green, name1, max_ex_green.idn)) max_ex_green = s[i];
        if (interchange(student.red, max_red.red, name1, max_red.idn)) max_red = s[i];
        if (interchange(student.n_submissions, max_ex.n_submissions, name1, max_ex.idn)) max_ex = s[i];
        if (interchange(student.last_subm, last_sub.last_subm, name1, last_sub.idn)) last_sub = s[i];
    }
}

Student student_null() {
    return Student{"null", -1, -1, -1, -1, -1, {}};
}

int main() {
    int n;
    cin >> n;
    Student green_subm = student_null();
    Student green = student_null();
    Student red = student_null();
    Student ex = student_null();
    Student last_sub = student_null();

    if (n != 0) {
        History h = store_submissions(n);
        vector<Student> s = compute_students(h);
        get_stadistics(s, green_subm, green, red, ex, last_sub);
    }

    cout << "student with more green submissions:       ";
    if (green_subm.idn != "null") cout << green_subm.idn << " (" << green_subm.m_green << ')';
    else cout << '-';
    cout << endl;

    cout << "student with more green exercises:         ";
    if (green.idn != "null") cout << green.idn << " (" << green.green << ')';
    else cout << '-';
    cout << endl;

    cout << "student with more red exercises:           ";
    if (red.idn != "null") cout << red.idn << " (" << red.red << ')';
    else cout << '-';
    cout << endl;

    cout << "student with more tried exercises:         ";
    if (ex.idn != "null") cout << ex.idn << " (" << ex.n_submissions << ')';
    else cout << '-';
    cout << endl;

    cout << "student who has done the last submission:  ";
    if (last_sub.idn != "null") cout << last_sub.idn;
    else cout << '-';
    cout << endl;
}
