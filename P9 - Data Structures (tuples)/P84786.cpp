// P84786   Circles (1)
// Created by arnxxau on 14/01/2022.
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

void move(Point& p1, const Point& p2) {
    p1 = {p1.x + p2.x, p1.y + p2.y};
}

struct Circle {
    Point center;
    double radius;
};

void scale(Circle& c, double sca) {
    c.radius = c.radius * sca;
}

void move(Circle& c, const Point& p) {
    move(c.center, p);
}

bool is_inside(const Point& p, const Circle& c) {
    return c.radius > dist(c.center, p);
}

int main() {
    Circle c = {Point{1,2}, 3};
    cout << c.radius << endl;
}
