class TrieNode
{
public:
    char data;
    unordered_map<char, TrieNode *> children;
    bool isTerminal;

    TrieNode(char val)
    {
        this->data = val;
        isTerminal = false;
    }
};

void insertWord(TrieNode *root, string word)
{
    if (word.length() == 0)
    {
        root->isTerminal = true;
        return;
    }
    char ch = word[0];
    TrieNode *child;
    if (root->children.find(ch) != root->children.end())
    {
        child = root->children[ch];
    }
    else
    {
        child = new TrieNode(ch);
        root->children[ch] = child;
    }
    insertWord(child, word.substr(1));
}

class Solution
{
public:
    void findLCP(TrieNode *root, string &ans)
    {
        if (root->isTerminal)
            return;
        TrieNode *child;
        if (root->children.size() == 1)
        {
            for (auto i : root->children)
            { // 1 bar hi chalega on each rec call
                char ch = i.first;
                ans.push_back(ch);
                child = i.second;
            }
        }
        else
        {
            return;
        }
        findLCP(child, ans);
    }
    string longestCommonPrefix(vector<string> &strs)
    {
        TrieNode *root = new TrieNode('-');
        for (auto word : strs)
            insertWord(root, word);

        string ans = "";
        findLCP(root, ans);
        return ans;
    }
};