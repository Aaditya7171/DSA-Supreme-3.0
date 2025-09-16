class Solution {
public:
    bool canDistributeHelper(vector<int>& counts, vector<int>& quantity, int index){
        // base case
        if(index == quantity.size()) return true;

        for(int i = 0; i < counts.size(); i++){
            if(counts[i] >= quantity[index]){
                counts[i] -= quantity[index];
                if(canDistributeHelper(counts, quantity, index + 1)){
                    return true;
                }
                counts[i] += quantity[index]; // backtrack
            }
        }
        return false;
    }
    bool canDistribute(vector<int>& nums, vector<int>& quantity) {
        unordered_map<int, int> mp;
        for(int n : nums)
            mp[n]++;
        vector<int> counts;
        for(auto it : mp)
            counts.push_back(it.second);
        // sort(quantity.begin(), quantity.end(), [](const auto &a, const auto &b){
        //     return a > b;
        // });
        sort(quantity.rbegin(), quantity.rend()); // TLE optimization
        return canDistributeHelper(counts, quantity, 0);
    }
};