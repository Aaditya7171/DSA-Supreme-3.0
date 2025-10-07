class Solution
{
public:
    class myComp
    {
    public:
        bool operator()(pair<int, int> &a, pair<int, int> &b)
        {
            int distA = a.first * a.first + a.second * a.second;
            int distB = b.first * b.first + b.second * b.second;
            return distA > distB;
        }
    };
    vector<vector<int>> kClosest(vector<vector<int>> &points, int k)
    {
        // T.C. O(NlogN), S.C. O(N)
        vector<vector<int>> ans;
        // minHeap giving hire priority to point closer to origin
        priority_queue<pair<int, int>, vector<pair<int, int>>, myComp> pq;

        for (auto point : points)
        {
            pq.push({point[0], point[1]}); // p[0]->X, p[1]->Y
        }
        while (!pq.empty() && k--)
        {
            auto top = pq.top();
            ans.push_back({top.first, top.second});
            pq.pop();
        }
        return ans;
    }
};