class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        // T.C. O(Nlogk)
        unordered_map<int, int> freqMap; // key->element, value->frequency
        for (auto n : nums)
            freqMap[n]++;
        // pair<int,int> shows-> {freq, num}, min heap->by default sorting
        // according to pair.first
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;
        // iterate the freq map and maintain heap of size k
        for (auto entry : freqMap)
        {
            minHeap.push({entry.second, entry.first}); // heap has pairs
            if (minHeap.size() > k)
            {
                minHeap.pop(); // removing least freq element
            }
        }
        // at this point, my minHeap has top k freq elements
        vector<int> ans;
        while (!minHeap.empty())
        {
            // pair<int, int> top = minHeap.top();
            // minHeap.pop();
            // ans.push_back(top.second);

            // another way to right the same, called as dereferencing
            auto [freq, num] = minHeap.top();
            // here we've got two variables, freq and num, holding the values of first and second respectively.
            minHeap.pop();
            ans.push_back(num);
        }
        return ans;
    }
};