// P82952   Rectangles (2)
// Created by arnxxau on 14/01/2022.
//
#include <iostream>
#include <vector>

using namespace std;

struct Rectangle {
    int x_left, x_right, y_down, y_up;
};

void read(Rectangle& r) {
    cin >> r.x_left >> r.x_right >> r.y_down >> r.y_up;
}

bool is_inter(const Rectangle& r1, const Rectangle& r2) {
    return r1.y_down < r2.y_up and r2.y_down < r1.y_up and r1.x_left < r2.x_right and r2.x_left < r1.x_right;
}

bool exists_inter(const vector<Rectangle>& r) {
    int r_size = r.size();
    for (int i = 0; i < r_size; ++i) {
        for (int j = 0; j < r_size; ++j) {
            if (i != j and not is_inter(r[i], r[j]))
                return false;
        }
    }
    return true;
}

Rectangle result(const vector<Rectangle>& r) {
    int max_x_left = r[0].x_left, min_x_right = r[0].x_right, max_y_down = r[0].y_down, min_y_up = r[0].y_up;
    int r_size = r.size();
    for (int i = 1; i < r_size; ++i) {
        if (max_x_left < r[i].x_left) max_x_left = r[i].x_left;
        if (min_x_right > r[i].x_right) min_x_right = r[i].x_right;
        if (max_y_down < r[i].y_down) max_y_down = r[i].y_down;
        if (min_y_up > r[i].y_up) min_y_up = r[i].y_up;
    }
    return Rectangle{max_x_left, min_x_right, max_y_down, min_y_up};
}

int main() {
    int n;
    cin >> n;
    while (n != 0) {
        vector<Rectangle> rect_v (n);
        for (int i = 0; i < n; ++i) {
            Rectangle r;
            read(r);
            rect_v[i] = r;
        }
        if (exists_inter(rect_v)) {
            Rectangle res = result(rect_v);
            cout << "bottom left point = (" << res.x_left << ", " << res.y_down << "); top right point = (" << res.x_right << ", " << res.y_up << ')' << endl;
        } else {
            cout << "empty intersection" << endl;
        }
        cin >> n;
    }
}
