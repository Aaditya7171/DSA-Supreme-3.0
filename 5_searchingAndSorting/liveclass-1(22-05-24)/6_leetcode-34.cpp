#include<algorithm>
#include<vector>

using namespace std;

class Solution {
public:
           
void findFirstOccurence(vector<int>arr, int n, int target, int &ansIndex)
{
    int start = 0, end = n - 1;
    int mid = (start + end) / 2;
    while(start <= end){
        if(target == arr[mid]){
            ansIndex = mid;
            end = mid - 1;
        }
        if(target > arr[mid]){
            start = mid + 1;
        }
        if(target < arr[mid]){
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
}
//technique--> store and compute

void findLastOccurence(vector<int>arr, int n, int target,  int &ansIndex)
{
    int start = 0, end = n - 1;
    int mid = (start + end) / 2;
    while(start <= end){
        if(arr[mid] == target){
            ansIndex = mid;
            start = mid + 1;
        }
        if(target > arr[mid]){
            start = mid + 1;
        }
        if(target < arr[mid]){
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
}

    vector<int> searchRange(vector<int>& arr, int target) {
        int n = arr.size();
            
        int firstOccIndex = -1;
        findFirstOccurence(arr,n,target,firstOccIndex);
        
        int lastOccIndex = -1; 
        findLastOccurence(arr,n,target,lastOccIndex); 

        vector<int> temp(2);
        temp[0] = firstOccIndex;
        temp[1] = lastOccIndex;
        return temp;   
    } 
};