#include<vector>

class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        int newSize = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != val){
                nums[newSize++] = nums[i];
            }
        }
        nums.resize(newSize);
        return newSize;
    }
};