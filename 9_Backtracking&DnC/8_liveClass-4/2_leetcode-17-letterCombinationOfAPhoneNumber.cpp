#include<vector>
#include<string>
#include<unordered_map>
using namespace std;


class Solution {
public:
    void solve(string output, unordered_map<char, string> &map, vector<string> &ansString, string digits, int i){
        if(i >= digits.length()){
            if(output.length() > 0){
                ansString.push_back(output);
            }
            return;
        }
        char digit = digits[i];
        string mappedString = map[digit];

        for(char ch : mappedString){
            output.push_back(ch);
            solve(output, map, ansString, digits, i+1);
            output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ansString;
        unordered_map<char, string> map;
        map['2'] = "abc";
        map['3'] = "def";
        map['4'] = "ghi";
        map['5'] = "jkl";
        map['6'] = "mno";
        map['7'] = "prqs";
        map['8'] = "tuv";
        map['9'] = "wxyz";
        
        string output = "";
        solve(output, map, ansString, digits, 0);
        
        return ansString;
    }
};