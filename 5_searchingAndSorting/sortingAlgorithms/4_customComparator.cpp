#include<iostream>
#include<vector>
#include<algorithm>

void print(std::vector<int> &arr){
    for(int i : arr){
        std::cout  << i << " ";
    }
}

bool myComp(int a, int b){
    // return a < b;//inc
    return a > b;//dec
}

void print2dVec(std::vector<std::vector<int>> &vec){
    for(int i = 0; i < vec.size(); i++){
        std::vector<int> &temp = vec[i];
        int a = temp[0];
        int b = temp[1];
        std::cout << "[" << a << ", " << b << "]";
    }
    std::cout << "]" << "\n";
}

bool compFor1stIndex(std::vector<int> &a, std::vector<int> &b){
    // return a[0] < b[0];//default(0th index based)
    return a[1] < b[1];//1st index based
    //replace "<" by ">" for dec order sorting
}

int main() {

    std::vector<int> v = {44,52,22,11,33};
    std::cout << "Sorted array(Inc order): ";
    std::sort(v.begin(), v.end()); //sorts in asc/inc order(by default)
    print(v);

    std::cout << "\n" << "Sorted array(Dec order): ";
    std::sort(v.begin(), v.end(), myComp);// sorting in desc/dec order
    print(v);


    //sorting a 2D vector(on the basis of 2nd element(1st index))
    std::vector<std::vector<int>> vec = {
        {1,44}, {-1,55}, {0,33}, {6,11}, {2,33}
    };

    // std::vector<std::vector<int>> vec;
    // //taking input in 2d vector
    // int n;
    // std::cout << "Enter size of Vector: ";
    // std::cin >> n;
    // for(int i = 0; i < n; i++){
    //     int a, b;
    //     std::cout << "Enter a,b: ";
    //     std::cin >> a >> b;
    //     std::vector<int> temp;
    //     temp.push_back(a);
    //     temp.push_back(b);
    //     vec.push_back(temp);
    // }  
    // std::cout << "The 2D Array you just entered is: [";
    // print2dVec(vec);

    std::sort(vec.begin(), vec.end(), compFor1stIndex);//it is sorting the vector on the basis of 1st element(0th index)
    std::cout << "\n" << "Sorted 2D Array on the basis of 0th index: ";
    print2dVec(vec);

    return 0;
}