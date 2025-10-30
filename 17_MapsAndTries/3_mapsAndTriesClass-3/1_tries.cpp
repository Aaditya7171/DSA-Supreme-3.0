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

bool searchTrie(TrieNode *root, string word)
{
    // base case -> check if last char isTerminal or not
    if (word.length() == 0)
        return root->isTerminal;
    // 1 case
    char ch = word[0];
    TrieNode *child;
    if (root->children.find(ch) != root->children.end())
    {
        // present
        child = root->children[ch];
    }
    else
    {
        // absent
        return false;
    }
    // recursive call
    return searchTrie(child, word.substr(1));
}

void deleteWord(TrieNode *root, string word)
{
    // base case-> root will have last char
    if (word.length() == 0)
    {
        root->isTerminal = false;
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
        return;
    }
    return deleteWord(child, word.substr(1));
}

int main()
{
    TrieNode *root = new TrieNode('-');
    insertIntoTrie(root, "cover");
    insertIntoTrie(root, "car");
    insertIntoTrie(root, "cost");
    insertIntoTrie(root, "cute");
    insertIntoTrie(root, "cat");
    insertIntoTrie(root, "snow");
    insertIntoTrie(root, "sweet");
    insertIntoTrie(root, "hot");
    insertIntoTrie(root, "extraordinary");
    insertIntoTrie(root, "short");
    insertIntoTrie(root, "selfobsessed");
    // cout << "Heyy Koko";

    bool ans = searchTrie(root, "hot");
    ans == true ? cout << "found\n" : cout << "not found" << endl;

    deleteWord(root, "hot");

    bool ans1 = searchTrie(root, "hot");
    ans1 == true ? cout << "found\n" : cout << "not found" << endl;

    return 0;
}