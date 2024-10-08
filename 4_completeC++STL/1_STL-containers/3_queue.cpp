#include<iostream>
#include<queue>

int main() {
    //creation
    std::queue<int> q;

    //insertion
    q.push(10);//10
    q.push(20);//10,20
    q.push(30);//10,20,30
    
    //size()
    std::cout << q.size() << "\n";

    //deletion
    q.pop();//20,30

    //empty()
    if(q.empty() == true){
        std::cout << "Queue is empty." << "\n";
    } else{
        std::cout << "Queue is not empty." << "\n";
    }

    //front()
    std::cout << q.front() << "\n";
     
    //back()
    std::cout << q.back() << "\n";

    //swap()
    std::queue<int> q1;
    std::queue<int> q2;

    q1.push(1);
    q1.push(2);
    q1.push(3);
    q2.push(4);
    q2.push(5);
    q2.push(6);

    q1.swap(q2);

    std::cout << q1.front() << " " << q1.back() << "\n"; 

    return 0;
}