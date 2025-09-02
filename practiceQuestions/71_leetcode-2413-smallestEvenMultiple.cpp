class Solution {
public:
    int smallestEvenMultiple(int n) {
        for(int i = 1; i < INT_MAX; i++){
            if(i % 2 == 0 && i % n == 0){
                return i;
            }
        }
        return -1;
    }
};