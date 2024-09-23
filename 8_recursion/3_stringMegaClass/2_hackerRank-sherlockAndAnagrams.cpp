#include<unordered_map>
#include<string>
#include<algorithm>
using namespace std;
int sherlockAndAnagrams(string s) {
    unordered_map<string, int> anagramaticSubstringCount;
    int anagram_pairs = 0;
    
    for(int i = 0; i < s.size(); i++){
         for(int j = i; j < s.size(); j++){
             string subString = s.substr(i, j - i + 1);
             
             sort(subString.begin(), subString.end());
             
             anagramaticSubstringCount[subString]++;
         }
    }
    
    for(auto e:anagramaticSubstringCount){
        int count = e.second;
        anagram_pairs += (count * (count - 1)) / 2;
    }
    return anagram_pairs;
}
