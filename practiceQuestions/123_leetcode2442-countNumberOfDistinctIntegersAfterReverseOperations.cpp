class Solution {
public:
    int reverseDigits(int n){
        int ans = 0;
        while(n != 0){
            int digit = n % 10;
            ans = ans * 10 + digit;
            n /= 10;
        }
        return ans;
    }
    int countDistinctIntegers(vector<int>& nums) {
        vector<int>v;
        for(int n : nums)
            v.push_back(n);
        for(int n: nums)
            v.push_back(reverseDigits(n));
        set<int> st;
        for(int i : v)
            st.insert(i);
        return st.size();
    }
};