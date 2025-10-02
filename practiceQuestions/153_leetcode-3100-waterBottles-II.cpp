class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int totalDrunk = numBottles;
        int emptyBottles = numBottles;
        int currentExchange = numExchange;
        while(emptyBottles >= currentExchange) {
            emptyBottles -= currentExchange;
            totalDrunk++;
            emptyBottles++;
            currentExchange++;
        }
        return totalDrunk;
    }
};