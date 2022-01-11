// X99068   Triplet Numbers
// Created by arnxxau on 11/01/2022.
//
#include <iostream>

using namespace std;

//pre: 0 < n and n < 10^9
//post: returns true if n is a triplets-number and false otherwise
bool triplet_number(int n){
    int x = n%1000;
    bool triplet = x%10 == (x/10)%10 and x%10 == (x/100)%10;
    if (n / 1000 == 0 and triplet) return true;
    else if (triplet) return triplet_number(n / 1000);
    else return false;
}

int main(){
    int n;
    while (cin >> n){
        if (triplet_number(n)) cout << "TRUE" << endl;
        else cout << "FALSE" << endl;
    }
}
