class Solution
{
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>> &stations)
    {
        // T.C. O(NlogN), S.C. O(N)
        int stops = 0, dist = 0, i = 0;
        int fuel = startFuel;
        priority_queue<pair<int, int>> maxHeap;
        while (true)
        {
            while (i < stations.size())
            {
                // Push stations within the reach with my current fuel
                // levels from my current position
                if (stations[i][0] <= dist + fuel)
                {
                    maxHeap.push({stations[i][1], stations[i][0]});
                }
                else
                    break;
                i++;
            }
            // travel with full fuel level
            dist += fuel;
            fuel = 0;
            // reached
            if (dist >= target)
                break;
            // no fuel stations within reach
            if (maxHeap.empty())
            {
                stops = -1;
                break;
            }
            // refuel and readjust dist & fuel based on the distance travelled and fuel used till that station
            auto &top = maxHeap.top();
            fuel = (dist - top.second) + top.first;
            dist = top.second;
            maxHeap.pop();
            stops++;
        }
        return stops;
    }
};