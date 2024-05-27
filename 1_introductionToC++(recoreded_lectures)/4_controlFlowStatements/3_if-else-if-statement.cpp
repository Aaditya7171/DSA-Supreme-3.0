#include<iostream>

int main(){
    int budget;

    std::cout << "Let's select a good gaming phone for you according to your budget." << "\n";
    std::cout << "Enter your budget: "; 

    std::cin >> budget;

    if(budget < 20000){
        std::cout << "You can have 'iQOO Z9 5G' or 'infinix gt 10 pro' or 'Redmi note 13' " << "\n";
    }
    else if(budget > 20000 && budget < 25000){
        std::cout << "You can get 'iQOO Z7 pro' or 'Xiaomi Redmi note 13 pro' or ' or '' " << "Realme gt neo 3" << "\n";
    }
    else if(budget > 25000 && budget < 30000) {
        std::cout << "You can go for 'iQOO neo 7 pro" << "\n";
    }
    else if(budget > 30000 && budget < 40000){
        std::cout << "You can go for 'iQOO neo 9 pro" << "\n";       
    }
    else if(budget > 40000 && budget < 60000){
        std::cout << "You can go for'oneplus 10R'" << "\n";       
    }
    else if(budget > 60000 && budget <80000){
        std::cout << "You can go for 'iQOO 12' " << "\n";       
    }
    else if(budget > 80000){
        std::cout << "You can go for 'Any latest gen iPad' or 'Rog 8 pro' or 'Samsung galaxy flagship series' or Xiaomi mi 14 ultra'" << "\n";       
    }

    return 0;
}