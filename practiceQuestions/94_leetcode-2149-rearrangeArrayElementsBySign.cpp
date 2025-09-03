class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos, neg;
        for(int n : nums){
            if(n < 0) neg.push_back(n);
            else pos.push_back(n);
        }
        vector<int>ans(nums.size());
        for(int i = 0; i < pos.size(); i++){
            ans[2*i] = pos[i];
            ans[2*i+1] = neg[i];
        }
        return ans;
    }
};