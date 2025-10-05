class Info
{
public:
    int data;
    int rIndex;
    int cIndex;
    Info(int a, int b, int c)
    {
        this->data = a;
        this->rIndex = b;
        this->cIndex = c;
    }
};
class compare
{
public:
    bool operator()(Info *a, Info *b)
    {
        return a->data > b->data;
    }
};
class Solution
{
public:
    vector<int> smallestRange(vector<vector<int>> &nums)
    {
        priority_queue<Info *, vector<Info *>, compare> pq;
        int maxElem = INT_MIN;
        int minElem = INT_MAX;
        int totalRows = nums.size();
        for (int row = 0; row < totalRows; row++)
        {
            int elem = nums[row][0];
            Info *temp = new Info(elem, row, 0);
            pq.push(temp);
            maxElem = max(maxElem, elem);
            minElem = min(minElem, elem);
        }
        int ansStart = minElem;
        int ansEnd = maxElem;
        while (!pq.empty())
        {
            Info *front = pq.top();
            pq.pop();
            int frontData = front->data;
            int frontRIndex = front->rIndex;
            int frontCIndex = front->cIndex;

            minElem = frontData;
            if ((maxElem - minElem) < (ansEnd - ansStart))
            {
                ansStart = minElem;
                ansEnd = maxElem;
            }
            int currCols = nums[frontRIndex].size();
            if (frontCIndex + 1 < currCols)
            {
                int elem = nums[frontRIndex][frontCIndex + 1];
                Info *temp = new Info(elem, frontRIndex, frontCIndex + 1);
                pq.push(temp);
                maxElem = max(maxElem, elem);
            }
            else
            {
                break;
            }
        }
        return {ansStart, ansEnd};
    }
};