// Merge Sort (S.C. O(1)), In-place
class Solution {
public:
    void mergeInPlace(vector<int>& v, int start, int end, int mid){
        int totalLen = end - start + 1; 
        int gap = (totalLen / 2) + (totalLen % 2);
        while(gap > 0){
            int i = start, j = start + gap;
            while(j <= end){
                if(v[i] > v[j]){
                    swap(v[i], v[j]);
                }
                i++, j++;
            }
            gap = gap <= 1 ? 0 : (gap / 2) + (gap % 2);
        }
    }
    void mergeSort(vector<int>& v, int start, int end){
        if(start >= end) return;
        int mid = start + (end - start) / 2;
        mergeSort(v, start, mid);
        mergeSort(v, mid+1, end);
        mergeInPlace(v, start, end, mid);
    }

    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }
};
// // MergeSort (S.C.-> O(n))
// class Solution {
// public:
//     void merge(vector<int>& v, vector<int>& temp, int start, int end, int mid){
//         int  i = start, j = mid + 1, k = start;
//         while(i <= mid && j <= end){
//             if(v[i] <= v[j]) temp[k++] = v[i++];
//             else temp[k++] = v[j++];
//         }
//         while(i <= mid) temp[k++] = v[i++];
//         while(j <= end) temp[k++] = v[j++];
//         while(start <= end){
//             v[start] = temp[start];
//             start++;
//         }
//     }
//     void mergeSort(vector<int>& v, vector<int>& temp, int start, int end){
//         if(start >= end) return;
//         int mid = start + (end - start) / 2;
//         mergeSort(v, temp, start, mid);
//         mergeSort(v, temp, mid+1, end);
//         merge(v, temp, start, end, mid);
//     }

//     vector<int> sortArray(vector<int>& nums) {
//         vector<int> temp(nums.size(), 0);
//         mergeSort(nums, temp, 0, nums.size() - 1);
//         return nums;
//     }
// };