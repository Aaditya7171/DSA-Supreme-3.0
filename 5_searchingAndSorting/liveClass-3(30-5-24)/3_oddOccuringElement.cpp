#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findOddOccuringElement(int arr[], int size){
    int s = 0;
    int e = size - 1;

    while(s <= e){
        int mid = s + (e - s) / 2;
        if(s == e){
            return s;
        }
        if(mid - 1 >= 0 && mid + 1 < size && arr[mid] != arr[mid-1] && arr[mid] != arr[mid+1]){
            return mid;
        }
        int pairStartingIndex = mid - 1;
        if(pairStartingIndex & 1){//pairStartingIndex is odd
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
        if(mid + 1 < size && arr[mid] == arr[mid-1]){

        }
    }

    return -1;
}

    int singleNonDuplicate(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (mid % 2 == 1) mid--;
            if (nums[mid] == nums[mid + 1]) low = mid + 2;
            else high = mid;
        }
        return low;
    }


int main()
{
    vector<int> arr = {2,2,3,3,1};

    int ans = singleNonDuplicate(arr);
    
    cout << ans;
    return 0;
}

//t.c. --> O(logn)
//s.c. --> O(1)