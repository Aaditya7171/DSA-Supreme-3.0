#include<iostream>
#include<vector>



int main() {
    
    //creating a integer variable using stack memory
    // int a = 5;
    // std::cout << a << '\n';//compiler handles the deallocation of memory in stack automatically 

    //creating a integer variable using heap memory
    // int* p = new int;
    // *p = 5;
    // std::cout << *p << '\n';

    // delete p;//deallocate the heap memory

    //creating an integer array using stack memory
    // int arr[5] = {0};
    // std::cout << arr[0] << " " << arr[1] << '\n';

    // //creating an integer array using heap memory
    // int* brr = new int[5]();//parentheses insures that array is 0 initialized because there is meomory address getting printed without parenthesis on my compiler
    // std::cout << brr[0] << " " << brr[2] << " " <<  brr[1] <<'\n';

    //2D array using stack memory-->
    // int arr[2][4] = {
    //     {1,3,4,5},
    //     {1,23,4,242}
    // };
    // std::cout << arr[1][2];

 
    //2D array using heap memory-->
    //4-->rowCount, 3--> columnCount 
    int** arr = new int*[4];//array of pointers
    for(int i = 0; i < 4; i++){
        arr[i] = new int[3];
    }
    //taking input
    std::cout << "Taking the input in 2D array: ";
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            std::cin >> arr[i][j];
        }
    }
    //printing the value
    std::cout << "Printing the 2D array: ";
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            std::cout << arr[i][j] << " ";
        }
        std::cout << '\n';
    }
    //deallocating the heap memory
    for(int i = 0; i < 4; i++){
        delete[] arr[i];//accesing the deallocated memory results in undefinded behavior aand garbage values
    }
    delete[] arr;//delete array of pointers
    
    //A memory leak occurs when a program allocates memory dynamically (e.g., using new in C++) but fails to release that memory back to the system before the program terminates. This results in a portion of memory being unusable because the program loses the reference to it, preventing the system from reusing that memory space
    //a memory leak would occur if you allocate memory using new but do not properly deallocate it using delete


    return 0;
}