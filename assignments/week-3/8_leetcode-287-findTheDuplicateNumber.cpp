#include <vector>
#include <unordered_map>
#include <algorithm>
#include <climits>

using namespace std;

class Solution
{
public:
    int findDuplicateMap(vector<int> &nums)
    {
        unordered_map<int, int> freqMap;
        for (int i : nums)
        {
            if (++freqMap[i] > 1)
            {
                return i;
            }
        }
        return -1;
    }

    int findDuplicateSort(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums[i + 1])
                return nums[i];
        }
        return -1;
    }

    int negMarkingMethod(vector<int> &nums)
    { // t.c.-> O(n) s.c. -> o(1),
        int ans = INT_MIN;
        for (int i = 0; i < nums.size(); i++)
        {
            int index = abs(nums[i]);
            if (nums[index] < 0)
            {
                ans = index;
                break;
            }
            else
                nums[index] *= -1;
        }
        return ans;
    }

    int positioningMethod(vector<int> &nums)
    {
        while (nums[0] != nums[nums[0]])
        {
            swap(nums[0], nums[nums[0]]);
        }
        return nums[0];
    }

    int findDuplicate(vector<int> &nums)
    {
        return positioningMethod(nums);
    }
};