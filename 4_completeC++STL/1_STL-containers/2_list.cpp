#include<iostream>
#include<list>

int main(){
    //creation-->
    std::list<int> myList;

    //insertion-->
    myList.push_back(10);//10->
    myList.push_back(20);//10->20->
    myList.push_back(30);//10->20->30->
    myList.push_front(40);//40->10->20->30->
    myList.push_front(50);//50->40->10->20->30->
    
    //removal/deletion-->
    // remove element from back
    myList.pop_back();//50->40->10->20->
    // remove element from front
    myList.pop_front();//40->10->20->

    //size()-->returns the size of the list
    std::cout << myList.size() << "\n";
    //clear()-->clears the list
    // myList.clear();
    std::cout << myList.size() << "\n";
    //empty()-->check weather or not the list is empty and returs "true" if empty, "false" otherwise
    if(myList.empty() == true){
        std::cout << "List is empty" << "\n";
    } else {
        std::cout << "List is not empty" << "\n";
    }

    //front()-->returns the first element
    std::cout << myList.front() << "\n";
    //back()--> returns the last element from the list
    std::cout << myList.back() << "\n";
    
    //begin() && end()-->
    std::list<int>::iterator it = myList.begin();
    while(it != myList.end()){
        std::cout << *it << "-> ";
        it++;
    } std::cout << "\n" << "After removal: ";
    //remove
    myList.remove(10);
    std::list<int>::iterator it1 = myList.begin();
    while(it1 != myList.end()){
        std::cout << *it1 << "-> ";
        it1++;
    }
 
    //swap()-->
    std::list<int> first;
    std::list<int> second;
    first.push_back(10);
    first.push_back(20);
    first.push_back(30);
    //first: 10->20->30
    second.push_back(40);
    second.push_back(50);
    second.push_back(60);
    //second: 30->50->60
    std::list<int>::iterator it2 = first.begin();
    std::cout << "Before Swapping(first): " << "\n";
    while(it2 != first.end()){
        std::cout << *it2 << "-> ";
        it2++;
    } std::cout << "\n" << "After Swapping(first): " << "\n";
    first.swap(second);
    std::list<int>::iterator it3 = first.begin();
    while(it3 != first.end()){
        std::cout << *it3 << "-> ";
        it3++;
    }

    //insert()-->
    std::cout << "\n" << "After insertion(first): " << "\n";
    first.insert(first.begin(), 100);//100->10->20->30
    std::list<int>::iterator it4 = first.begin();
    while(it4 != first.end()){
        std::cout << *it4 << "-> ";
        it4++;
    }

    //erase()-->
    std::cout << "\n" << "Size before erase: " << first.size() << "\n";
    first.erase(first.begin(), first.end());
    std::cout << "Size after erase: " << first.size() << "\n";

    return 0;
}