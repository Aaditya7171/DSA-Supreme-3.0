#include<iostream>

int main(){
    
    int height;
    std::cout << "Enter your height in cms: ";
    std::cin >> height;
    int weight;
    std::cout << "Enter your weight in Kgs: ";
    std::cin >> weight;

    if(height >= 150){
        if(weight >= 60){
            std::cout << "You are a healthy person." <<"\n";
        }
        else{
            std::cout << "You should increase your weight a bit" <<"\n";
        }
    }
    else if(weight > 60){
        std::cout << "You should work on your height a bit" << "\n";
    }
    else{
        std::cout << "You should start taking good care of your health" << "\n"; 
    }

    return 0;
}