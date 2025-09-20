#include<queue>
#include<vector>
#include<iostream>
using namespace std;

int sumOfMinMax(vector<int>& nums, int k) {
    deque<int> dq, dq2;
    int n = nums.size();
    int ans = 0;
    for(int i = 0; i < k; i++){
        while(!dq.empty() && nums[i] >= nums[dq.back()]){
            dq.pop_back();
        }
        while(!dq2.empty() && nums[i] <= nums[dq2.back()]){
            dq2.pop_back();
        }
        dq.push_back(i);
        dq2.push_back(i);
    }
   
    for(int i = k; i < nums.size(); i++){
        // add sum of max and min for the previous window
        ans += nums[dq.front()] + nums[dq2.front()];

        // remove elements out of current window
        while(!dq.empty() && dq.front() <= i - k){
            dq.pop_front();
        }
        while(!dq2.empty() && dq2.front() <= i - k){
            dq2.pop_front();
        }

        // maintain deque for max
        while(!dq.empty() && nums[i] >= nums[dq.back()]){
            dq.pop_back();
        }
        while(!dq2.empty() && nums[i] <= nums[dq2.back()]){
            dq2.pop_back();
        }
        dq.push_back(i);
        dq2.push_back(i);
    }
    // last window
    ans += nums[dq.front()] + nums[dq2.front()];
    return ans;
}

int main(){
    vector<int> arr = {1,2,3};
    cout << sumOfMinMax(arr, 2);
    return 0;
}