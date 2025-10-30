#include <iostream>
#include <vector>
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
        child = root->children[ch];
    else // absent
    {
        child = new TrieNode(ch);
        // link
        root->children[ch] = child;
    }
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
        child = root->children[ch]; // present
    else
        return false; // absent
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
        child = root->children[ch];
    else
        return;
    return deleteWord(child, word.substr(1));
}

void storeString(TrieNode *root, vector<string> &ans, string temp)
{
    if (root->isTerminal)
        ans.push_back(temp); // no need tp return as deeper words would be missed
    for (auto i : root->children)
    {
        char ch = i.first;
        TrieNode *child = i.second;
        temp.push_back(ch);
        storeString(child, ans, temp);
        temp.pop_back(); // backtrack
    }
}

void findWordsWithPrefix(TrieNode *root, string prefix, vector<string> &ans)
{
    if (prefix.length() == 0)
    {
        // prefix is searched completely
        // and root will be storing the last char of string prefix
        // now, we'll store all the strings below that last node
        string temp = "";
        storeString(root, ans, temp);
        return;
    }
    char ch = prefix[0];
    TrieNode *child;

    if (root->children.find(ch) != root->children.end())
        child = root->children[ch];
    else
        return;
    findWordsWithPrefix(child, prefix.substr(1), ans);
}

vector<vector<string>> getSuggestions(TrieNode *root, string prefix)
{
    vector<vector<string>> ans;
    string temp = "";
    for (int i = 0; i < prefix.length(); i++)
    {
        vector<string> tempAns;
        char currChar = prefix[i];
        temp.push_back(currChar);
        findWordsWithPrefix(root, temp, tempAns);
        for (int j = 0; j < tempAns.size(); j++)
        {
            tempAns[j] = temp + tempAns[j];
        }
        ans.push_back(tempAns);
    }
    return ans;
}
int main()
{
    TrieNode *root = new TrieNode('-');
    insertIntoTrie(root, "costume");
    insertIntoTrie(root, "cosmetic");
    insertIntoTrie(root, "costly");
    insertIntoTrie(root, "cosmic");
    insertIntoTrie(root, "cosmopolitan");
    insertIntoTrie(root, "cute");
    insertIntoTrie(root, "comfy");

    string prefix = "cos";
    // vector<string> ans;
    // for suggestions from prefix
    // findWordsWithPrefix(root, prefix, ans);
    // for (auto i : ans)
    // {
    //     string str = prefix + i;
    //     i = str;
    //     cout << i << "" << endl;
    // }
    // for suggestions from each substring of prefix
    vector<vector<string>> ans = getSuggestions(root, prefix);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << ", ";
        }
        cout << endl;
    }
    return 0;
}