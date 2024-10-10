#include<iostream>
#include<set>
#include<unordered_set>

using namespace std;

int main() {

    //creation
    set<int> s;//ordered set

    //insertion
    s.insert(2);
    s.insert(6);
    s.insert(5);
    s.insert(8);
    s.insert(2);

    //traverse: iterator, begin(), end()
    set<int> :: iterator it = s.begin();
    while(it != s.end()){
        std::cout << *it << " ";
        it++;
    } std::cout << "\n";

    //creation of unordered set
    unordered_set<int> us;
    us.insert(8);
    us.insert(2);
    us.insert(6);
    us.insert(5);
    us.insert(2);

    unordered_set<int> :: iterator it1 = us.begin();
    while(it1 != us.end()){
        std::cout << *it1 << " ";
        it1++;
    } std::cout << "\n";

    //size()
    std::cout << "Size of s: " << s.size() << "\n";

    //clear()
    std::cout << "Size of us(before clear()): " << us.size() << "\n";
    us.clear();
    std::cout << "Size of us(afer clear()): " << us.size() << "\n";

    //empty()
    if(us.empty() == true){
        std::cout << "us is empty." << "\n";
    } else{
        std::cout << "us is not empty" << "\n";
    }

    //erase()
    s.erase(s.begin(), s.end());
    std::cout << "Size of s(after erase()): " << us.size() << "\n";
    
    set<int> st;
    st.insert(21);
    st.insert(46);
    st.insert(95);
    st.insert(84);
    st.insert(29);
    st.insert(95);

    //find(const T& key) : returns an iterator to the element with the given key, or end() if the key is not found
    if(st.find(47) != st.end()){
        std::cout << "Key Found" << "\n";
    } else {
        std::cout << "Key not found." << "\n";
    }

    //count(const T& key) : returns the number of elements with the specified key(1 or 0) since "'set" doesn't allow duplicate keys
    if(st.count(95) == 0){
        std::cout << "Key Not Found." << "\n";
    }
    else {
        std::cout << "Key found." << '\n';
    }
    
    std::cout << st.count(95) << "\n";

    //all the operations works same in both

    return 0;
}