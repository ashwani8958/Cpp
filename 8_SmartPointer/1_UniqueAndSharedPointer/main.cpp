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
    Test() : data(0) { std::cout << "Test constructor (" << data << ")" << std::endl; }
    Test(int data) : data (data) { std::cout << "Test constructor (" << data << ")" << std::endl; }
    int get_data() const {return data; }
    ~Test() {std::cout << "Test destructor (" << data << ")" << std::endl; }
};

void func(std::shared_ptr<Test> p)
{
    std::cout << "Use count: " << p.use_count() << std::endl;
}

int main()
{
//For unique example
#if 0
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
#endif
 /* ***************************** End For unique pointer example ********************************** */
        
        
 /* ******************************* Shared Pointer Example ******************************* */
#if 1
    // use_count – the number of shared_ptr objects
    // managing the heap object
    
    //    std::shared_ptr<int> p1 {new int {100} };
    //    std::cout << "Use count: "<< p1.use_count () << std::endl;         // 1
    //
    //    std::shared_ptr<int> p2 { p1 };            // shared ownwership
    //    std::cout << "Use count: "<< p1.use_count () << std::endl;         // 2
    //
    //    p1.reset();    // decrement the use_count; p1 is nulled out
    //    std::cout << "Use count: "<< p1.use_count() << std::endl;         // 0
    //    std::cout << "Use count: "<< p2.use_count() << std::endl;         // 1
    
    //    std::cout << "\n==========================================" << std::endl;
    //    std::shared_ptr<Test> ptr = std::make_shared<Test>(100);
    //    func(ptr);
    //    std::cout << "Use count: " << ptr.use_count() << std::endl;
    //    {
    //        std::shared_ptr<Test> ptr1 = ptr;
    //        std::cout << "Use count: " << ptr.use_count() << std::endl;
    //        {
    //            std::shared_ptr<Test> ptr2 = ptr;
    //            std::cout << "Use count: " << ptr.use_count() << std::endl;
    //            ptr.reset();
    //        }
    //        std::cout << "Use count: " << ptr.use_count() << std::endl;
    //
    //    }
    //    std::cout << "Use count: " << ptr.use_count() <<std:: endl;
    
    std::cout << "\n==========================================" << std::endl;
    std::shared_ptr<Account> acc1 = std::make_shared<Trust_Account>("Larry", 10000, 3.1);
    std::shared_ptr<Account> acc2 = std::make_shared<Checking_Account>("Moe", 5000);
    std::shared_ptr<Account> acc3 = std::make_shared<Savings_Account>("Curly", 6000);
    
    std::vector<std::shared_ptr<Account>> accounts;
    accounts.push_back(acc1);
    accounts.push_back(acc2);
    accounts.push_back(acc3);
    
    for (const auto &acc: accounts) {
        std::cout << *acc << std::endl;
        std::cout << "Use count: " << acc.use_count() << std::endl;
    }
    
    std::cout << "==========================================" << std::endl;
#endif
     /* ******************************* End of Shared Pointer Example ******************************* */
    return 0;
}
