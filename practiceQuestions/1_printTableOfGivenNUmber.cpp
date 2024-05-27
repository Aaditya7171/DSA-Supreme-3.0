//You have to take input any number from user and print the table till number*10
#include<iostream>

int main(){

    int num;

    std::cout<< "Enter a number to know it's table : ";

    std::cin >> num;

    for(int i = 1; i <= 10; i++) {
        int table;
        table = num * i;
        std::cout << table << " ";
    }
    
    return 0;
}