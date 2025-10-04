class Info
{
public:
    int data;
    int rIndex;
    int cIndex;
    Info(int x, int y, int z)
    {
        data = x;
        rIndex = y;
        cIndex = z;
    }
};

class myComp
{
public:
    bool operator()(Info *a, Info *b)
    {
        return a->data > b->data; // min heap
    }
};

class Solution
{
public:
    // Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        // code here
        // Time Complexity-> O(n*klogn*k), S.C. O(k)
        priority_queue<Info *, vector<Info *>, myComp> pq;
        vector<int> ans;
        // process first k elements(1st element of each array)
        int totalRows = arr.size();
        int totalColumns = arr[0].size();
        for (int i = 0; i < totalRows; i++)
        {
            int elem = arr[i][0];
            Info *temp = new Info(elem, i, 0);
            pq.push(temp);
        }
        while (!pq.empty())
        {
            Info *front = pq.top();
            pq.pop();
            int frontData = front->data;
            int frontRIndex = front->rIndex;
            int frontCIndex = front->cIndex;
            ans.push_back(frontData);

            // check if something is left after front element
            if (frontCIndex + 1 < totalColumns)
            {
                int elem = arr[frontRIndex][frontCIndex + 1];
                Info *temp = new Info(elem, frontRIndex, frontCIndex + 1);
                pq.push(temp);
            }
        }
        return ans;
    }
};