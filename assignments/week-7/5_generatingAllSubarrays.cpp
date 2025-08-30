// User function Template for C++
class Solution {
  public:
    void subArrRE(vector<int>& arr, int start, int end, vector<vector<int>>& ans){
        if(start == arr.size()) return;
        if(end == arr.size()) {
            subArrRE(arr, start+1, start+1, ans);
            return;
        }
        vector<int> temp;
        for(int i = start; i <= end; i++) {
            temp.push_back(arr[i]);
        }
        ans.push_back(temp);
        subArrRE(arr, start, end+1, ans);
    }
    vector<vector<int> > getSubArrays(vector<int>& arr) {
        // code here
        vector<vector<int>> ans;
        subArrRE(arr, 0, 0, ans);
        return ans;
    }
};