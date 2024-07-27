#include<iostream>
#include<string>

class Student {

    public:

        //Attributes/Properties-->
        int id;
        int age;
        std::string name;
        int nos;
        int *gpa;


        //Constructor(ctor)-->

        //default ctor(this constructor is called by default by the compiler if there is no ctor is called explicitely)
        Student() {
            std::cout << "Default constructor is called." << '\n';
        }

        //parameterised ctor
        Student(int id, int age, std::string name, int nos, float gpa) {
            std::cout << "Student parameterised constuctor is called." << '\n';
            this->id = id;
            this->age = age;
            this->name = name;
            this->nos = nos;
            this->gpa = new int(gpa);
        }

        //copy ctor
        Student(const Student &scrobj) {
            std::cout << "Student copy constuctor is called." << '\n';
            this->id = scrobj.id;//srcobj is poiting to Student "E"
            this->age = scrobj.age;
            this->name = scrobj.name;
            this->nos = scrobj.nos;
        }


        //Behaviour/Method/Function
        void study() {
            std::cout << this->name << " is studying."<< '\n';
        }

        void sleep() {
            std::cout << this->name << " is sleeping." << '\n';
        }

        void bunk() {
            std::cout << this->name << " bunked the class." << '\n';
        }


        //Destructor(dtor)(dtor is called by defualt by the compiler)
        ~Student() {
            std::cout << "Student default destructor is called." << '\n';
            delete this->gpa;//pointer is allocated dyanmicallly so we can free it's memory from here
        }
}; 

int main() {

    //naive approach to create object(using default constructor)
    // Student A;//constuctor is called at that line(syntax to call default constructor)
    // A.id = 1;
    // A.age = 20;
    // A.name = "Alex"; 
    // A.nos = 6;
    // A.study();

    // Student B;//constuctor(for Student B) is called at that line
    // B.id = 2;
    // B.age = 21;
    // B.name = "Bobby";
    // B.nos = 4;
    // B.bunk();

    //creating object of class "Student" and calling the constuctor using parametersed ctor
    // Student A(1,20,"Alex", 5);//syntax to call parameterised ctor
    // Student B(2,19,"Bobby", 4);
    // Student C(3,21,"Chisiya", 7);
    // Student D(4,20,"Drax", 6);

    // std::cout << A.name << "," << A.age << " " << B.name << ","<< B.age << " " << C.name << "," << C.age << " " << D.name <<"," << D.age << '\n';
    // A.bunk();
    // B.sleep();
    // C.study();
    // D.sleep();

    //copy ctor
    // Student E = A;//snytax to call copy ctor
    // // Student C(A);//syntax-2

    // std::cout << E.id << "," << E.name <<"," << E.age << "," << E.nos << '\n';
     
    //Dynamic allocation / Student Pointer
    Student *A = new Student(1,15,"Akash", 5, 9.87);
    std::cout << A->name << " " << A->age << " " << A->nos << " " << A->gpa << '\n';
    A->study();
    //destructor is not called by default while using heap memory, so we need to call it explicitely
    delete A;
    
    return 0;
}