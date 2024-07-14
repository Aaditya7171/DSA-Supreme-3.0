#include<iostream>

int main()
{

    // void pointer-->
    // void* ptr;//creation of void pointer
    // int x = 10;
    // ptr = &x;//assiging address of x to void pointer "ptr"
    // int* vptr = static_cast<int*>(ptr);//casting the pointer as "int"(it tells the compiler that void pointer should be interpreted as a pointer to a integer)

    // std::cout << *vptr;
    
    // // example of interpreting void pointer as a pointer to a char-->
    // void* ptr1;
    // char ch[10] = "Kuni";
    // ptr1 = &ch;
    // char* vptr1 = static_cast<char*>(ptr1);

    // std::cout << vptr1;


    //array of pointers
    int nums[10] = {10,20,30,40,50,60,70,80,90,100};
    int (*ptr) [10] = & nums;
    std::cout << (*ptr)[0] << '\n';
    std::cout << (*ptr)[5] << '\n';
    std::cout << (*ptr)[9] << '\n';


    return 0;
}