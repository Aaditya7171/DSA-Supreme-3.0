class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        // int count = 0;
        // for(int i = 0; i < nums.size(); i++){
        //     if(nums[i] % 3 == 1){
        //         nums[i] -= 1;
        //         count++;
        //         cout << count << nums[i] << "\n";
        //     }
        //     else if(nums[i] % 3 == 2){
        //         nums[i] += 1;
        //         count++;
        //         cout << count << nums[i] << "\n";
        //     }
        // }
        // return count;
        int count = 0;
        for(int n : nums){
            if(n % 3 != 0){
                count++;
            }
        }
        return count;
    }
};