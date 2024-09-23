#include<string>
#include<climits>
using namespace std;

class Solution {
public:
    int beautySum(string s) {

        //Approach:1-->
        // int beautySum = 0;
        // unordered_map<char, int> map;

        // for(int i = 0; i < s.size(); i++){
        //     map.clear();
        //     for(int j = i; j < s.size(); j++){
        //         char &ch = s[j];
        //         map[ch]++;

        //         int mini = INT_MAX;
        //         int maxi = INT_MIN;

        //         for(auto each:map){
        //             maxi = max(maxi, each.second);
        //             mini = min(mini, each.second);
        //         }

        //         int beauty = maxi - mini;
        //         beautySum += beauty;
        //     }
        // }
        // return beautySum;

        //Approach:2-->
        int beautySum = 0;

        for(int i = 0; i < s.size(); i++){      
            int mp[256] = {0};
            for(int j = i; j < s.size(); j++){
                char &ch = s[j];
                mp[ch]++;

                int mini = INT_MAX;
                int maxi = INT_MIN;

                for(char ch = 'a'; ch <= 'z'; ch++){
                    if(mp[ch] > 0) {
                        maxi = max(maxi, mp[ch]);
                        mini = min(mini, mp[ch]);
                    }
                }
                int beauty = maxi - mini;
                beautySum += beauty;
            }
        }
        return beautySum;
    }
};