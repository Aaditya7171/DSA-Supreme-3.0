#include<iostream>

int main()
{
    // int arr[] = {10,20,30,40};
    // int* ptr = arr;//pointer to an array "arr"
    // std::cout << ptr << '\n';

    // arr = arr+1//error--> value is modifiable
    
    // std::cout << arr+1;//this will not give error as we are not modifying the value instead we are pritning it

    // int* qtr = ptr  + 1;;

    // std::cout << "arr: " << arr << '\n';

    // std::cout << "&arr: " << &arr << '\n';

    // std::cout << "arr[0]: " << arr[0] << '\n';

    // std::cout << "&arr[0]: " << &arr[0] << '\n';

    // std::cout << "ptr: " << ptr << '\n';

    // std::cout << "&ptr: " << &ptr << '\n';

    // std::cout << "*ptr: " << *ptr << '\n';

    // std::cout << "&ptr: " << &ptr << '\n';

    // std::cout << "*ptr: " << *ptr << '\n';

    // std::cout << "*arr+1: " << *arr+1 << '\n';

    // std::cout << "*(arr+1): " << *(arr+1) << '\n';

    // std::cout << "*(arr+3): " << *(arr+3) << '\n';

    // std::cout << "*ptr + 1: " << *ptr + 1 << '\n';

    // std::cout << "*(ptr+2): " << *(ptr+2) << '\n';

    // std::cout << "qtr: " << qtr << '\n';

    // std::cout << "*qtr: " << *qtr << '\n';

    // std::cout << "&qtr: " << &qtr << '\n';

    // std::cout << "*(qtr+2): " << *(qtr+2) << '\n';

    // std::cout << "*qtr+2: " << *qtr+2 << '\n';
 
    //pointer with char arrays--.

    // char ch[20] = "Babbar";
    // char* cptr = ch;
    // std::cout << cptr << '\n';//whole string is getting printed
    // std::cout << "ch: " << ch << '\n';
    // std::cout << "&ch: " << &ch << '\n';
    // std::cout << "ch[0]: " << ch[0] << '\n';
    // std::cout << "&ch[0]: " << &ch[0] << '\n';
    // std::cout << "&cptr " << &cptr << '\n';
    // std::cout << "*cptr: " << *cptr << '\n';
    // std::cout << "*(cptr+3): " << *(cptr+3) << '\n';
    // std::cout << "cptr: " << cptr << '\n';
    // std::cout << "cptr+3: " << cptr+3 << '\n';

    // char ch2 = 'y';
    // char* c2ptr = &ch2;
    // std::cout << c2ptr;//unappropiate beahvior may be seen(pritning till null charecter)

    // char* ptr = "babbar";//bad practice 
    // std::cout << ptr;

    //void pointer-->
    // void* ptr;//creation of void pointer
    // int x = 10;
    // ptr = &x;//assiging address of x to void pointer "ptr"
    // int* vptr = static_cast<int*>(ptr);//casting the pointer as "int"(it tells the compiler that void pointer should be interpreted as a pointer to a integer)

    // std::cout << *vptr;
    
    //example of interpreting void pointer as a pointer to a char-->
    void* ptr1;
    char ch[10] = "Kuni";
    ptr1 = &ch;
    char* vptr1 = static_cast<char*>(ptr1);

    std::cout << vptr1;

    return 0;
}