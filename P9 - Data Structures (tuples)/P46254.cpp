// P46254   Distance between two points
// Created by arnxxau on 13/01/2022.
//
#include <iostream>
#include <cmath>

using namespace std;

struct Point {
  double x, y;
};

double dist(const Point& a, const Point& b) {
    double x = a.x - b.x, y = a.y - b.y;
    return sqrt(x*x + y*y);
}

int main() {
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << dist(Point{x1, y1}, Point{x2, y2});
}