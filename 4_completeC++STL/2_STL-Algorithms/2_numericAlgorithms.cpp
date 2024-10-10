#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>

int main() {
   
    std::vector<int> arr(5);
    arr[0] = 1;
    arr[1] = 3;
    arr[2] = 8;
    arr[3] = 18;
    arr[4] = 26;

    std::vector<int> arr1 = {1,2,3,4,5};
    std::vector<int> arr2 = {5,4,3,2,1};

    //accumulate : computes the sum of elements in a range
    //accumulate(start, end, starting sum);
    int sum = std::accumulate(arr.begin(), arr.end(), 0);
    std::cout << "Sum of all the elements of Array is: " << sum << "\n";
    
    //inner_product : computes the inner product of two integers
    //inner_product(arr1 start, arr1 end, arr2 start, arr2 end*, starting ans)
    int innerProduct = std::inner_product(arr1.begin(), arr1.end(), arr2.begin(), 0);
    std::cout << "Inner product of arr1 and arr2 is: " << innerProduct << "\n";

    //partial_sum : computes the partial sums of a range
    //partial_sum(start, end, start of container that will store partial sum)
    std::vector<int> partialSum(arr1.size());
    std::partial_sum(arr1.begin(), arr1.end(), partialSum.begin());
    std::cout << "Partial sum of arr1 is: " ;
    for(int a : partialSum){
        std::cout << a << " ";
    }

    //iota : Fills a range with incrementing values(consequtive)
    //iota(start, end, starting value), vector must have declared size
    std::cout << "\n" << "Values filled using iota: ";
    std::vector<int> v(5);
    std::iota(v.begin(), v.end(), 10);
    for(int a : v){
        std::cout << a << " ";
    }

    return 0;
}