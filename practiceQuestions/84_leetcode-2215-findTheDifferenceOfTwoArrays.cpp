class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());

        vector<int> diff1, diff2;
        for(auto a : set1){
            if(set2.find(a) == set2.end()){
                diff1.push_back(a);
            }
        }
        for(auto b : set2){
            if(set1.find(b) == set1.end()){
                diff2.push_back(b);
            }
        }
        return {diff1, diff2};
    }
};