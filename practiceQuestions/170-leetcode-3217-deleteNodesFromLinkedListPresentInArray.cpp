class Solution
{
public:
    ListNode *helper(ListNode *node, unordered_set<int> &st)
    {
        if (!node)
            return nullptr;
        node->next = helper(node->next, st);
        if (st.count(node->val))
        {
            ListNode *nextNode = node->next;
            return nextNode; // skip curr one
        }
        return node; // not in the set, keep it
    }
    ListNode *modifiedList(vector<int> &nums, ListNode *head)
    {
        unordered_set<int> st(nums.begin(), nums.end());
        return helper(head, st);
    }
};