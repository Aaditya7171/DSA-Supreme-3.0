class Solution {
  public:
    bool isPos(vector<int> &arr, int k, int n, int mid){
        int c = 1;
        int pos = arr[0];
        for(int i = 1; i < n; i++){
            if(arr[i] - pos >= mid){
                c++;
                pos = arr[i];
            } 
            if(c == k) return true;
        }
        return false;
    }
    int aggressiveCows(vector<int> &stalls, int k) {
        // code here
        sort(stalls.begin(), stalls.end());
        int n = stalls.size();
        int s = 0;
        int e = stalls[n - 1] - stalls[0];
        
        int ans = -1;
        while(s <= e){
            int mid = (s + e) >> 1;
            if(isPos(stalls, k, n, mid)){
                ans = mid;
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
        }
        return ans;
    }
};