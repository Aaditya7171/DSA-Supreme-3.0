#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        int size = nums1.size();
        sort(nums1.begin(), nums1.end());

        int s = 0, e = size - 1;
        double ans = -3123;
        int mid = (s + e) / 2;
        if(size % 2 != 0){
            ans = nums1[mid];
            return ans;
        }
        else{
            ans = (nums1[mid] + nums1[mid+1]) / 2.0;
            return ans;
        }
    }
};