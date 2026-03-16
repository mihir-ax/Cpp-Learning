#include <iostream>
using namespace std;

int main()
{
  // Calculate the product of all elements in a given array.

  // int array[] = {5, 8, 5, 4, 1, 3};

  // lets take array form user !!
  int size;
  cout << "Enter the digit of how many numbers you want to put in array : ";
  cin >> size;
  int array[size];

  for (int i = 0; i < size; i++)
  {
    cout << "Enter the " << i + 1 << " number : ";
    cin >> array[i];
  }

  cout << "You had given this : ";

  for (int i = 0; i < size; i++)
  {
    cout << array[i] << " ";
  }

  cout << "\n";

  int multiply = 1;
  for (int i = 0; i < (sizeof(array) / sizeof(array[0])); i++)
  {
    multiply *= array[i];
  }

  cout << "Multiply of the array is : " << multiply;
}
