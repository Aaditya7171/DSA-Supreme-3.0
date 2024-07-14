#include<iostream>
using namespace std;

int main(){

    string sentence;

    getline(cin, sentence, 'A');//delimiter char is 'A'
    // syntax--> getline(cin, stringName, delimiter)

    cout << sentence;
    return 0; 
}