#include "algo.h"

int main()
{
    int arr[] = {1, 2, 4, 5, 3};
    sortArr(arr, 5);
    // main.o is created and linker is giving error that "symbol(s)" are not defined

    return 0;
}
// to create .o file, use "g++ -c filename.cpp/" in terminal
// create algo.cpp then algo.o and remove algo.cpp
// create main.o
// link both of them : "g++ algo.o main.o -o newProgram"
