#include <iostream>
using namespace std;

int main()
{
    char *p{nullptr};
    p = new char[7];
    strcpy(p, "hello");
    cout << &p <<endl;
    return 0;
}
