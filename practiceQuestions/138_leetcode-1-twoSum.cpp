class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // bruteforce
        // vector<int> res;
        // for(int i = 0; i < nums.size(); i++){
        //     for(int j = i+1; j < nums.size(); j++){
        //         if(nums[i] + nums[j] == target){
        //             res.push_back(i);
        //             res.push_back(j);
        //             return res;
        //         }
        //     }
        // } 
        // return res;

        // Optimal Approach
        unordered_map<int,int> mp;
        for(int i = 0; i < nums.size(); i++){
            int comp = target-nums[i];
            if(mp.find(comp) != mp.end()){
                return {mp[comp], i};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};