class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        int k = 0; 
        while(true){
            char currChar = 0;
            for(auto s : strs){
                if(k >= s.size()){
                    currChar = 0;
                    break;
                }
                if(currChar == 0)
                    currChar = s[k];
                else if(s[k] != currChar){
                    currChar = 0;
                    break;
                }
            }
            if(currChar == 0) break;
            ans.push_back(currChar);
            k++;
        }
        return ans;
    }
};