#include<vector>
#include<set>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // vector<int> ans;

        // sort(nums1.begin(), nums1.end());
        // auto it = unique(nums1.begin(), nums1.end());
        // nums1.erase(it, nums1.end());

        // sort(nums2.begin(), nums2.end());
        // auto it2 = unique(nums2.begin(), nums2.end());
        // nums2.erase(it2, nums2.end());

        // int size = max(nums1.size(), nums2.size());

        // for(int i = 0; i < size; i++){
        //     if(nums1[i] == nums2[i]){
        //         ans.push_back(nums1[i]);
        //     }
        // }
        // return ans;

        std::vector<int> res;
        set<int> s1(nums1.begin(), nums1.end());
        set<int> s2(nums2.begin(), nums2.end());

        set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), 
        back_inserter(res));

        return res;
    }
};