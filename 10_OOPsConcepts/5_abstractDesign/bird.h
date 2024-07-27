#define BIRD_H
#include<iostream>

class Bird 
{
    public:
        virtual void eat() = 0;
        virtual void fly() = 0;
        virtual void rest() = 0;
        //classes that inherits this class has to implement pure virtual functions
};

class sparrow : public Bird 
{
    public:
        void eat(){
            std::cout << "Sparrow is eating.\n"; 
        }
        void fly(){
            std::cout << "Sparrow is flying.\n";
        }
        void rest() {
            std::cout << "Sparrow is taking rest in the nest.\n";
        }
};

class pigeon : public Bird 
{
    public:
        void eat(){
            std::cout << "Pigeon is eating.\n"; 
        }
        void fly(){
            std::cout << "Pigeon is flying.\n";
        }
        void rest() {
            std::cout << "Pigeon is taking rest in the nest.\n";
        }
};

class Eagle : public Bird 
{
    public:
        void eat(){
            std::cout << "Eagle is eating.\n"; 
        }
        void fly(){
            std::cout << "Eagle is flying so fast.\n";
        }
        void rest() {
            std::cout << "Eagle is taking rest in the nest.\n";
        }
};

class Parrot : public Bird 
{
    public:
        void eat(){
            std::cout << "Parrot is eating.\n"; 
        }
        void fly(){
            std::cout << "Parrot is flying.\n";
        }
        void rest() {
            std::cout << "Parrot is taking rest in the nest.\n";
        }
};