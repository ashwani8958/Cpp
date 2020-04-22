#include <iostream>
#include <string>
#include <vector>

using namespace std;

//Declare a Class
class Player
{
public:
  //attributes or data
  //initialisation of attributes are the feature of C++11 onward
  string name{"Frank"};
  int health{0};
  int xp{0};

  //Method or function
  void talk(string textToSay)
  {
    cout << name << " says " << textToSay << endl;
  }
  bool isDead();
};

class Account
{
public:
  //attributes
  string name;
  double balance;

  //method
  bool withdraw(double amount)
  {
    balance -= amount;
    cout << "Total balance after withdraw = " << balance << endl;
    return true;
  }
  bool deposite(double amount)
  {
    balance += amount;
    cout << "Total balance after deposite = " << balance << endl;
    return true;
  }
};

int main()
{
  //Class object of player
  Player frank, jim;
  frank.name = "Frank";
  frank.health = 100;
  frank.xp = 87;
  frank.talk("Hi there");                 //Frank says Hi there

  jim.name = "Jim";
  jim.talk("Hi there");                   //Jim says Hi there

  //Pointer to a class object
  Player *enemy = new Player;             //Memory will be allocated from the heap
  enemy->name = "Enemy";
  enemy->health = 100;
  enemy->xp = 78;

  enemy->talk("I will find you");

  //Class object of Account
  Account frankAccount;
  frankAccount.name = "Frank";
  frankAccount.balance = 100;

  frankAccount.withdraw(50);
  frankAccount.deposite(25);

  //Pointer to a class object
  Account *jimAccount = new Account;       //Memory will be allocated from the heap
  jimAccount->name = "Jim";
  jimAccount->balance = 400;


  return 0;
}
