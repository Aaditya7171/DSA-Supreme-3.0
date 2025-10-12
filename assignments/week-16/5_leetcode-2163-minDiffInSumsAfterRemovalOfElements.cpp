class Solution
{
public:
#define ll long long
    long long minimumDifference(vector<int> &nums)
    {
        // S.C. O(N), T.C. O(NlogN)
        int n = nums.size() / 3;
        vector<ll> prefix(nums.size(), -1), suffix(nums.size(), -1);
        // prefix[i] = sum of first n elements from left side
        // suffix[i] = sum of first n elements from right side

        ll sum = 0; // min n elements sum
        priority_queue<ll> maxHeap;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            maxHeap.push(nums[i]);

            // pop the maximum element
            if (maxHeap.size() > n)
            {
                sum -= maxHeap.top();
                maxHeap.pop();
            }
            if (maxHeap.size() == n)
            {
                prefix[i] = sum;
            }
        }
        sum = 0; // maximum n elements sum
        priority_queue<ll, vector<ll>, greater<ll>> minHeap;
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            sum += nums[i];
            minHeap.push(nums[i]);

            if (minHeap.size() > n)
            {
                sum -= minHeap.top();
                minHeap.pop();
            }
            if (minHeap.size() == n)
            {
                suffix[i] = sum;
            }
        }
        ll ans = LONG_LONG_MAX;
        for (int i = n - 1; i < 2 * n; i++)
        {
            ans = min(ans, prefix[i] - suffix[i + 1]);
        }
        return ans;
    }
};