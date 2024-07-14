//leetcode 1209. Remove All Adjacent Duplicates in String II
#include<string>
using namespace std;


class Solution {
public:
    string removeOccurrences(string full, string pattern) {
        
        while(full.find(pattern) != string::npos)//jbtk full string ke ander patterm string milti rahegi tbtk loop chalao
        {
            full.erase(full.find(pattern), pattern.length());
        }
        return full;
    }
};
//t.c.--> O((n/k)*(n-k))