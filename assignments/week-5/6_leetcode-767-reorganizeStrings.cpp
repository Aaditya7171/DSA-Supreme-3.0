class Solution {
public:
    string reorganizeString(string s) {
        int hash[26] = {0};
        for(int i = 0; i < s.size(); i++){
            hash[s[i] - 'a']++; 
        }// O(n)
        //find most frequent char
        char mostFreqChar;
        int maxFreq = INT_MIN;
        for(int i = 0; i < 26; i++){
            if(hash[i] > maxFreq){
                maxFreq = hash[i];
                mostFreqChar = i + 'a';
            }
        }//const time

        int index = 0;
        while(maxFreq > 0 && index < s.size()){
            s[index] = mostFreqChar;
            maxFreq--;
            index += 2;
        }//O(n)

        if(maxFreq != 0){//mostzFreq char is not placed in index+2--->aaab
            return "";
        }

        hash[mostFreqChar - 'a'] = 0;

        //placing rest of the charecters
        for(int i = 0; i < 26; i++){
            while(hash[i]--){
                index = index >= s.size() ? 1 : index;
                s[index] = i + 'a';
                index += 2;
            }
        }//O(26*n)-->O(n)
        return s;
    }
};