#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>

class Student{
    public:
    int marks;
    std::string name;
    Student () {}
    Student(int m, std::string n){
        this->marks = m;
        this->name = n;
    }
};

class comparator{
    public:
    bool operator()(Student a, Student b){
        //criteria : min marks -> high priority
        return a.marks < b.marks;
    }
};


int main(){
     
    //Max-heap
    std::priority_queue<int> pq;
    std::priority_queue<int, std::vector<int>, std::less<int>> pq1;

    //Min-heap
    std::priority_queue<int, std::vector<int>, std::greater<int>> pq2;
    
    std::priority_queue<Student, std::vector<Student>, comparator> sq;
    sq.push(Student(91, "Eva"));
    sq.push(Student(78, "Max"));
    sq.push(Student(82, "El"));
    sq.push(Student(42, "Drax"));

    std::cout << sq.top().marks << " " << sq.top().name << " \n";
    sq.pop();
    std::cout << sq.top().marks << " " << sq.top().name << " \n";
    sq.pop();
    std::cout << sq.top().marks << " " << sq.top().name << " \n";
    sq.pop();
    std::cout << sq.top().marks << " " << sq.top().name << " \n";
    sq.pop();
  
    return 0;
}