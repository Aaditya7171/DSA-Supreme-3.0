#include <vector>
#include <climits>

using namespace std;

class Solution
{
public:
    double bruteForce(vector<int> &nums, int &k)
    {
        int maxSum = INT_MIN;
        int i = 0, j = k - 1;
        while (j < nums.size())
        {
            int sum = 0;
            for (int x = i; x <= j; x++)
            {
                sum += nums[x];
            }
            maxSum = max(maxSum, sum);
            ++i, ++j;
        }
        double maxAvg = (double)maxSum / k;
        return maxAvg;
    }

    double slidingWindow(vector<int> &nums, int &k)
    {
        int i = 0, j = k - 1;
        int sum = 0;
        for (int x = i; x <= j; x++)
        {
            sum += nums[x];
        }
        int maxSum = sum;
        j++;
        while (j < nums.size())
        {
            sum -= nums[i++];
            sum += nums[j++];
            maxSum = max(maxSum, sum);
        }
        double maxAvg = maxSum / (double)k;
        return maxAvg;
    }

    double findMaxAverage(vector<int> &nums, int k)
    {
        return slidingWindow(nums, k);
    }
};