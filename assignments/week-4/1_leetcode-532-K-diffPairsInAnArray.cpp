class Solution {
    public:
        int bS(vector<int> & nums, int s, int X){
            int e = nums.size() - 1;
            while(s <= e){
                int mid = (s + e) / 2;
                if(nums[mid] == X){
                    return mid;
                }
                else if(X > nums[mid]){
                    s = mid + 1;
                }
                else {
                    e = mid - 1;
                }
            }
            return -1;
        }
        int findPairs(vector<int>& nums, int k) {
            // // Approach 1 : Two Pointer
            // set<pair<int,int>> ans;
            // sort(nums.begin(), nums.end());
            // int i = 0, j = 1;
            // while(j < nums.size()){
            //    int diff = nums[j] - nums[i];
            //    if(diff == k){
            //     ans.insert({nums[i], nums[j]});
            //     i++, j++;
            //    } else if(diff > k) {
            //     i++;
            //    } else {
            //     j++;
            //    }
            //    if(i == j) j++;
            // }
            // return ans.size();
    
            // // Approach 2 : Binary Search
            sort(nums.begin(), nums.end());
            set<pair<int,int>> ans;
    
            for(int i = 0; i < nums.size(); i++){
                if(bS(nums, i + 1, nums[i] + k) != -1){
                    ans.insert({nums[i], nums[i] + k});
                }
            }
            return ans.size();
        }
    };