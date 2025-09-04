class Solution {
public:
    bool isVowel(char c){
        char ch = tolower(c);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            return true;
        return false;
    }
    string sortVowels(string s) {
        vector<char> vowels;
        for(char i : s){
            if(isVowel(i))
               vowels.push_back(i);
        }
        sort(vowels.begin(), vowels.end());
        int index = 0;
        for(int i = 0; i < s.size(); i++){
            if(isVowel(s[i])){
                s[i] = vowels[index++];
            }
        }
        return s;
    }
};