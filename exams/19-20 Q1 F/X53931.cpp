// X53931   Objects in a room
// Created by arnxxau on 17/01/2022.
//
#include <iostream>
#include <vector>
using namespace std;

struct Item {
    string name;
    int quantity;
};

typedef vector<vector<Item> > Room;

// Pre: n, m integers greater than 0
// Post: it returns a valid n x m Room
Room read_room(int n, int m) {
    Room room (n, vector<Item>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            Item item;
            cin >> item.name >> item.quantity;
            room[i][j] = item;
        }
    }
    return room;
    // YOUR CODE HERE
}

// Pre: room has at least one object;
//      f, c is a valid position of room.
// Post: it returns the total amount of objects in room having name s
//       and included in the submatrix having its top left corner at
//       position row f, column c, and its bottom right corner as in room
int how_many_objects(const Room& room, int f, int c, string s) {
    int rows = room.size(), clms = room[0].size();
    int count = 0;
    for (int i = f; i < rows; ++i) {
        for (int j = c; j < clms; ++j) {
            if (room[i][j].name == s)
                count += room[i][j].quantity;
        }
    }
    return count;
    // YOUR CODE HERE
}

int main() {
    int n, m;
    cin >> n >> m;
    Room room = read_room(n, m);
    int f, c;
    string s;
    while (cin >> f >> c >> s) {
        cout << s << ": " << how_many_objects(room, f, c, s) << endl;
    }
}
