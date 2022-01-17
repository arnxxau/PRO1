// X90063   Priority clients
// Created by arnxxau on 15/01/2022.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

struct Client {
    string client_id;
    Date birth_date;
    bool priority;
    int total_amount;
};

//returns true when client a is older than b. Returns false otherwise
bool is_older(const Client& a, const Client& b) {
    Date x = a.birth_date;
    Date y = b.birth_date;
    if (x.year != y.year) return x.year < y.year;
    if (x.month != y.month) return x.month < y.month;
    return x.day < y.day;
}

void get_client(Client& client) {
    cin >> client.client_id;
    cin >> client.birth_date.day;
    cin >> client.birth_date.month;
    cin >> client.birth_date.year;
    int n;
    cin >> n;
    int higher_than_1000 = 0;
    for (int i = 0; i < n; ++i) {
        int amount;
        cin >> amount;
        higher_than_1000 += amount >= 1000;
        client.total_amount += amount;
    }
    client.priority = higher_than_1000 >= 3;
}

//gets client info vector v
void get_client_vector(vector<Client>& v) {
    int n = v.size();
    for (int i = 0; i < n; ++i) get_client(v[i]);
}

//prints date info in format dd-mm-yyyy
void print_date(Date date) {
    if (date.day < 10) cout << 0;
    cout << date.day << '-';
    if (date.month < 10) cout << 0;
    cout << date.month << '-';
    cout << date.year;
}

//writes v on output channel
void write_client_vector(const vector<Client>& v) {
    int n = v.size();
    for (int i = 0; i < n; ++i) {
        cout << v[i].priority << ' ' << v[i].total_amount << ' ';
        print_date(v[i].birth_date);
        cout << ' ' << v[i].client_id << endl;
    }
}

bool is_date_equal(const Client& c1, const Client& c2) {
    Date d1 = c1.birth_date;
    Date d2 = c2.birth_date;
    return d1.day == d2.day and d1.month == d2.month and d1.year == d2.year;
}

bool cmp(const Client& c1, const Client& c2) {
    if (c1.priority != c2.priority) return c1.priority;
    else if (c1.total_amount == c2.total_amount and not is_date_equal(c1, c2)) return is_older(c1, c2);
    else if (c1.total_amount == c2.total_amount) return c1.client_id < c2.client_id;
    else return c1.total_amount > c2.total_amount;
}

int main() {
    int n;
    cin >> n;
    vector<Client> v(n);
    get_client_vector(v);
    sort(v.begin(),v.end(),cmp);
    write_client_vector(v);
}