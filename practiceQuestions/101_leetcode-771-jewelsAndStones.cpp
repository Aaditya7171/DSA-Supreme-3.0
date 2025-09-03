class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<int, int> map;
        for(auto s : stones) map[s]++;
        int total = 0;
        for(auto j : jewels) total += map[j];
        return total;
    }
};