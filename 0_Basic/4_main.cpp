#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class matrix
{
    int **ptr;
    int D1, D2;
public:
    void setValue(int IndexI, int IndexJ, int value)
    {
        ptr[IndexI][IndexJ] = value;
    }
    
    int getValue(int IndexI, int IndexJ)
    {
        return ptr[IndexI][IndexJ];
    }
    
    matrix(int x, int y)
    :D1(x), D2(y)
    {
        ptr = new int*[D1]; //Array of the pointer
        size_t i;
        for(i = 0; i < D1; i++)
            ptr[i] = new int [D2]; //create space for each row
    }
    
    ~matrix()
    {
        for(int i = 0; i < D1; i++)
        {
            cout << "deconstructor for int\n";
            delete ptr[i];
        }
        cout << "deconstructor for array\n";
        delete ptr;
    }
};

int main()
{
    int D1, D2, item;
    int indexI, indexJ;
    
    
    cout << "Enter the size of matix: ";
    cin >> D1 >> D2;
    matrix M1(D1,D2);
    
    cout << "Enter the array items: ";
    for(indexI = 0; indexI < D1; indexI++)
    {
        for (indexJ = 0; indexJ < D2; indexJ++)
        {
            cin >> item;
            M1.setValue(indexI, indexJ, item);
        }
    }
    
    for(indexI = 0; indexI < D1; indexI++)
    {
        for (indexJ = 0; indexJ < D2; indexJ++)
        {
            cout << setw(5) << M1.getValue(indexI, indexJ) ;
        }
        cout << endl;
    }
    
    
    return 0;
}
