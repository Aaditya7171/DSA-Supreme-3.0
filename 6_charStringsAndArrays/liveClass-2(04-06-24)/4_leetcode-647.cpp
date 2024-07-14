//leetcode 647. Palindromic Substrings
#include<string>
using namespace std;

class Solution {
public:
    //returns count of palindromic substring using i and j as center and expanding arroundnit in every iteration if possible
    int expandAroundCenter(string s, int i, int j){
        int count = 0;
        while(i >= 0 && j < s.length() && s[i] == s[j]){
            count++;
            i--, j++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int totalCount = 0;
        for(int center  = 0; center<s.length(); center++){
            //odd length string
            int i = center;
            int j = center;
            int oddPalSubStringCount = expandAroundCenter(s,i,j);
            //even length string
            i = center;
            j = center + 1;
            int evenPalSubStringCount = expandAroundCenter(s,i,j);
            totalCount = totalCount + oddPalSubStringCount + evenPalSubStringCount;
        }
        return totalCount;
    }
};