#include<iostream>

int applyBinarySearch(int arr[], int size, int target){

    int s = 0;
    int e = size - 1;
    
    while(s <= e){
        int mid = s + (e - s) / 2;
        if(arr[mid] == target){
            return mid;
        }
        if(arr[mid + 1] == target){
            return mid + 1;
        }       
        if(arr[mid - 1] == target ){
            return mid-1;
        }
        if(target > arr[mid]) {
            s = mid + 2;
        }
        else {
            e = mid - 2;
        }
    }
    return -1;
}

int main(){

    int arr[] = {10,3,40,20,50,80,70};
    int size = 7;

    int target = 50;

    int ans = applyBinarySearch(arr,size,target);

    std::cout << "Found at index " << ans;

}
//t.c. --> O(logn)
//s.c. --> O(1)