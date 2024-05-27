//Using hashmap-->

#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

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
