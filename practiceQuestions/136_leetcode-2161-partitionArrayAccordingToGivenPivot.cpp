class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> less, equal, greater;
        for(int n : nums){
            if(n < pivot) less.push_back(n);
            else if(n == pivot) equal.push_back(n);
            else greater.push_back(n);
        }
        vector<int> result;
        result.insert(result.end(), less.begin(), less.end());
        result.insert(result.end(), equal.begin(), equal.end());
        result.insert(result.end(), greater.begin(), greater.end());
        return result;
    }
};