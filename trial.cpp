#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

// // // int main() {
// // //     char i;
// // //     if (cin >> i) {
// // //         cout << "babber" << endl;
// // //     }
// // //     return 0;
// // // } 


// // // class Solution {
// // // public:
// // //     vector<pair<int,int>> findPairs(vector<int>& nums, int k) {
// // //         sort(nums.begin(), nums.end());
// // //         int n = nums.size();
// // //         vector<pair<int, int>> pairs;

// // //         for (int i = 0; i < n; ++i) {
// // //             if (i > 0 && nums[i] == nums[i - 1]) {
// // //                 continue; // Skip duplicates
// // //             }
// // //             for (int j = i + 1; j < n; ++j) {
// // //                 if (nums[j] - nums[i] == k) {
// // //                     pairs.push_back({nums[i], nums[j]});
// // //                     break; // Found a valid pair, move to the next element
// // //                 }
// // //             }
// // //         }

// // //         return pairs;
// // //     }
// // // };




// // // int main() {
// // //     Solution solution;
// // //     vector<int> nums = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
// // //     int k = 2;

// // //     vector<pair<int, int>> result = solution.findPairs(nums, k);

// // //     cout << "Pairs with difference " << k << ":" << endl;
// // //     for (auto& p : result) {
// // //         cout << "(" << p.first << ", " << p.second << ")" << endl;
// // //     }

// // //     return 0;
// // // }

// // #include <iostream>
// // #include <vector>
// // #include <algorithm>

// // using namespace std;

// // // class Solution {
// // // public:
// // //     vector<vector<int>> threeSum(vector<int>& arr) {
// // //         vector<vector<int>> ans;
// // //         int n = arr.size();
// // //         for(int i = 0; i < n; i++){
// // //             for(int j = i + 1; j < n; j++) {
// // //                 for(int k = j + 1; k < n; k++){
// // //                     if((arr[i] + arr[j] + arr[k]) == 0){
// // //                         vector<int>temp;
// // //                         temp.push_back(arr[i]);
// // //                         temp.push_back(arr[j]);
// // //                         temp.push_back(arr[k]);
// // //                         ans.push_back(temp);
// // //                     }
// // //                 }
// // //             }
// // //         }
// // //         return ans;
// // //     }
// // // };

// // class Solution {
// // public:
// //     vector<vector<int>> threeSum(vector<int>& arr) {
// //         vector<vector<int>> ans;
// //         int n = arr.size();
// //         for(int i = 0; i < n; i++){
// //             for(int j = i + 1; j < n; j++) {
// //                 for(int k = j + 1; j < n; j++){
// //                     if((arr[i] + arr[j] + arr[k]) == 0){
// //                         vector<int>temp;
// //                         temp.push_back(arr[i]);
// //                         temp.push_back(arr[j]);
// //                         temp.push_back(arr[k]);
// //                         ans.push_back(temp);
// //                     }
// //                 }
// //             }
// //         }
// //         return ans;
// //     }
// // };

// // int main() {
// //     Solution solution;
// //     vector<int> nums = {-1, 0, 1, 2, -1, -4};
// //     vector<vector<int>> result = solution.threeSum(nums);
// //     for (const auto& triplet : result) {
// //         for (int num : triplet) {
// //             cout << num << " ";
// //         }
// //         cout << endl;
// //     }
// //     return 0;
// // }

// #include<iostream>

// bool checkPalindrome(int n) {
//     int unmodifiedNum = n;
//     int reverse = 0;

//     while(n != 0) {
//         int digit = n % 10;
//         reverse = reverse * 10 + digit;
//         n = n / 10;
//     }

//     if(reverse == unmodifiedNum) {
//         return true;
//     } else {
//         return false;
//     }
// }

// int main() {
//     int num, start, end;

//     std::cout << "Enter the range (start end): ";
//     std::cin >> start >> end;

//     std::cout << "Palindrome numbers in the range " << start << " to " << end << " are:\n";
    
//     for(num = start; num <= end; num++) {
//         if(checkPalindrome(num)) {
//             std::cout << num << std::endl;
//         }
//     }

//     return 0;
// }

// class Solution {
// public:
    
//     int countPrimes(int low, int high) {
//         if (high <= 2) return 0;
//         if (low < 2) low = 2;
        
//         int size = high-low;
//         vector<bool> prime(size, true);        

//         int count = 0;

//         for(int i = low; i < high; i++){
//             if(prime[i]){
//                 count++;

//                 int j = 2 * i;
//                 while(j < high){
//                     prime[j] = false;
//                     j = j + i;
//                 }
//             }
//         }
//         return count;
//     }
// };

// int main() {
//     Solution sol;

//     int low = 10;
    
//     int high = 21;
    
//     int ans = sol.countPrimes(low, high);

//     cout << ans;

//     return 0;
// }

int main() {
    int x[3][5] = {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15}
    };
    int *n = &x[0][0];

    // cout << *(*(x+2) + 1) << " ";
    // cout << *x;
    // cout << *(*x + 2) + 5;
    // cout << *(*(x+1));
    // cout << *(*(x) + 2) + 1;
    // cout << *(*(x+1) + 3);
    // cout << *(n+2);
    cout << *n++;

}