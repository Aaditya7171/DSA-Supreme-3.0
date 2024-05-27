//Make a program to calculate simple interest and compound interest
#include <iostream>
#include <cmath>// for pow function

int main() {
    
    int p, t, n, si;
    double r, ci;//declared as double for accurate calculations and dealing with fractional values
    // p: initial principal amount
    // r: rate of interest per period time
    // t: time duration for which the money is borrowed
    // n: number of times interest applied

    std::cout << "Enter 'initial principal amount': ";
    std::cin >> p;
    std::cout << "Enter 'rate of interest' : ";
    std::cin >> r;
    std::cout << "Enter 'time period' : ";
    std::cin >> t;
    std::cout << "Enter 'number of times interest applied' : ";
    std::cin >> n;

    // Calculate Simple Interest
    si = (p * r * t) / 100;

    // Calculate Compound Interest
    // The formula used here is A = P(1 + r/n)^(nt)
    // It is transformed to A = P * pow((1 + (r / 100 / n)), n * t) - P to handle fractional values and correct calculation
    // The rate of interest (r) is divided by 100 to convert it from percentage to decimal form before calculation
    ci = p * pow((1 + (r / 100 / n)), n * t) - p;

    std::cout << "Simple interest : " << si << "." << '\n';
    std::cout<< "Compound interest : " << ci << "." << '\n';
    // std::fixed manipulator is used to display the result in standard decimal notation instead of scientific notation

    return 0;
}
