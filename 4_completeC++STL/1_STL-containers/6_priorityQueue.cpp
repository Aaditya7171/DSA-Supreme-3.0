#include<iostream>
#include<queue>

int main(){
    std::priority_queue<int> pq;
    //When we create priority queue like this then we get a Max heap(max value-> highest priority)

    //insertion
    pq.push(1);//1
    pq.push(7);//7,1
    pq.push(10);//10,7,2
    pq.push(6);//10,7,6,1
    pq.push(2);//10,7,6,2,1

    //top()-> fetches the topmost element(highest priority) of the queue
    std::cout << "Topmost element(highest priority element) of pq is: " << pq.top() << "\n";

    //pop()-> pops out the topmost Element
    pq.pop();
    std::cout << "Topmost element(highest priority element) of pq is: " << pq.top() << "\n";

    //size()
    std::cout << "Size of pq is: " << pq.size() << '\n';

    //empty()
    if(pq.empty() == true){
        std::cout << "pq is empty." << "\n";
    } else {
        std::cout << "pq is not empty." << "\n";
    }

    //swap() : works same as earlier discussed containers
     
     
    //we can create "Min Heap" as well using "priority_queue"
    std::priority_queue<int, std::vector<int>, std::greater<int> > pq2;
    //Min heap : minimum value -> highest priority
    pq2.push(100);//100
    pq2.push(44);//44,100
    pq2.push(63);//44,63,100
    pq2.push(24);//24,44,63,100

    std::cout << "topmost element of pq2 is " << pq2.top() << "\n";

    pq2.pop();

    std::cout << "topmost element of pq2(after deletion) is " << pq2.top() << "\n";


    return 0;
}
