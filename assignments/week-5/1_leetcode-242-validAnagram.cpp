class Solution {
public:
    bool isAnagram(string s, string t) {
        // // Basic Solution--->
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // return s==t;

        // //Using Map--->
        // if(s.size() != t.size()) return false;
        // unordered_map<char, int> freq;
        // for(auto i : s) freq[i]++;
        // for(auto i : t) freq[i]--;
        // for(auto p: freq)
        //     if(p.second != 0) return false;
        // return true;

        // Appoach-3(using Array)
        int freqTable[256] = {0};
        for(int i = 0; i < s.size(); i++){
            freqTable[s[i]]++;//automatic typecasting->since freqTable is a int type array {equivalent to freqTable[(int)s[i]];}
        }

        for(int i = 0; i < t.size(); i++){
            freqTable[t[i]]--;
        }
        for(auto i : freqTable){
            if(i != 0) return false;    
        }
        return true;
    }
};