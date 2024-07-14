#include<iostream>
#include<vector>

int mergeTwoSortedArrays(int arr[], int size1, int brr[], int size2, std::vector<int> &ans){

    int i = 0, j = 0;
    while(i < size1 && j < size2){
        if(arr[i] < brr[j]){
            ans.push_back(arr[i]);
            i++;
        }
        else {
            ans.push_back(brr[j]);
            j++;
        }
    }
    while(i < size1){
        ans.push_back(arr[i]);
        i++;
    }
    while(j < size2){
        ans.push_back(brr[j]);
        j++;
    }
}

int main(){
    int arr[] = {10,30,50,70};
    int size1 = 4;
    int brr[] = {20,40,60,80,90,100};
    int size2 = 6;

    std::vector<int> ans;
    mergeTwoSortedArrays(arr, size1, brr, size2, ans);

    for(int num : ans){
        std::cout << num << " ";
    }

    return 0;
}