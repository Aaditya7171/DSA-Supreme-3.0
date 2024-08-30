#include<iostream>
#include<vector>

void storeOddElements(std::vector<int> &oddElements, std::vector<int> arr, int size, int index)
{
    if(index == size){
        return;
    }
    if(arr[index] & 1){
        oddElements.push_back(arr[index]);
    }
    storeOddElements(oddElements,arr, size, index+1);
}

int main()
{
    std::vector<int> arr = {10,11,12,13,14,15,16,17};
    int size = 8;
    int index = 0;

    std::vector<int> oddElements;

    storeOddElements(oddElements, arr, size, index );

    for(int i = 0; i < oddElements.size(); i++){
        std::cout << oddElements[i] << " ";
    }

    return 0;
}