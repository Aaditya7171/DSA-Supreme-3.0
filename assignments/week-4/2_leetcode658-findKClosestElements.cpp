

class Solution {
public:
    int lowerBound(vector<int> & arr, int x){
        int s = 0, e = arr.size() - 1;
        int ans = e;
        while(s <= e){
            int mid = (s + e) / 2;
            if(arr[mid] >= x){
                ans = mid;
                e = mid - 1;
            }
            else if(x > arr[mid]){
                s = mid + 1;
            }
            else {
                e = mid - 1;
            }
        }
        return ans;
    }
    vector<int> twoPointer(vector<int>& a, int k, int x) {
        int l = 0, h = a.size() - 1;
        while(h-l >= k){
            if((x-a[l]) > a[h] - x) l++;
            else h--;
        }
        // vector<int> ans;
        // for(int i = l; i <= h; i++){
        //     ans.push_back(a[i]);
        // }
        // return ans;
        return vector<int> (a.begin() + l, a.begin() + h + 1);
    }
    
    vector<int> binarySearch(vector<int>& arr, int k, int x) {
        //lowerbound
        int h = lowerBound(arr, x);
        int l = h - 1;
        while(k--){
            if(l < 0) h++;
            else if(h >= arr.size()) l--;
            else if(x-arr[l] > arr[h] - x) h++;
            else l--;
        }
        return vector<int> (arr.begin() + l + 1, arr.begin() + h);
    }

    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        // return twoPointer(arr, k, x);
        return binarySearch(arr, k, x);
    }
};