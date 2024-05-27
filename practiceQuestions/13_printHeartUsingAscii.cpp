//Print heart using ascii value(3)
#include<iostream>

int main() {

    //if we try to store integer in char datatype then, it's ascii value get stored and when we print it because ascii of 3 is a non printable chacacter in most ASCII tables,  but in some character encodings like Windows-1252, it corresponds to the heart symbol (♥). 
    char heart = 3;

    std::cout << heart;

    return 0;

}