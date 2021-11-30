// P20006   Prefixed expression
// Created by arnxxau on 30/11/21.
//
#include <iostream>
using namespace std;

int expr() {
    char c;
    cin >> c;
    if ('0' <= c and c <= '9') return c - '0';

    // base case -> two nums found
    int x = expr();
    int y = expr();

    if (c == '+') return x + y;
    else if (c == '-') return x - y;
    else return x * y;
}

int main() {
    cout << expr() << endl;
}