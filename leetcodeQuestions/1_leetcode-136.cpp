//Leetcode-136. single number
/*
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.

 

Example 1:

Input: nums = [2,2,1]
Output: 1
Example 2:

Input: nums = [4,1,2,1,2]
Output: 4
Example 3:

Input: nums = [1]
Output: 1
 

Constraints:

1 <= nums.length <= 3 * 104
-3 * 104 <= nums[i] <= 3 * 104
Each element in the array appears twice except for one element which appears only once.
*/
#include<iostream>
#include<vector>
#include<unordered_map>


using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int i = 0; i < nums.size(); i++) {
            ans = ans ^ nums[i];
        }
        return ans;
    }
};

//appraoch:2 --> Using hashmap

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //freq table
        unordered_map<int, int>freqMap;

        //add freqs to map table
        for(int i = 0; i < nums.size(); i++){
            int num = nums[i];
            freqMap[num] = freqMap[num] + 1;//initially entry = 0
        }

        unordered_map<int, int>::iterator it;
        int ans;
        for(it = freqMap.begin(); it != freqMap.end(); it++){
            int key = it -> first;
            int freq = it -> second;
            if(freq == 1){
                ans = key;
                break;
            }
        }
        return ans;
    }
};
