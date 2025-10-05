class MedianFinder
{
public:
    priority_queue<int> maxHeap;
    priority_queue<int, vector<int>, greater<int>> minHeap;
    double median;
    MedianFinder()
    {
        median = 0;
    }

    void addNum(int num)
    {
        // 3 cases
        // cases 1
        if (maxHeap.size() == minHeap.size())
        {
            if (num > median)
            {
                // insert at right
                minHeap.push(num);
                median = minHeap.top();
            }
            else
            {
                // insert at left
                maxHeap.push(num);
                median = maxHeap.top();
            }
        }
        // cases 2
        else if (maxHeap.size() == minHeap.size() + 1)
        {
            // maxHeap is bigger by 1
            if (num > median)
            {
                minHeap.push(num);
                median = (minHeap.top() + maxHeap.top()) / 2.0;
            }
            else
            {
                // restructring, need to offload 1 elem from maxHead
                int elem = maxHeap.top();
                maxHeap.pop();
                minHeap.push(elem);
                maxHeap.push(num);
                median = (minHeap.top() + maxHeap.top()) / 2.0;
            }
        }
        // case 3
        else if (maxHeap.size() + 1 == minHeap.size())
        {
            // minHeap is bigger
            if (num > median)
            {
                // need to offload 1 elem from minHeap
                int elem = minHeap.top();
                minHeap.pop();
                maxHeap.push(elem);
                minHeap.push(num);
                median = (minHeap.top() + maxHeap.top()) / 2.0;
            }
            else
            {
                maxHeap.push(num);
                median = (minHeap.top() + maxHeap.top()) / 2.0;
            }
        }
    }

    double findMedian()
    {
        return median;
    }
};
