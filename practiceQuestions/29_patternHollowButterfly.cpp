//Pattern: Hollow Butterfly (day-10 : Problem-2)
#include<iostream>
void printHollowButterfly(int n)
{ 
    // Print upper part of the butterfly
    for(int row = 0; row < n; row++) {
        // Print stars for the left wing
        for(int col = 0; col <= row; col++){
            if( col == 0 || col == row){
            std::cout<< "*";
            }
            else{
                std::cout << " ";
            }
        }
        // Print spaces between wings
         for (int space = 0; space < 2 * (n - row - 1); space++) {
            std::cout << " ";
        }
        // Print stars for the right wing
        for(int col = 0; col <= row; col++) {
            if(col == 0 || col == row) {
            std::cout << "*";
            }
            else{
                std::cout << " ";
            }
        }
        std::cout << '\n';
    }
    // Print lower part of the butterfly
    for(int row = n - 2; row >= 0; row--){
        // Print stars for the left wing
        for (int col = 0; col <= row; col++) {
            if (col == row || col == 0){
                std::cout << "*";
            }
            else{
                std::cout << " ";
            }
        }
         // Print spaces between wings
        for (int space = 0; space < 2 * (n - row - 1); space++) {
            std::cout << " ";
        }
        // Print stars for the right wing
        for(int col = 0; col <= row; col++) {
            if(col == 0 || col == row) {
                std::cout<< "*";
            }
            else{
                std::cout << " ";
            }
        }
        std::cout << '\n';
    }
}
int main() 
{
    int n;
    std::cout<< "Enter n: ";
    std::cin>> n;
    printHollowButterfly(n);
    return 0;
}