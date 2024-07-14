//leetcode 2325. Decode the Message
#include<string>
#include<unordered_map>
using namespace std;

class Solution {
public:
    string decodeMessage(string key, string message) {
        //step-1 : create mapping
        unordered_map<char, char> mapping;
        char space = ' ';
        mapping[space] = space;
        char start = 'a';
        int index = 0;

        while(start <= 'z' && index< key.length()){
            char currentCharOfKey = key[index];
            if(mapping.find(currentCharOfKey) != mapping.end()){
               //mapping already exists
               index++;
            }
            else{
                //mapping is'nt present
                mapping[currentCharOfKey] = start;
                start++, index++;

            }
        }
        //step-2 : use mapping and decode message
        string ans = "";
        for(int i = 0; i < message.length(); i++){
            char msgChar = message[i];
            char mappedChar = mapping[msgChar];
            ans.push_back(mappedChar);
        }
        return ans;
    }
};