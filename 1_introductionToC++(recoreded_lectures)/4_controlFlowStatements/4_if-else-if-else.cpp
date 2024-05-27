#include<iostream>

int main(){

      int m = 55;

    if(m > 90){
        std::cout <<"A" << "\n";
    }
    else if(m > 80){
        std::cout <<"B" << "\n";
    }
    else if(m > 70){
        std::cout <<"C" << "\n";
    }
    else if(m > 60){
        std::cout <<"D" << "\n";
    }
//if all of the above condtions are wrong then "else" block will be executed
    else {
        std::cout << "Keep pushing forward, you can make it." << "\n";
    } 
    
    return 0;
}