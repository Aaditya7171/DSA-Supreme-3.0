class Solution {
  public:
    bool checkPos(vector<int> a, int k, int n, int mid) {
        int pageSum = 0;
        int c = 1;
        for(int i = 0; i < n; i++){
            if(a[i] > mid) return false;
            else if(pageSum + a[i] > mid){
                c++;
                pageSum = a[i];
                if(c > k){
                    return false;
                }
            }
            else {
                pageSum += a[i];
            }
        }
        return true;
    }
    int findPages(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        if(k > n) return -1;
        int sum = 0;
        for(int i = 0; i < arr.size(); i++){
            sum = sum + arr[i];
        }
        int s = 0;
        int e = sum;
        int ans = -1;
        while(s <= e){
            int mid = (s + e) >> 1;
            if(checkPos(arr, k, n, mid)){
                ans = mid;
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
        }
        return ans;
    }
};