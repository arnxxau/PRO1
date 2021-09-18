//
// Created by arnxxau on 20/09/2021.
//
#include "iostream"
using namespace std;

//input: five natural numbers that represent the years, days, hours, minutes and seconds
//output: input in seconds
int main() {
  int y, d, h, m, s;
  cin >> y >> d >> h >> m >> s;
  cout << y*365*24*60*60 + d*24*60*60 + h*60*60 + m*60 + s << endl;
}