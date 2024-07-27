#include<iostream>

int createNum(int numOfDigits)
{
    int num = 0;
    for(int i = 0; i < numOfDigits; i++){
        std::cout << "Enter digit: ";
        int digit;
        std::cin >> digit;
        num = num * 10 + digit;
        std::cout << "Num created so far: " << num << " "; 
    }
    return num;
}

int main()
{
    int numOfDigits;
    std::cin >> numOfDigits;

    int num = createNum(numOfDigits);

    std::cout << num;

    return 0;

}
