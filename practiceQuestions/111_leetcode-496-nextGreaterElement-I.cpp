class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int n : nums1){
            int nextGreater = -1;
            bool found = false;
            for(int i = 0; i < nums2.size(); i++) {
                if(nums2[i] == n){
                    found = true;
                }
                else if(found && nums2[i] > n){
                    nextGreater = nums2[i];
                    break;
                }
            }
            ans.push_back(nextGreater);
        } 
        return ans;
    }
};