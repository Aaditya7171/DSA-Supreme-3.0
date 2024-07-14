#include<iostream>

float kmToMiles(int km){

    float res = (km/1.609344);

    return res;
}

int main() 
{
    float km, miles;

    std::cout << "Enter Distance in KM: ";

    std::cin >> km;

    std:: cout << km << " km = " << kmToMiles(km) << " Miles";

    return 0;
}