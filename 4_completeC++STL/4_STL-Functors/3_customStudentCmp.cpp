#include<iostream>
#include<algorithm>
#include<vector>

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
        //sorting in asc order on the basis of marks
        if(a.marks == b.marks){
            return a.name < b.name;
        }
        return a.marks > b.marks;//if a.marks < b.marks then object a will kept before object b
    }
};

int main(){
     
    std::vector<Student> arr;
    arr.push_back(Student(78, "Timmy"));
    arr.push_back(Student(88, "Julie"));
    arr.push_back(Student(88, "Mayo"));
    arr.push_back(Student(48, "Philip"));

    std::sort(arr.begin(),arr.end(), comparator());

    for(Student a : arr) {
        std::cout << a.marks << " " << a.name << "\n";
    } 

    

    return 0;
}