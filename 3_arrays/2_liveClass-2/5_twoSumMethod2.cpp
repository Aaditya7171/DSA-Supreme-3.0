#include<iostream>
#include<algorithm>
#include<climits>

std::pair<int, int> checkTwoSum(int arr[], int size, int target)
{
    std::pair<int, int> p = std::make_pair(INT_MIN , INT_MIN);
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if((arr[i] + arr[j]) == target){
               p.first = arr[i];
               p.second = arr[j];
               return p;
            }
        }
    }
}
void checkTwoSumPrintAllPairs(int arr[], int n, int target){
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if((arr[i] + arr[j]) == target){
               std::cout << arr[i] << " " << arr[j] << '\n';
            }
        }
    }
}
int main(){

    int arr[5] = {10,5,20,15,30};
    int size = 5;

    int target = 35;

    // checkTwoSumPrintAllPairs(arr, size, target);

    std::pair<int,int> ans =checkTwoSum(arr, size, 35);

    if(ans.first == -1 && ans.second == -1) {
        std::cout << "pair not found." <<'\n';
    }
    else{
        std::cout << "pair found: " << ans.first << " " << ans.second;
    }
    return 0;
}