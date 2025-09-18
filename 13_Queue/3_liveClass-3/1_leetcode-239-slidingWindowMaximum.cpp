class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        // step 1: process first window
        for(int i = 0; i < k; i++){
            while(!dq.empty() && nums[i] >= nums[dq.back()]){
                dq.pop_back();
            }
            dq.push_back(i);
        }
        vector<int> ans;
        // step 2: process remaining windows
        for(int i = k; i < nums.size(); i++){
            ans.push_back(nums[dq.front()]);
            // remove elements out of window
            while(!dq.empty() && dq.front() <= i - k){
                dq.pop_front();
            }
            // remove useless smaller elements
            while(!dq.empty() && nums[i] >= nums[dq.back()]){
                dq.pop_back();
            }
            dq.push_back(i);
        }
        // step 3: last window
        ans.push_back(nums[dq.front()]);
        return ans;
    }
};