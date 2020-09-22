//
//  main.cpp
//  6_Inheritance
//
//  Created by Ashwani on 18/09/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

//Base class
class Student
{
protected:
    int rollNumber;
public:
    void setRollNumber(int rollNumber)
    {
        this->rollNumber = rollNumber;
    }
    
    void getRollNumber() const
    {
        cout << "Roll number " << rollNumber << endl;
    }
};

//Interm
class Test:public Student
{
protected:
    float sub1;
    float sub2;
public:
    void setMarks(float sub1, float sub2)
    {
        this->sub1 = sub1;
        this->sub2 = sub2;
        return;
    }
    void getMarks() const
    {
        cout << "Marks in Subject 1 " << sub1 <<  endl;
        cout << "Marks in Subject 2 " << sub2 <<  endl;
        return;
    }
};

//
class Result : public Test
{
    float total;
public:
    void displayResult()
    {
        total = sub1 + sub2;
        Student::getRollNumber();
        Test::getMarks();
        cout << "Total " << total << endl;
    }
};

int main()
{
    
    Result s1;
    s1.setRollNumber(123456);
    s1.setMarks(12, 13);
    s1.displayResult();
    return 0;
}
