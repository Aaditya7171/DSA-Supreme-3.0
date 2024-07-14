#include<iostream>

int main()
{
    // int a = 5;

    // std::cout << &a;//printing address of a(&a --> storing address of a)

    // int b = &a; //error--> can't store address of a variable in int type variable

    // int* ptr = &a;//syntax to create a pointer(int* --> pointer to an integer)

    // std::cout << a << '\n';

    // std::cout << &a << '\n';//address of a 

    // std::cout << ptr << '\n';//ptr has address of a

    // std::cout << &ptr << '\n';//address of ptr

    // std::cout << *ptr << '\n';//value at address stored in ptr
    
    // std::cout << sizeof(ptr) << '\n';

    // char ch = 'k';
    // char* ptr1 = &ch;
    // std::cout << sizeof(ptr1) << '\n';

    // long lg = 324772;
    // long* ptr2 = &lg;
    // std::cout << sizeof(ptr2) << '\n';

    // bool bl = true;
    // bool* ptr3 = &bl;
    // std::cout << sizeof(ptr3) << '\n';
        //size of pointer will be same for all datatypes of pointers(4 bytes) and it may depend on the system architecture 
        //address of pointer is  represented by an hexadecimal value   

    // int* tptr;
    // std::cout << tptr << '\n';//garbage value will be printed i.e., address of a memory location 
    // std::cout << *tptr << '\n';//value stored at address of cptr(again may be a garbage value);{segmentation fault or runtime error may occur }

    //null pointer--->
    // int* nptr = 0;
    // std::cout << nptr << '\n';//0
    // std::cout << *nptr << '\n';//blank
   
    // std::cout << *a << '\n';//error--> value stored at address a, but a is not stroing any address
    // std::cout << (ptr = ptr + 1) << '\n';
    // std::cout << (*ptr = *ptr + 1) << '\n';
    // std::cout << (*ptr = *ptr / 2) << '\n';
     
    int a = 10;
    int* p = &a;
    int* q = p;//copying pointer

    std::cout << "&a: " << &a << '\n';
    std::cout << "p: "  << p << '\n';
    std::cout << "&p: "  << &p << '\n';
    std::cout << "*p: "  << *p << '\n';
    std::cout << "q: "  << q << '\n';
    std::cout << "&q: "  << &q << '\n';
    std::cout << "*q: "  << *q << '\n';

    return 0;
}