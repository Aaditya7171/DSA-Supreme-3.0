#include<iostream>

class functorOne {
    public:
    bool operator()(int a, int b){//overloading operator()
        return a > b;//if a>b == true, a should be placed before b(that's why descending order)
    }
};

class Student{
    public:
    int marks;
    std::string name;
    Student () {}//constructor
    Student(int m, std::string n){
        this->marks = m;
        this->name = n;
    }
};

class studentComparator {
    public:
    bool operator()(Student a, Student b){
        return a.marks < b.marks; 
    }

};
int main() {
     
    functorOne obj;
    int a = 10, b = 5;
    if(obj(a, b) == true)//we created an object and it can be used as function
        std::cout << "a is greater then b." << "\n"; 
    
    else 
        std::cout << "a is lesser than b." << "\n";

    Student s1;
    Student s2;
    s1.marks = 97;
    s1.name = "Alex";

    s2.marks = 87;
    s2.name = "Bob";

    studentComparator cmp;
    if(cmp(s1, s2)) std::cout << s1.name << " has got lesser marks than " << s2.name << ". \n";
    else std::cout << s2.name << " has got lesser marks than " << s1.name << ". \n";

    return 0;
}