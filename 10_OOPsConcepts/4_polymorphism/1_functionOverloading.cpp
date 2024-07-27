//compile time polymorphsism
#include<iostream>

class Add{
public:
    int sum(int x, int y){
        std::cout << "Sum of two ints" << "\n";
        return x+y;
    }
        
    int sum(int x, int y, int z){
        std::cout << "Sum of three ints" << "\n";
        return x+y+z;
    }

    double sum(double x, double y) {
        std::cout << "Sum of two doubles" << "\n";
        return x+y;
    }

};

int main() {
 
    int x = 5, y = 5, z = 2;

    Add add;

    std::cout << add.sum(x,y) << "\n";
    std::cout << add.sum(x,y,z) << "\n";
    std::cout << add.sum(5.6, 1.4) << "\n";
    return 0;
}