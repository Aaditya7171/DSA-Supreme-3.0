// Runtime polymorphism using "virtual" keyword
#include<iostream>

class Shape /*final*/ //final->shape can't be inherited
{
    public:
        // void draw() // early binding(compile time)
        virtual void draw() /*final*/ // final->draw can't be overridden // late binding (runtime)
        {
            std::cout << "generic drawing..." << "\n";
        }
};

class Circle : public Shape
{
    public:
        void draw() override
        {
            std::cout << "Circle drawing..." << "\n";
        }
};

class Triangle : public Shape
{
    public:
        void draw() override
        {
            std::cout << "Triangle drawing..." << "\n";
        }
};

class Rectangle : public Shape
{
    public:
        void draw() override
        {
            std::cout << "Circle drawing..." << "\n";
        }
};

// keyword "override" and clears the intensions that fun is overridden
// hence, when we called draw() of shape, draw() of relevant shape is called at runtime-> it is called function overriding

void shapeDrawing(Shape *s)
{
    s->draw(); // draw is polymorphic
}
//without virtual keyword, we would have to make different functions for each shape to make drawing of it



int main()
{
    // Circle c;
    // Rectangle r;
    // Triangle *t = new Triangle();
    // shapeDrawing(&c);
    // shapeDrawing(t);
    // shapeDrawing(&r);

    //casting without vitual keyword
    Shape *s = new Shape();
    s->draw();
    Shape *c = new Circle();//upcasting
    c->draw();
    Circle *c1 = new Circle();
    c1->draw();
    Shape *s2 = new Shape();//downcasting
    Circle *c2 = (Circle *)s2;
    c2->draw();

    // o/p without virtual keyword
    // generic drawing...
    // generic drawing... // problamatic
    // Circle drawing...
    // Circle drawing... // problamatic

    return 0;
}