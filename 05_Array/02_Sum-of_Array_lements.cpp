#include <iostream>
using namespace std;

int main()
{
  // Calculate the sum of all elements in a given array.

  int array[] = {5, 8, 5, 4, 1, 3};
  int sum = 0;
  for (int i = 0; i < (sizeof(array) / sizeof(array[0])); i++)
  {
    sum += array[i];
  }
  cout << "The total sum is : " << sum;
}
