class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> ans = {-1, -1};
        ListNode* prev = head;
        ListNode* curr = head->next;
        ListNode* nxt = head->next->next;
        if((!prev) || (!curr) || (!nxt)) return ans;

        int firstCP = -1, lastCP = -1, minDist = INT_MAX, i = 1;
        while(nxt){
            bool isCP = ((curr->val > prev->val &&  curr->val > nxt->val) ||(curr->val < prev->val && curr->val < nxt->val)) ? true : false;

            if(isCP && firstCP == -1){
                firstCP = i;
                lastCP = i;
            } else if(isCP){
                minDist = min(minDist, i - lastCP);
                lastCP = i;
            }
            i++;
            prev = prev->next;
            curr = curr->next;
            nxt = nxt -> next;
        } 
        if(lastCP == firstCP){
            //only 1 CP found
            return ans;
        } else {
            ans[0] = minDist;
            ans[1] = lastCP - firstCP;
        }
        return ans;
    }
};