//Check given year is leap year or not(day-11 : Problem-1)
#include<iostream>

bool isLeapYear(int year)
{
    if((year % 4) == 0) {
        if((year % 100) == 0){
            if((year % 400) == 0){
                return true;
            } else {
                return false;
            } 
        } else {
            return true;
        }
    }
    return false;
}

int main() 
{
    int year;
    std::cout << "Enter the year to check leap year or not: ";
    std::cin>> year;

    bool check = isLeapYear(year);
    if(check) {
        std::cout << year << " is a leap year.";
    } else {
        std::cout << year << " is not a leap year.";
    }
    return 0;
}
