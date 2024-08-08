#include<iostream>
#include<vector>
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    std::vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int n = 0;
        auto it = head;
        while(it){
            n++;
            it = it->next;
        }
        // declare size of each part/bucket
        int partSize = n / k;
        int extraNodes = n % k;

        std::vector<ListNode*> ans(k, NULL);
        it = head;

        for(int i = 0; i < k && it; i++){
            ans[i] = it;
            int sizeOfCurrPart = partSize + (extraNodes > 0 ? 1 : 0);
            extraNodes--;
            
            for(int j = 0; j < sizeOfCurrPart - 1; j++){
                it = it->next;
            }

            auto startingOfNextPart = it->next;
            it->next = NULL;
            it = startingOfNextPart;
        }
        return ans;
    }
};