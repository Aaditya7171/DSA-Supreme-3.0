#include<iostream>
#include<map>
#include<unordered_map>
#include<string>

using namespace std;

int main(){

    //creation
    unordered_map<string, string> table;

    //insertion
    table["in"] = "India";//method 1
    table.insert(make_pair("en", "England"));//method 2
    //method 3
    pair<string, string> p;
    p.first = "br";
    p.second = "Brazil";    
    table.insert(p);

    std::cout << "Size of table is: " << table.size() << "\n";

    //accessing
    //using at()
    std::cout << "value of in: " << table.at("in") << "\n";

    //updation
    //Method 1: we can update the value as well using at()
    table.at("in") = "Bharat";
    std::cout << "value of in(after updation): " << table.at("in") << "\n";
    //Method 2
    table["en"] = "England 2";
    std::cout << "value of en(after updation): " << table.at("en") << "\n";

    //traversal : iterator, begin(), end()
    unordered_map<string, string>::iterator it = table.begin();
    while(it != table.end()){
        pair<string, string> p = *it;
        std::cout << p.first << " " << p.second << "\n";
        it++;
    } 

    //find(const Key& Key) : returns an iterator to the element with the given key or end() if the key is not found 
    if(table.find("in") != table.end()){
        std::cout << "Key found." << "\n";
    } else {
        std::cout << "Key not found." << "\n";
    }

    //count(count Key& Key) : returns the number of elements with the specified key(1(found) or 0(not found) since std::map does not allow duplicate keys)
    if(table.count("us") == 0){
        std::cout << "Key not found" << "\n";
        } 
    if(table.count("us") == 1) {
        std::cout << "Key found" << "\n";
    }

    //erase()
    std::cout << "Size of table is(before erase()): " << table.size() <<"\n";
    table.erase(table.begin(), table.end());
    std::cout << "Size of table is(after erase()): " << table.size() <<"\n";
  
    //clear()
    table.clear();
    std::cout << "Size of table is(after clear()): " << table.size() <<"\n";

    //empty()
    if(table.empty() == true){
        std::cout << "Map is empty." << "\n";
    } else {
        std::cout << "Map is not empty," << "\n";
    }

    //ordered map 
    map<string, string> m;
    m["in"] = "India";
    m["us"] = "United States";
    m["uk"] = "United Kingdom";
    m["pl"] = "Poland";

    map<string, string>::iterator it1 = m.begin();
    while(it1 != m.end()){
        pair<string, string> p1 = *it1;
        std::cout << p1.first << " " << p1.second << "\n";
        it1++;
    } 
    //All the operations works same in map as unordered_map but there are two major differences b/w map(ordered) and unordered map
    //1.map has t.c. of O(log n) while unordered_map has t.c. of O(1) for several operation(insert, access)
    //2.data is printed in sorted order based on keys(lexicographically) in map while unsorted(random) in unordered map
   
    return 0; 
}