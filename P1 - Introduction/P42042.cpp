// P42042   Classification of characters (1)
// Created by arnxxau on 14/09/2021.
//

//ASCII value of lowercase char from 97 to 122
//ASCII value of uppercase char from 65 to 90

#include "iostream"
using namespace std;

int main(){
    unsigned char x;
    cin >> x;
    bool is_lower_case = x>=97 and x<=122;
    bool is_vowel = x==65 or x==69 or x==73 or x==79 or x==97 or x==85 or x==101 or x==105 or x==111 or x==117;
    if(is_lower_case){
        cout << "lowercase" << endl;
    } else{
        cout << "uppercase" << endl;
    }

    if(is_vowel){
        cout << "vowel" << endl;
    }else{
        cout << "consonant" << endl;
    }
}
