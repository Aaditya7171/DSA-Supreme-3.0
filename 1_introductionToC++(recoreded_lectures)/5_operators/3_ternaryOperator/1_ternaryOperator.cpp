#include<iostream>
using namespace std;

int main() {
    int age = 18;

    //syntax : condition ? expression_if_true : expression_if_false;
    
    //we can convert if-else statements as shown below:
    (age >= 18) ? cout << "Can vote" : cout << "Cannot vote";

     return 0;
}