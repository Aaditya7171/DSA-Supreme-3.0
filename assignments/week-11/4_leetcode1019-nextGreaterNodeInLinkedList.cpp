
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> llArr;
        while(head){
            llArr.push_back(head->val);
            head = head->next;
        }
        stack<int> st;
        vector<int>ans(llArr.size());
        for(int i = 0; i < llArr.size(); i++){
            while(!st.empty() && llArr[i] > llArr[st.top()]){
                int topElem = st.top(); st.pop();
                ans[topElem] = llArr[i];
            }
            st.push(i);
        }
        return ans;
        // vector<int> vals;
        // for(auto* p = head; p; p = p->next)
        //     vals.push_back(p->val);
        // vector<int> answer(vals.size(), 0);
        // stack<int>st;
        // for(int i = 0; i < (int)vals.size(); i++){
        //     while(!st.empty() && vals[st.top()] < vals[i]){
        //         // pop indices whose value is smaller than vals[i]
        //         answer[st.top()] = vals[i];
        //         st.pop();
        //     }
        //     st.push(i);
        // }
        // return answer;
    }
};