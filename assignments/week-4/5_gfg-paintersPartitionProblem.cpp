class Solution {
  public:
    bool isPos(vector<int> arr, int N, int k, int mid){
        int timeSum = 0;
        int c = 1;
        for(int i = 0; i < N; i++){
            if(arr[i] > mid){
                return false;
            }
            if(arr[i] + timeSum > mid){
                c++;
                timeSum = arr[i];
                if(c > k) return false;
            }
            else {
                timeSum += arr[i];
            }
        }
        return true;
    }
    int minTime(vector<int>& arr, int k) {
        // code here
        int N = arr.size();
        int s = 0;
        int e = accumulate(arr.begin(), arr.end(), 0);
        int ans = -1;
        while(s <= e){
            int mid = s + (e - s) / 2;
            if(isPos(arr, N, k, mid)){
                ans = mid;
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }
        return ans;
    }
};