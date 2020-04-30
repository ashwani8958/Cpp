//
//  main.cpp
//  8_SmartPointer
//
//  Created by Ashwani on 29/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#include <iostream>
#include <memory>
#include <vector>

class Test
{
private:
    int data;
public:
    //No Arg Constructor
    Test()
    : data(0)
    {
        std::cout << "\tTest constructor (" << data << ")" << std::endl;
        
    }
    
    //Overloaded Constructor
    Test(int data)
    : data (data)
    {
        std::cout << "\tTest constructor (" << data << ")" << std::endl;
        
    }
    
    //Getter method
    int get_data() const {return data; }
    
    //Destructor
    ~Test()
    {
        std::cout << "\tTest destructor (" << data << ")" << std::endl;
        
    }
};

// Function prototypes
auto make();
void fill(std::vector<std::shared_ptr<Test>> &vec, int num);
void display(const std::vector<std::shared_ptr<Test>>&vec);


auto make()
{
    return std::make_unique<std::vector<std::shared_ptr<Test>>>();
}

void fill(std::vector<std::shared_ptr<Test>> &vec, int num)
{
    int temp;
    for (int i=1; i<=num; ++i)
    {
        std::cout << "Enter data point [" << i << "] : ";
        std::cin >> temp;
        //        std::shared_ptr<Test> ptr = std::make_shared<Test>(temp);
        //        vec.push_back(ptr);
        vec.push_back(std::make_shared<Test>(temp));
        
    }
}

void display(const std::vector<std::shared_ptr<Test>>&vec)
{
    std::cout << "\nDisplaying vector data" << std::endl;
    std::cout << "=======================" << std::endl;
    for (const auto &ptr: vec)
        std::cout << ptr->get_data() << std::endl;
    
    std::cout << "=======================" << std::endl;
}

int main()
{
    std::unique_ptr<std::vector<std::shared_ptr<Test>>> vec_ptr;
    vec_ptr = make();
    std::cout << "How many data points do you want to enter: ";
    int num;
    std::cin >> num;
    fill(*vec_ptr, num);
    display(*vec_ptr);
    return 0;
}