#include<iostream>
#include<limits>
#include<cctype>//for function isalpha()

int main(){

    char alpha;

    std::cout << "Enter a letter to check whether it is a vowel or consonent: ";
    
    //isalpha()checks whether the character alpha is alphabetic. It returns a non-zero value(true) if alpha is a letter otherwise 0(false) 
    while(!(std::cin >> alpha) || !isalpha(alpha)){
        std::cout << "Invalid input. Please enter a letter: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    char lowerCasealpha = tolower(alpha);

    if(lowerCasealpha == 'a' || lowerCasealpha == 'e' || lowerCasealpha == 'i' || lowerCasealpha == 'o' || lowerCasealpha == 'u'){
        std::cout << alpha << " is a vowel.";
    } else {
        std:: cout << alpha << " is a consonent.";
    }

    return 0;
}