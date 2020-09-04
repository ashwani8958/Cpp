#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class space
{
    
    friend void operator+(space &obj);
    
    int x;
    int y;
    
public:
    space(int x = 1, int y = 1)
    :x(x), y(y)
    {
        
    }
    
    void getdata() const
    {
        cout << "X: "<< x << endl;
        cout << "y: "<< y << endl;
        
    }
    
    void operator-()
    {
        x = -x;
        y = -y;
    }
};

void operator+(space &obj)
{
    obj.x = -obj.x;
    obj.y = -obj.y;
}

int main()
{
    space S1;
    
    S1.getdata();
    
    -S1;
    
    S1.getdata();
    
    +(S1);
}
