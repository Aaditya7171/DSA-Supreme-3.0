#include<iostream>

int main(){

    int side;
    std::cout << "Enter side: ";
    std::cin>> side;

    // for(int row = 0; row < (side); row++){
    //     for(int col = 0; col < (side); col++){
    //         if(row == 0 || row == (side-1)){
    //             std::cout << "* ";
    //         }
    //         else{
    //             if(col == 0 || col == (side -1)){
    //                 std::cout << "* ";                
    //             } else {
    //                 std::cout << "  ";
    //             }
    //         }
    //     }
    
    for(int row = 0; row < (side); row++){
        for(int col = 0; col < (side); col++){
            //for diagonal add row==col condition
            if(row == 0 || row == side - 1 || col == 0 || col == side -1 ){
                std::cout << "* ";
            }
            else {
                std :: cout << "  ";
            }
        }
        std::cout << '\n';
    }
    return 0;
}