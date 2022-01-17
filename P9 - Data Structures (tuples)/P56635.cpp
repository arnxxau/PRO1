// P56635   Rectangles (1)
// Created by arnxxau on 14/01/2022.
//
#include <iostream>

using namespace std;

struct Rectangle {
    int x_left, x_right, y_down, y_up;
};

void read(Rectangle& r) {
    cin >> r.x_left >> r.x_right >> r.y_down >> r.y_up;
}

int relationship(const Rectangle& r1, const Rectangle& r2) {
    if (r1.y_up == r2.y_up  and r1.y_down == r2.y_down and r1.x_left == r2.x_left  and r1.x_right == r2.x_right)
        return 4;
    else if (r1.x_left >= r2.x_left and r2.x_right >= r1.x_right and r1.y_down >= r2.y_down and r1.y_up <= r2.y_up)
        return 1;
    else if (r2.x_left >= r1.x_left and r1.x_right >= r2.x_right and r2.y_down >= r1.y_down and r2.y_up <= r1.y_up)
        return 2;
    else if (r1.y_down > r2.y_up or r2.y_down > r1.y_up or r1.x_left > r2.x_right or r2.x_left > r1.x_right)
        return 0;
    else
        return 3;
}


bool is_inter(const Rectangle& r1, const Rectangle& r2) {
    return not (r1.y_down > r2.y_up or r2.y_down > r1.y_up or r1.x_left > r2.x_right or r2.x_left > r1.x_right);
}


int main() {
    int n;
    cin >> n;
    Rectangle r1;
    Rectangle r2;
    for (int i = 0; i < n; ++i) {
        read(r1);
        read(r2);
        int rel =  relationship(r1, r2);
        if (rel == 0) cout << "rectangles do not intersect" << endl;
        else if (rel == 1) cout << "the first rectangle is inside the second one" << endl;
        else if (rel == 2) cout << "the second rectangle is inside the first one" << endl;
        else if (rel == 3) cout << "rectangles intersect" << endl;
        else cout << "rectangles are identical" << endl;

        cout << is_inter(r1, r2) << endl;
    }
}
