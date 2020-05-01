//
//  main.cpp
//  11_TheStandardTemplateLibrary(STL)
//
//  Created by Ashwani on 01/05/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#include <iostream>

using namespace std;

//Function Template
//Find minimum of the two argument
template <typename T>
T mini(T a, T b)
{
    return (a < b) ? a : b;
}

//Display the two agument
template <typename T1, typename T2>
void func(T1 a, T2 b)
{
    cout << a << " " << b << endl;
    
}

//swap two agrument of any type
template <typename T>
void my_swap(T &a, T &b)
{
    T temp = a;
    a=b;
    b=temp;
}

struct Person
{
    string name;
    int age;
    
    //Overloaded < operator
    bool operator<(const Person &rhs) const
    {
        return this->age < rhs.age;
    }
    
    //Overloaded = operator
    void operator=(Person &rhs)
    {
        Person temp;
        temp.age = this->age;
        temp.name = this->name;
        
        this->age = rhs.age;
        this->name = rhs.name;
        
        rhs.age = temp.age;
        rhs.name = temp.name;
    }
};

std::ostream &operator<<(std::ostream &os, const Person &p)
{
    os << p.name;
    return os;
}

int main()
{
    int x{100};
    int y{200};
    std::cout << x << ", " << y << std::endl;
    my_swap(x, y);
    std::cout << x << ", " << y << std::endl;
    
    Person p1 {"Curly", 15};
    Person p2 {"Moe", 30};
    
    Person p3 = mini(p1, p2);
    std::cout << p3.name << " is younger" << std::endl;
    
    cout << "\n--------------- Before Swap ------------------ " << endl;
    func(p1, p2);
    my_swap(p1, p2);
    cout << "\n--------------- After Swap ------------------- " << endl;
    func(p1, p2);
    
    std::cout << mini<int>(2,3) << std::endl;            // 2
    std::cout << mini(2,3) << std::endl;                 // 2
    std::cout << mini('A', 'B') << std::endl;            // A
    std::cout << mini(12.5, 9.2) << std::endl;           // 9.2
    std::cout << mini(5+2*2, 7+40) << std::endl;         // 9
    
    func<int,int>(10,20);
    func(10,20);
    func<char, double>('A', 12.4);
    func('A', 12.4);
    func(1000, "Testing");
    func(2000, std::string{"Frank"});
    

    return 0;
}
