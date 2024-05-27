//Check abundant number (day-11 : Problem-2)
#include <iostream>

int sumOfDivisors(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum;
}

bool isAbundant(int num) {
    return sumOfDivisors(num) > num;
}

int main() {
    int num;

    std::cout << "Enter a number to check if it's an abundant number: ";
    std::cin >> num;

    if (isAbundant(num)) {
        std::cout << num << " is an abundant number.";
    } else {
        std::cout << num << " is not an abundant number.";
    }

    return 0;
}
