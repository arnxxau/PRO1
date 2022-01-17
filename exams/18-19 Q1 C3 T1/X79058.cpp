// X79058   Counting forest data
// Created by arnxxau on 16/01/2022.
//
#include <iostream>
#include <vector>

using namespace std;

struct Things {
    string name;
    string color;
    string poison;
    string burns;
    double height;
};

typedef vector<Things> Forest;


Things read_thing() {
    Things things;
    cin >> things.name;
    cin >> things.color;
    cin >> things.poison;
    cin >> things.burns;
    cin >> things.height;
    return things;
}

void read_data(Forest& v) {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        v.push_back(read_thing());
    }
    // ADD YOUR CODE HERE
}

int count(const Forest& v, string name, string color,
          string poison, string burns, double height) {
    int forest_size = v.size();
    int count = 0;
    for (int i = 0; i < forest_size; ++i) {
        Things thing = v[i];
        bool n = thing.name == name or name == "*";
        bool c = thing.color == color or color == "*";
        bool p = thing.poison == poison or poison == "*";
        bool b = thing.burns == burns or burns == "*";
        bool h = thing.height >= height or height == 0.0;
        count += n and c and p and b and h;
    }
    return count;
    // ADD YOUR CODE HERE
}

int main() {
    Forest v;
    read_data(v);
    string name, color, poison, burns;
    double height;
    while (cin >> name >> color >> poison >> burns >> height) {
        cout << count(v, name, color, poison, burns, height) << endl;
    }
    // ADD YOUR CODE HERE
}
