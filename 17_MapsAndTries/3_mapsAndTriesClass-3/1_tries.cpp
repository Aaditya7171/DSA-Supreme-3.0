#include <iostream>
#include <unordered_map>

using namespace std;

class TrieNode
{
public:
    char value;
    unordered_map<int, TrieNode *> children;
    bool isTerminal;

    TrieNode(char data)
    {
        this->value = data;
        this->isTerminal = false;
    }
};

void insertIntoTrie(TrieNode *root, string word)
{
    // base case
    if (word.length() == 0)
    {
        root->isTerminal = true;
        return;
    }

    // 1 case : insert one charecter into trie
    char ch = word[0];
    TrieNode *child;
    // present
    if (root->children.count(ch) == 1)
    {
        child = root->children[ch];
    }
    else // absent
    {
        child = new TrieNode(ch);
        // link
        root->children[ch] = child;
    }

    // recursive call
    insertIntoTrie(child, word.substr(1));
}

int main()
{
}