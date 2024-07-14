#include<iostream>

float areaOfCircle(float r)
{
    float area = (3.14 * r * r);

    return area;
}

int main() {
    float radius = 5.323;

    std::cout << "Area: " << areaOfCircle(radius);

    return 0;

}