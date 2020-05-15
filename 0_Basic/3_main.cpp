#include<iostream>
#include <array>

using namespace std;

int power(int num, int pow)
{
    if(pow == 1)
        return num;
    else
    {
        return (num * power(num, pow - 1));
    }
}

int main()
{
    cout << "Power : " << power(4,3) << endl;
    return 0;
}
