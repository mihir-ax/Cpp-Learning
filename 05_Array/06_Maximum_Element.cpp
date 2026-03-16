#include <bits/stdc++.h>
using namespace std;

int main()
{
  // Find the maximum value out of all the elements in the array.
  int arr[] = {5, 4, 8, 9, 10, 52, 6, 42};

  int max = 0;

  for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }

  cout << "The max value is : " << max;
}
