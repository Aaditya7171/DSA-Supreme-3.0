#include <iostream>
#include <vector>
#include <algorithm>
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

// int main() {
//     int x[3][5] = {
//         {1,2,3,4,5},
//         {6,7,8,9,10},
//         {11,12,13,14,15}
//     };
//     int *n = &x[0][0];

//     cout << *(*(x+2) + 1) << " ";
//     cout << *x;
//     cout << *(*x + 2) + 5;
//     cout << *(*(x+1));
//     cout << *(*(x) + 2) + 1;
//     cout << *(*(x+1) + 3);
//     cout << *(n+2);
//     cout << *n++;

// }

// class Student {
//     int a;
//     public: float a;
// };

// int main() {

//     Student s;
//     s->a;
//     std::cout <<

// }

// int main(){
//     vector<int> arr = {3,5,2,8,6};
//     int size = 5;

//     vector<int> copy(size);

//     std::sort(arr.begin(), arr.end());
//     for(int i = 0; i < size; i++){
//         copy[i] = arr[i];
//     }
//     std::cout << "After sort, arr: \n";
//     for(int i = 0; i < size; i++){
//         std::cout << arr[i] << " ";
//     }

//     std::reverse(copy.begin(), copy.end());
//     std::cout << "After reverse, copy: \n";
//     for(int i = 0; i < size; i++){
//         std::cout << copy[i] << " ";
//     }
// }

// vector<int> transform(vector<int> arr) {
// 	// Write your code here
// 	int size = arr.size();

// 	vector<int>copy(size);
// 	for(int i = 0; i < size; i++){
// 		copy[i] = arr[i];
// 	}
// 	sort(arr.begin(), arr.end());

// 	vector<int> ans(size);

// 	for(int i = 0; i < size; i++){
// 		bool found = false;
// 		for(int j = size-1; j >=0 ; j--){
// 			if(copy[i] > arr[j]){
// 				ans[i] = arr[j];
//                 found = true;
// 				break;
// 			}
// 		}
// 		if(!found){
// 			ans[i] = copy[i];
// 		}
// 	}
// 	return ans;
// }

// int main() {
//     vector<int> arr= {3,5,2,8,6};
//     vector<int> ans = transform(arr);

//     for(int i = 0; i < arr.size(); i++){
//         std::cout << ans[i] << " ";
//     }
// }
// ex o/p = 2, 3, 2, 6, 5

// vector<int> reverseArray(vector<int> &a) {
//     int n = a.size();
//     int low = 0, high = n - 1;
//     while(low < high){
//         if(a[low] < a[high]){
//             std::swap(a[low], a[high]);
//             low++, high--;
//         }
//     }
//     return a;
// }

// void print(vector<int> arr){
// 	for(int i = 0; i < arr.size(); i++){
// 		std::cout << arr[i] << " ";
// 	}
// 	std::cout << "\n";
// }

// int main(){
// 	std::vector<int> arr1 = {1,2,3,4,5};
// 	std::vector<int> arr2 = {1,2,3,4};

//     std::cout << arr1[1];
// 	// reverseArray(arr1);
// 	// reverseArray(arr2);

// 	// print(arr1);
// 	// print(arr2);

// 	return 0;
// }

// Bruteforce Approach
// #include<iostream>
// #include<cmath>

// class Node
// {
// public:
//     Node* prev;
//     int data;
//     Node* next;

//     Node(int value){
//         prev = NULL;
//         data = value;
//         next = NULL;
//     }
// };

// int getLen(Node* head)
// {
//     int len = 0;
//     Node* temp = head;
//     while(temp != NULL){
//         len+=1;
//         temp = temp->next;
//     }
//     return len;
// }

// void printLL(Node* head){
//     while(head != NULL) {
//         std::cout << head->data << " ";
//         head = head->next;
//     }
//     std::cout<<"\n";
// }

// void printArr(int arr[], int size){
//     for(int i = 0; i < size; i++){
// 		std::cout << arr[i] << " ";
// 	}
//     std::cout<<"\n";
// }

// int* llToArr(Node* head, int size){
//     int* arr = new int[size];

// 	Node* temp = head;
// 	int index = 0;
// 	while(temp != NULL){
// 		arr[index] = temp->data;
// 		temp = temp->next;
// 		index++;
// 	}
// 	return arr;
// }

// int main()
// {
//     Node* head = new Node(1);
//     head->next = new Node(2);
//     head->next->next = new Node(3);
//     head->next->next->next = new Node(4);
//     head->next->next->next->next = new Node(5);

//     printLL(head);

// 	int size = getLen(head);
// 	int* arr = llToArr(head, size);

//     printArr(arr, size);

//     return 0;
// }

// int birthday(vector<int> s, int d, int m) {
//     int count = 0;
//     for(int i = 0; i < s.size(); i++){
//         int ans = 0;
//         for(int j = 0; j < m; j++){
//                ans = ans + s[j];
//             }
//         if(ans == d){
//             count++;
// 			i++;
//         }
//     }
//     return count;
// }

// int main(){
// 	std::vector<int> arr1 = {1,2,1,3,2};

//     int res = birthday(arr1,3,2);

// 	std::cout << res;
// 	return 0;
// }

// int diagonalDifference(vector<vector<int>> arr) {
//     int leftToRightDiagonalSum = 0, rightToLeftDiagonalSum = 0;
//     int rSize = arr.size();
//     for(int i = 0; i < rSize; i++) {
//         leftToRightDiagonalSum += arr[i][i];
//         rightToLeftDiagonalSum += arr[i][rSize];
//     }
//     return abs(leftToRightDiagonalSum - rightToLeftDiagonalSum);
// }

// int main()
// {
//     std::vector<vector<int>> arr = {
//         {1,2,4},
//         {4,5,6},
//         {2,8,9}
//     };

//     std::cout << diagonalDifference(arr);

//     return 0;
// }

// #include<stack>

//  void nextSmallerElement(std::vector<int> &heights, std::vector<int> &nextAns){
//         stack<int> st;
//         st.push(-1);
//         int n = heights.size();

//         for(int i = n - 1; i >= 0; i--){
//             int elem = heights[i];
//             while(st.top() != -1 && heights[st.top()] > elem){
//                 st.pop();
//             }
//             //if we reached here that means either -1 or any smaller element is at the top of the stack
//             nextAns.push_back(st.top());
//             st.push(i);
//         }
//     }

//     void prevSmallerElement(std::vector<int> &heights, std::vector<int> &prevAns){
//         stack<int> st;
//         st.push(-1);
//         int n = heights.size();

//         for(int i = 0; i < n; i++){
//             int elem = heights[i];
//             while(st.top() != -1 && heights[st.top()] > elem){
//                 st.pop();
//             }
//             prevAns.push_back(st.top());
//             st.push(i);
//         }
//     }

//     int main(){

//     std::vector<int> arr = {2,4};
//     std::vector<int> nextAns;
//     std::vector<int> prevAns;

//     prevSmallerElement(arr, prevAns);
//     nextSmallerElement(arr, nextAns);

//     for(int i : prevAns){
//         std::cout << i << " ";
//     } std::cout << "\n";

//     for(int i : nextAns){
//         std::cout << i << " ";
//     } std::cout << "\n";

//     return 0;
// }

// int main(){
//     std::cout << (-2) % 3;
// }

// #include <algorithm>
// #include <algorithm>
// #include <algorithm>

// int main()
// {
//     std::cout << min(5, 55);
// }

//             *
//           *   *
//         *       *
// * * * *          * * * *
//   *                  *
//     *               *
//       *           *
//        *    *   *
//       *    * *   *
//      *   *     *  *
//     *  *         * *
//    *                *

// #include <iostream>
// #include <vector>
// using namespace std;

// void printStarPattern(int size)
// {
//     // Create a 2D vector to store the pattern
//     vector<vector<char>> pattern(size, vector<char>(size, ' '));

//     // Points for the star shape
//     // Left points
//     pattern[size / 2][size / 4] = '*';
//     for (int i = 1; i <= size / 4; i++)
//     {
//         pattern[size / 2 - i][size / 4 - i] = '*';
//         pattern[size / 2 + i][size / 4 - i] = '*';
//     }

//     // Right points
//     pattern[size / 2][3 * size / 4] = '*';
//     for (int i = 1; i <= size / 4; i++)
//     {
//         pattern[size / 2 - i][3 * size / 4 + i] = '*';
//         pattern[size / 2 + i][3 * size / 4 + i] = '*';
//     }

//     // Top points
//     for (int i = 0; i <= size / 4; i++)
//     {
//         pattern[size / 4 + i][size / 2 - i] = '*';
//         pattern[size / 4 + i][size / 2 + i] = '*';
//     }

//     // Bottom points
//     for (int i = 0; i <= size / 4; i++)
//     {
//         pattern[3 * size / 4 - i][size / 2 - i] = '*';
//         pattern[3 * size / 4 - i][size / 2 + i] = '*';
//     }

//     // Print the pattern
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = 0; j < size; j++)
//         {
//             cout << pattern[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     int size;
//     cout << "Enter the size of the pattern (recommend 20 or larger): ";
//     cin >> size;

//     if (size < 12)
//     {
//         cout << "Size too small for clear pattern. Please use 12 or larger.\n";
//         return 1;
//     }

//     printStarPattern(size);
//     return 0;
// }

// int findMedian(vector<int> arr)
// {
//     sort(arr.begin(), arr.end());
//     int middle = arr.size() / 2;
//     if (middle % 2 == 0)
//     {
//         int ans = (arr[middle] + arr[middle + 1]) / 2;
//         return ans;
//     }
//     else
//     {
//         return arr[middle];
//     }
// }

// int main()
// {
//     std::vector<int> arr = {1, 2, 3, 4};
//     std::cout << findMedian(arr);

//     return 0;
// }

// int main()
// {

//     string s = "iAmAditya";
//     int count = 0;
//     for (auto i : s)
//     {
//         char ch = i;
//         int asciiValue = static_cast<int>(ch);
//         if (asciiValue >= 65 && asciiValue <= 90)
//         {
//             count++;
//         }
//     }
//     std::cout << count + 1;
// }

// int main()
// {
//     char ch = 'A';
//     std::cout << int(ch);
// }

int main()
{
    auto it = max_element(piles.begin(), piles.end()); // returns itrator
    int e = *it;
    auto it = max_element(piles.begin(), piles.end()); // returns itrator
    int e = *it;
}