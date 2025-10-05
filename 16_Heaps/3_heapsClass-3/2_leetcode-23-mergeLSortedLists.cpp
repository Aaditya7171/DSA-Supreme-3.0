class compare
{
public:
    bool operator()(ListNode *a, ListNode *b)
    {
        return a->val > b->val;
    }
};
class Solution
{
public:
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {
        priority_queue<ListNode *, vector<ListNode *>, compare> pq;
        ListNode *head = NULL;
        ListNode *tail = NULL;
        // process first k elements(1st element of each list)
        int totalRows = lists.size();
        for (int row = 0; row < totalRows; row++)
        {
            ListNode *start = lists[row];
            if (start != NULL)
                pq.push(start);
        }
        while (!pq.empty())
        {
            ListNode *front = pq.top();
            pq.pop();
            if (!head && !tail)
            {
                // inserting first node
                head = front;
                tail = front;
            }
            else
            {
                tail->next = front;
                tail = front;
            }
            if (tail->next)
                pq.push(tail->next);
        }
        return head;
    }
};