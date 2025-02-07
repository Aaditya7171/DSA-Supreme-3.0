#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        // vector<int> ans;
        // for(int i = 0; i < nums1.size(); i++){
        //     for(int j = 0; j < nums2.size(); j++){
        //         if(nums1[i] == nums2[j]){
        //             ans.push_back(nums1[i]);
        //             i++;
        //         }
        //     }
        // }
        // return ans;

        unordered_map<int, int> count;
        vector<int> ans;

        for (int num : nums1)
        {
            count[num]++;
        }

        for (int num : nums2)
        {
            if (count[num] > 0)
            {
                ans.push_back(num);
                count[num]--;
            }
        }
        return ans;
    }
};