#include<iostream>
#include<string>

class Student {

        //Attributes/Properties-->
    public:
        int id;
        std::string name;
        int nos;
        float *gpa;
    
    private:
        std::string game;
        int age;

    public:
        void setGpa(float a){  
            *this->gpa = a;
        } 

        float getGpa() const{
            return *this->gpa;
        }

        int getAge() {
            return this->age;
        }
 
    
        //Constructor(ctor)-->
        //default ctor(this constructor is called by default by the compiler if there is no ctor is called explicitely)
        Student() {
            std::cout << "Default constructor is called." << '\n';
        }

        //parameterised ctor
        Student(int id, int age, std::string name, int nos, float gpa, std::string game) {
            std::cout << "Student parameterised constuctor is called." << '\n';
            this->id = id;
            this->age = age;
            this->name = name;
            this->nos = nos;
            this->gpa = new float(gpa);
            this->game = game;
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


        ~Student() {
            std::cout << "Student default destructor is called." << '\n';
            delete this->gpa;
        }

    private: 
       void playingVideoGame() {
        std::cout << this->name << " is playing video game." << '\n';
       }  
}; 

int main() {

    Student A(5, 19, "El", 5, 8.6, "BGMI");

    std::cout << A.getGpa() << "\n";
    A.setGpa(8.9);
    std::cout << A.getGpa() << "\n";
    
    return 0;
}