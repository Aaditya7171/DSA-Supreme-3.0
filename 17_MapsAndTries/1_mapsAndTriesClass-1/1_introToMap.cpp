#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
    map<int, string> orderedMap;
    unordered_map<int, string> unorderedMap;
    orderedMap[3] = "BMW";
    orderedMap[1] = "Defender";
    orderedMap[2] = "Ferrari";
    orderedMap.insert({4, "Audi"});

    unorderedMap[3] = "BMW";
    unorderedMap[1] = "Defender";
    unorderedMap[2] = "Ferrari";
    unorderedMap.insert({4, "Audi"});

    cout << "Ordered Map: \n";
    for (auto i : orderedMap)
    {
        cout << i.first << "-> " << i.second << endl;
    }
    cout << "Unordered Map: " << "\n";
    for (auto i : unorderedMap)
    {
        cout << i.first << "->" << i.second << endl;
    }

    // search in maps
    // count() function returns the number of elements with a key value equal to k.
    // If there is no element with that key then it returns zero.
    if (unorderedMap.count(3) == 0)
    {
        cout << "Element not found" << endl;
    }
    else
    {
        cout << "Element Found" << endl;
    }
    // find () function returns an iterator pointing to the element if found else it points to the end().
    if (unorderedMap.find(1) == unorderedMap.end())
    {
        cout << "Element Not Found" << endl;
    }
    else
    {
        cout << "Element Found" << endl;
    }
    unordered_map<int, int> mp;
    mp[5]++;
    mp[6]++;
    mp[8]++;
    mp[9]++;
    mp[5]++;
    mp[5]++;

    cout << "Frequency of 5 is " << mp[5];
    cout << mp.count(5);
    return 0;
}