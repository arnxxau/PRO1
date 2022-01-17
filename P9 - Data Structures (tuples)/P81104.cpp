// P81104   F001A. Students at the FIPS
// Created by arnxxau on 15/01/2022.
//
#include <iostream>
#include <vector>

using namespace std;


struct Subject {
    string name;                // Subject’s name
    double mark;                // Between 0 and 10, -1 shows NP
};

struct Student {
string name;             // Student’s name
int idn;                 // Student’s IDN
vector<Subject> subj;    // Subject list of the student
};

double return_mark(const vector<Student>& s, const string& subject_name, const int& student_id) {
    int stud_size = s.size();
    for (int i = 0; i < stud_size; ++i) {
        if (s[i].idn == student_id) {
            vector<Subject> s_vector = s[i].subj;
            int subj_size = s_vector.size();
            for (int j = 0; j < subj_size; ++j) {
                if (s_vector[j].name == subject_name)
                    return s_vector[j].mark;
            }
        }
    }
    return  -1;
}

double average(const vector<Subject>& s){
    int subj_size = s.size();
    double sum = 0;
    int div = 0;
    for (int i = 0; i < subj_size; ++i) {
        if (s[i].mark != -1) {
            sum += s[i].mark;
            ++div;
        }

    }
    if (div == 0) return -1;
    else return sum / div;
}

int count(const vector<Student>& s, const string& subj_name, const int& student_id) {
    int s_size = s.size();
    double mark = return_mark(s, subj_name, student_id);
    int count = 0;
    for (int i = 0; i < s_size; ++i) {
        if (average(s[i].subj) > mark)
            ++count;
    }
    return count;
}

Student get_student() {
    Student s;
    cin >> s.name;
    cin >> s.idn;
    int n;
    cin >> n;
    vector<Subject> subj_v(n);
    for (int i = 0; i < n; ++i) {
        Subject subj;
        cin >> subj.name;
        cin >> subj.mark;
        subj_v[i] = subj;
    }
    s.subj = subj_v;
    return s;
}

int main() {
    int n;
    cin >> n;
    vector<Student> s(n);
    for (int i = 0; i < n; ++i) {
        s[i] = get_student();
    }
    int id;
    string subject;
    while (cin >> id >> subject) {
        cout << count(s, subject, id) << endl;
    }
}

