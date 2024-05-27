//Count frequency of each digit (day-7 : problem:1)
#include<iostream>

void countDigits(long long int n) 
{   
    int count = 0, count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0, count6 = 0, count7 = 0, count8 = 0, count9 = 0;

    while(n != 0) {
        int digit = n % 10;

        switch(digit) {
            case 0 : count++;  break;
            case 1 : count1++; break;
            case 2 : count2++; break;
            case 3 : count3++; break;
            case 4 : count4++; break;
            case 5 : count5++; break;
            case 6 : count6++; break;
            case 7 : count7++; break;
            case 8 : count8++; break;
            case 9 : count9++; break;
        }
        n = n / 10;
    }
    if(count > 0)  std::cout << "0 was encountered: " << count  << " times." << '\n';
    if(count1 > 0) std::cout << "1 was encountered: " << count1 << " times."  << '\n';
    if(count2 > 0) std::cout << "2 was encountered: " << count2 << " times."  << '\n';
    if(count3 > 0) std::cout << "3 was encountered: " << count3 << " times."  << '\n';
    if(count4 > 0) std::cout << "4 was encountered: " << count4 << " times."  << '\n';
    if(count5 > 0) std::cout << "5 was encountered: " << count5 << " times."  << '\n';
    if(count6 > 0) std::cout << "6 was encountered: " << count6 << " times."  << '\n';
    if(count7 > 0) std::cout << "7 was encountered: " << count7 << " times."  << '\n';
    if(count8 > 0) std::cout << "8 was encountered: " << count8 << " times."  << '\n';
    if(count9 > 0) std::cout << "9 was encountered: " << count9 << " times."  << '\n';
}


int main() 
{

    long long int num;

    std::cout << "Enter a number: ";
    
    std::cin >> num ;

    countDigits(num);

    return 0;
}

