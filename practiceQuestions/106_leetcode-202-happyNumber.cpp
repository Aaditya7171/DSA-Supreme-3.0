// Tortoise and Hare algorithm
class Solution {
public:
    // computes sum of squares of digits of n
    int getNext(int n){
        int ans = 0;
        while(n > 0){
            int digit = n % 10;
            ans += digit*digit;
            n = n / 10;
        }
        return ans;
    }
    bool isHappy(int n) {
        int slow = n, fast = getNext(n);
        while(fast != 1 && slow != fast){
            slow = getNext(slow);// move slow one step
            fast = getNext(getNext(fast));// move fast two steps
        }
        return fast == 1;
    }
};