#include <vector>
#include <iostream>

using namespace std;


bool is_palindrome(const string& s) {
   bool error = false;
   int s_length = s.length();
   int i = 0;
   while (s_length > i and not error ) {
       if (s[i] != s[s_length - 1 - i]) 
           error = true;
       ++i;
   }
   return not error;
}



int main() {
   string input;
   cin >> input;
   cout <<  is_palindrome(input) << endl;
}
