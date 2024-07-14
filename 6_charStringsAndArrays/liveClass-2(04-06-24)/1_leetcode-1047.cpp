//leetcode 1047. Remove All Adjacent Duplicates In String
#include<string>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        string ans = "";
        int n = s.length();

        for(int i = 0; i < n; i++){
            char currentChar = s[i];
            if(ans.empty()){
                //
                ans.push_back(currentChar);
            }
            else if(currentChar == ans.back()){
                ans.pop_back();
            }
            else if(currentChar != ans.back()){
                ans.push_back(currentChar);
            }
        }
        return ans;
        
    }
};