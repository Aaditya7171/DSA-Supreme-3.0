//compile time polymorphsism
#include<iostream>

class complex{
public:
    int real, imag;
    
    complex(){real = imag = -1;}

    complex(int r, int i) : real(r), imag(i){};

    // syntax for operator overlaoding
    // return_type operator <op> (args) {
        //function's body
        //    return " ";
    // }

    complex operator+(const complex &B) {
        //this-> A instance
        complex temp;
        temp.real = this->real + B.real;
        temp.imag = this->imag + B.imag;
        return temp;
    }

    complex operator-(const complex &B) {
        complex temp;
        temp.real = this->real - B.real;
        temp.imag = this->imag - B.imag;
        return temp;
    }

    bool operator==(const complex &B) {
        return ((this->real == B.real) && (this->imag == B.imag));
    }

    void  print () {
        printf("[%d + i%d] \n", this->real, this->imag);
    }

};

int main() {

    complex A(3,1);
    complex B(3,4);

    // int c = 4 + 3; // operator "+" knows to add integers
    // complex C = A + B; // but don't knows to add complex numbers
     
    //after op overloading
    // complex C = A + B;//no error
    // C.print();

    // complex D = A - B;
    // D.print();

    //checking if two complex numebers are equal
    // bool a = A == B;//error
    //after op overloading
    bool a = A==B;
    std::cout << a << "\n";

    return 0;
}