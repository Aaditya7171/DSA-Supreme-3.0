#include<iostream>

int main(){
    int arr[4][3] = {
        {1,2,3},
        {5,6,7},
        {8,9,10},
        {11,12,13}
    };
     for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            std::cout << arr[i][j] << " ";
        }
        std::cout << '\n';
    }
    
    std::fill(&arr[0][0], &arr[0][0] + (4*3), -1);
  

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            std::cout << arr[i][j] << " ";
        }
        std::cout << '\n';
    }

}