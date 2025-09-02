class Solution {
public:
    int findIndex(string word, char ch){
        int index = -1;
        for(int i = 0; i < word.size(); i++){
            if(word[i] == ch){
                return i;
            }
        }
        return index;
    }
    string reversePrefix(string word, char ch) {
        
        int index = findIndex(word, ch);
        reverse(word.begin(), word.begin() + index + 1);
        return word;
    }
};