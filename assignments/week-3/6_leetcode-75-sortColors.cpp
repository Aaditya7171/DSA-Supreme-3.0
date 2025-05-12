#include <vector>
using namespace std;

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        // // Method 1: Insertion Sort--->
        // int n = nums.size();
        // for(int i = 1; i < n; ++i){
        //     int k = nums[i];
        //     int j = i - 1;

        //     while(j >= 0 && k < nums[j]){
        //         nums[j+1] = nums[j];
        //         j--;
        //     }
        //     nums[j + 1] = k;
        // }

        // // Method 2 : Count Method ---->
        // int zeros, ones, twos;
        // zeros = ones = twos = 0;

        // for(int i = 0; i < nums.size(); i++){
        //     if(nums[i] == 0) zeros++;
        //     else if (nums[i] == 1) ones++;
        //     else twos++;
        // }
        // //spread
        // int i = 0;
        // while(zeros--){
        //     nums[i++] = 0;
        // }
        // while(ones--){
        //     nums[i++] = 1;
        // }
        // while(twos--){
        //     nums[i++] = 2;
        // }

        // Method 3 : Three pointer Approach
        int l = 0, m = 0, h = nums.size() - 1;
        while (m <= h)
        {
            if (nums[m] == 0)
                swap(nums[l++], nums[m++]);
            else if (nums[m] == 1)
                m++;
            else
                swap(nums[m], nums[h--]);
        }
    }
};