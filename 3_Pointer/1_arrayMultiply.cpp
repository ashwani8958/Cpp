//
//  main.cpp
//  3_Pointer
//
//  Created by Ashwani on 22/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#include <iostream>

using namespace std;

//Function Prototypes
int *arrayMultiply(const int *const array1, size_t array1Size, const int *const array2, size_t array2Size);
void display(const int *const array, size_t size);

int main()
{
  const size_t array1Size {5};
  const size_t array2Size {3};

  int array1[] {1,2,3,4,5};
  int array2[] {10,20,30};

  cout << "Array 1: " ;
  display(array1, array1Size);

  cout << "Array 2: " ;
  display(array2, array2Size);

  int *array3 = arrayMultiply(array1, array1Size, array2, array2Size);
  constexpr size_t array3Size = array1Size * array2Size;

  cout << "Array 3: ";
  display(array3, array3Size);

  delete [] array3;//deleting dynamically allocated memory
  cout << endl;


  return 0;
}

int *arrayMultiply(const int *const array1, size_t array1Size, const int *const array2, size_t array2Size)
{
  int *array3 = new int[array1Size * array2Size];

  int position {0};
  for(int i{0}; i < array2Size ; i++)
  {
    for(int j{0}; j < array1Size; j++)
    {
      array3[position] = array1[j] * array2[i];
      position++;
    }

  }

  return array3;
}

void display(const int *const array, size_t size)
{
  cout << "[ ";
  for(int i{0}; i < size; i++)
  {
    cout << array[i] << " ";
  }
  cout <<  " ]" << endl;
}
