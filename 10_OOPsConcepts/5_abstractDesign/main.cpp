#include<iostream>
#include "bird.h"

void birdDoesSomething(Bird*&bird) 
{
    bird->eat();
    bird->fly();
    bird->rest();
    bird->fly();
    bird->rest();
    bird->eat();
    bird->fly();
    bird->eat();
    bird->fly();
}

int main() 
{
    Bird *bird = new Eagle();
    birdDoesSomething(bird);

    return 0;
}