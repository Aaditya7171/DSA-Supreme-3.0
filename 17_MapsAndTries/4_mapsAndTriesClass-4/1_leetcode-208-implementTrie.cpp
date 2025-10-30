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

bool searchWord(TrieNode *root, string word)
{
    if (word.size() == 0)
        return root->isTerminal;
    char ch = word[0];
    TrieNode *child;
    if (root->children.find(ch) != root->children.end())
        child = root->children[ch];
    else
        return false;
    return searchWord(child, word.substr(1));
}

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

bool searchPrefix(TrieNode *root, string word)
{
    if (word.size() == 0)
        return true;
    char ch = word[0];
    TrieNode *child;
    if (root->children.find(ch) != root->children.end())
        child = root->children[ch];
    else
        return false;
    return searchPrefix(child, word.substr(1));
}

class Trie
{
public:
    TrieNode *root;
    Trie()
    {
        root = new TrieNode('-');
    }

    void insert(string word)
    {
        insertWord(root, word);
    }

    bool search(string word)
    {
        return searchWord(root, word);
    }

    bool startsWith(string prefix)
    {
        return searchPrefix(root, prefix);
    }
};