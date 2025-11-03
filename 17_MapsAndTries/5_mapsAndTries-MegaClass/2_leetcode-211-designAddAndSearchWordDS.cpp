class TrieNode
{
public:
    char data;
    unordered_map<char, TrieNode *> children;
    bool isTerminal;
    TrieNode(char ch)
    {
        this->data = ch;
        isTerminal = false;
    }
};

class Trie
{
    TrieNode *root;

    void insertUtil(TrieNode *root, string &word, int i = 0)
    {
        if (i == word.size())
        {
            root->isTerminal = true;
            return;
        }
        if (root->children.find(word[i]) == root->children.end())
        {
            root->children[word[i]] = new TrieNode(word[i]);
        }
        insertUtil(root->children[word[i]], word, i + 1);
    }
    bool searchUtil(TrieNode *root, string &word, int i = 0)
    {
        if (i == word.size())
        {
            return root->isTerminal;
        }
        char ch = word[i];
        bool matched = false;
        if (ch == '.')
        {
            // '.' can be matched to any child of current root Trie Node
            for (auto &[childChar, childNode] : root->children)
            {
                matched = matched || searchUtil(root->children[childChar], word, i + 1);
            }
        }
        else
        {
            if (root->children.find(word[i]) != root->children.end())
            {
                matched = searchUtil(root->children[word[i]], word, i + 1);
            }
        }
        return matched;
    }

public:
    void insert(string &word)
    {
        insertUtil(root, word);
    }
    bool search(string &word)
    {
        return searchUtil(root, word);
    }
    Trie()
    {
        root = new TrieNode('\0');
    }
};
class WordDictionary
{
    Trie trie;

public:
    WordDictionary()
    {
    }

    void addWord(string word)
    {
        trie.insert(word);
    }

    bool search(string word)
    {
        return trie.search(word);
    }
};