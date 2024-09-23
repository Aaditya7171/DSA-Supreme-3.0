#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end()); 

        int start = 0, end = 0;
        int n = s.size();
          
        //skip leading spaces
        for(int i = 0; i < n; i++) {
            while(i < n && s[i] == ' '){
                i++;
            }
            if(i == n) break;// out of bound check

            //copy charecters to the right position
            while(i < n && s[i] != ' '){
                s[end++] = s[i++];
            }
            //reverse individual words
            reverse(s.begin() + start, s.begin() + end);

            s[end++] = ' ';
            start = end;
        }
        //resize the string
        s.resize(end - 1);

        return s;
    }
};