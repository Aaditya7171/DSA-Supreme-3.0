class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int, int> mp;
        for(int i : arr){
            mp[i]++;
        }
        for(int a : arr){
            if(a != 0 && mp.count(2*a) || a == 0 && mp[a] > 1){
                return true;
            }
        }
        return false;
    }
};