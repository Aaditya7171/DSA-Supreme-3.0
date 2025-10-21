class Solution
{
public:
    int finalValueAfterOperations(vector<string> &operations)
    {
        int X = 0;
        for (auto ch : operations)
        {
            if (ch == "++X" || ch == "X++")
                X += 1;
            else
                X -= 1;
        }
        return X;
    }
};