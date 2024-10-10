#include<iostream>
#include<queue>

int main(){

    //creation
    std::deque<int> dq;

    //insertion
    dq.push_back(10);//10
    dq.push_back(20);//10,20
    dq.push_back(30);//10,20,30
    dq.push_front(40);//40,10,20,30
    dq.push_front(50);//50,40,10,20,30
    dq.push_front(60);//60,50,40,10,20,30

    //deletion
    dq.pop_back();//60,50,40,10,20
    dq.pop_front();//50,40,10,20
    
    //size()
    std::cout << "Size of dq is: " << dq.size() << "\n";

    //front() && back()
    std::cout << "First element of dq is: " << dq.front() << "\n";
    std::cout << "Last element of dq is: " << dq.back() << "\n";

    //empty()
    if(dq.empty() == true){
        std::cout << "dq is empty." << "\n";
    } else {
        std::cout << "dq is not empty." << "\n";
    }

    //traversal: iterator, begin(), end()
    std::deque<int>::iterator it = dq.begin();
    while(it != dq.end()){
        std::cout << *it << " ";
        it++;
    } std::cout << "\n";

    //direct accessing: [], at()
    std::cout << dq[0] << '\n';
    std::cout << dq[1] << '\n';
    std::cout << dq.at(2) << '\n';
    std::cout << dq.at(3) << '\n';

    //clear()
    std::cout << "Size of dq before clear(): " << dq.size() << "\n";
    dq.clear();
    std::cout << "Size of dq after clear(): " << dq.size() << "\n";
    
    //insert(iterator position, const T& value)
    dq.insert(dq.begin(), 101);//101
    dq.insert(dq.begin(), 102);//102, 101
    dq.insert(dq.end(), 103);//102, 101, 103
    
    std::cout << "Size of dq: " << dq.size() << "\n";
    std::deque<int>::iterator it1 = dq.begin();
    while(it1 != dq.end()){
        std::cout << *it1 << " ";
        it1++;
    } std::cout << "\n";

    //swap()
    std::deque<int> dq1;
    dq1.push_back(1);
    dq1.push_back(2);
    dq1.push_back(3);//1,2,3

    std::cout << "dq before swap() ";
    std::deque<int>::iterator it2 = dq.begin();
    while(it2 != dq.end()){
        std::cout << *it2 << " ";
        it2++;
    } std::cout << "\n";

    dq.swap(dq1);

    std::cout << "dq after swap() ";
    std::deque<int>::iterator it3 = dq.begin();
    while(it3 != dq.end()){
        std::cout << *it3 << " ";
        it3++;
    } std::cout << "\n";

    //erase()
    std::cout << "Size of dq before erase(): " << dq.size() << "\n";
    dq.erase(dq.begin(), dq.end());
    std::cout << "Size of dq after erase(): " << dq.size() << "\n";


    return 0;
}