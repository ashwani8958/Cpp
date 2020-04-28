//
//  main.cpp
//  8_SmartPointer
//
//  Created by Ashwani on 28/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#include "Account.hpp"
#include "Checking_Account.hpp"
#include "Trust_Account.hpp"
#include "Savings_Account.hpp"

#include <memory>
#include <vector>

class Test
{
private:
    int data;
public:
    Test() : data{0} { std::cout << "Test constructor (" << data << ")" << std::endl; }
    Test(int data) : data {data} { std::cout << "Test constructor (" << data << ")" << std::endl; }
    int get_data() const {return data; }
    ~Test() {std::cout << "Test destructor (" << data << ")" << std::endl; }
};

int main()
{
//         Test *t1 = new Test {1000};
//          delete t1;
//           std::unique_ptr<Test> t1 {new Test{100}};
//           std::unique_ptr<Test> t2 = std::make_unique<Test>(1000);
//
//           std::unique_ptr<Test> t3;
//           t3 = std::move(t1);
//           if (!t1)
//               std::cout << "t1 is nullptr" << std::endl;
//
        std::unique_ptr<Account> a1 = std::make_unique<Checking_Account>("Moe", 5000);
        std::cout << *a1 << std::endl;
        a1->deposit(5000);
        std::cout << *a1 << std::endl;

        std::vector<std::unique_ptr<Account>> accounts;

        accounts.push_back( make_unique<Checking_Account>("James", 1000));
        accounts.push_back( make_unique<Savings_Account>("Billy", 4000, 5.2));
        accounts.push_back( make_unique<Trust_Account>("Bobby", 5000, 4.5));

        for (const auto &acc: accounts)
        {
            std::cout << *acc << std::endl;
        }
    return 0;
}
