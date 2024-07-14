//leetcode 890. Find and Replace Pattern
#include<string>
#include<vector>
#include<unordered_map>

using namespace std;


class Solution {
public:

    void normalize(string &str){
        char s = 'a';
        unordered_map<char,char> mapping;

        for(int i = 0; i < str.length(); i++){
            char charOfString = str[i];
            if(mapping.find(charOfString) == mapping.end()){
                mapping[charOfString] = s;
                s++;
            }
        }
        for(int i = 0; i < str.length(); i++){
            char mappedChar = mapping[str[i]];
            str[i] = mappedChar;
        }
        //"str" normalized
    }

    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        
        vector<string> ans;
        normalize(pattern);
     
        for(int i = 0; i < words.size(); i++){
            string currWord = words[i];

            normalize(currWord);
            if(currWord.compare(pattern) == 0){
                ans.push_back(words[i]);
            }
        }
        return ans;
    }
};