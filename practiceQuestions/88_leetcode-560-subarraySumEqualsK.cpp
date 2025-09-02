class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> pSC;
        pSC[0] = 1;

        int count = 0, prefixSum = 0;
        for(int n : nums){
            prefixSum += n;
            if(pSC.find(prefixSum - k) != pSC.end()){
                count += pSC[prefixSum - k];
            }
            pSC[prefixSum]++;
        }
        return count;
    }
};