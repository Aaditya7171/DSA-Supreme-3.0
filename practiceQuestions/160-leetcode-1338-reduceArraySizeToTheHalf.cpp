class Solution
{
public:
    int minSetSize(vector<int> &arr)
    {
        unordered_map<int, int> frequency;
        for (int num : arr)
        {
            frequency[num]++;
        }
        priority_queue<int> maxHeap;
        for (const auto &entry : frequency)
        {
            maxHeap.push(entry.second);
        }
        int removedCount = 0;
        int setSize = 0;
        int target = arr.size() / 2;
        while (removedCount < target)
        {
            removedCount += maxHeap.top();
            maxHeap.pop();
            setSize++;
        }
        return setSize;
    }
};