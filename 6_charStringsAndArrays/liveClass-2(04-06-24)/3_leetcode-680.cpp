//leetcode 680. Valid Palindrome II
#include<string>
using namespace std;

class Solution {
public:
    bool checkPalindrome(string str, int s, int e){
        while(s <= e){
            if(str[s] != str[e]){
                return false;
            }
            else{
                s++, e--;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int l = s.length();
        int i = 0, j = l - 1;
        
        while(i <= j){
            //same
            if(s[i] == s[j]){
                i++, j--;
            }
            //different
            else {

                //that block will be executed only once, because only 1 deletion in allowed
                //Check by deleting charecter(ith index and jth)
                bool ansOne = checkPalindrome(s,i+1, j);//delete ith element
                bool ansTwo = checkPalindrome(s,i,j-1);
                bool finalAns = ansOne || ansTwo;
                return finalAns;//returning ans on the spot
            }
        }
        return true;
    }
};
//t.c.--> O(n)