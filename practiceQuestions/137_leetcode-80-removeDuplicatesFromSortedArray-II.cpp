class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for(int n : nums){
            // If i < 2, always copy (because the first two elements are always allowed).
            // Otherwise, only copy if nums[n] != nums[i - 2].
            if(i < 2 || n != nums[i-2]){
                nums[i] = n;
                i++;
            }
        }
        return i;
    }
};