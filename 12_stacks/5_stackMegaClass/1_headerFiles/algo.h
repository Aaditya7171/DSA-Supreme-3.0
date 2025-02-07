// Even if we include header files more than once, it doesn't gives any error
#ifndef ALGO_H // gaurd(macro)->if header file is already included then it will not let include it again and the code block will not be executed
#define ALGO_H

//<<< function >>>
// since we have included header files 4 times then function definition will also be included 5 times;
// and to avoid that error, gaurd is used

// void sortArr(int arr[], int n)
// {
//     // patented logic of sortArr
//     // but if vendor is giving header file to client then he/she won't want to expose the logic
//     //and for this, only function declaration is given and a .o file as well (algo.in this case)
//     return;
// }

void sortArr(int arr[], int n);

#endif // algo.h
