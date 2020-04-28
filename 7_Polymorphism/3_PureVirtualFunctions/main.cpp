//
//  main.cpp
//  7_Polymorphism
//
//  Created by Ashwani on 28/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

/*
 1. A pure virtual function (or abstract function) in C++ is a virtual function for which we don’t have implementation, we only declare it. A pure virtual function is declared by assigning 0 in declaration
 
 2. Sometimes implementation of all function cannot be provided in a base class because we don’t know the implementation. Such a class is called abstract class.
    a. A class is abstract if it has at least one pure virtual function.
    b. An abstract class can have constructors.
 */
#include <iostream>
#include <vector>

using namespace std;

//Shape is a abstract class
class Shape
{
private:
    //Attributes common to all changes
public:
    //Pure virtual Function
    virtual void draw() = 0;
    virtual void rotate() = 0;
    
    //Destructor
    virtual ~Shape() {}
};

// Abstract class
class Open_Shape: public Shape
{
public:
    virtual ~Open_Shape() { }
};

// Abstract class
class Closed_Shape : public Shape
{
public:
    virtual ~Closed_Shape() { };
};

// Concrete class
class Line: public Open_Shape
{
public:
    virtual void draw() override
    {
        std::cout << "Drawing a line" << std::endl;
    }
    virtual void rotate() override
    {
        std::cout << "Rotating a line" << std::endl;
    }
    virtual ~Line() {}
};

// Concrete class
class Circle: public Closed_Shape
{
public:
    virtual void draw() override
    {
        std::cout << "Drawing a circle" << std::endl;
    }
    virtual void rotate() override
    {
        std::cout << "Rotating a circle" << std::endl;
    }
    virtual ~Circle() {}
};

// Concrete class
class Square: public Closed_Shape
{
public:
    virtual void draw() override
    {
        std::cout << "Drawing a square" << std::endl;
    }
    virtual void rotate() override
    {
        std::cout << "Rotating a square" << std::endl;
    }
    virtual ~Square() {}
};


void screen_refresh(const std::vector<Shape *> &shapes)
{
    std::cout << "Refreshing" << std::endl;
    for (const auto p: shapes)
        p->draw();
}

int main() {
//    Shape s;
//    Shape *p = new Shape();

//    Circle c;
//    c.draw();

//    Shape *ptr = new Circle();
//    ptr->draw();
//    ptr->rotate();

    Shape *s1 = new Circle();
    Shape *s2 = new Line();
    Shape *s3 = new Square();

    std::vector<Shape *> shapes {s1,s2,s3};

//    for (const auto p: shapes)
//        p->draw();

    screen_refresh(shapes);

    delete s1;
    delete s2;
    delete s3;
    
    return 0;
}
